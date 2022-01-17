/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/07 10:46:46 by candace       #+#    #+#                 */
/*   Updated: 2022/01/12 13:21:11 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pipexlib.h"

static void	closefree(int inout[2], char **cmd, char *cmd1 )
{
	close(inout[0]);
	close(inout[1]);
	free(cmd1);
	freesplit(cmd);
}

int	cmds(char *directories[], char *argv, char *envp[], int inout[2])
{
	char	**cmd;
	char	*cmd1;
	int		fork1;

	cmd = ft_split(argv, ' ');
	if (cmd == NULL)
		return (-1);
	cmd1 = valid(directories, cmd[0]);
	if (cmd1 == NULL)
		perror(NULL);
	fork1 = fork();
	if (fork1 < 0)
		return (-1);
	if (fork1 == 0)
	{
		if (dup2(inout[0], STDIN_FILENO) < 0)
			perror(NULL);
		if (dup2(inout[1], STDOUT_FILENO) < 0)
			perror (NULL);
		execve(cmd1, cmd, envp);
	}
	else
		closefree(inout, cmd, cmd1);
	return (1);
}

void	run(char *directories[], char *argv[], char *envp[])
{
	int		fdin;
	int		fdout;
	int		pipe1[2];

	fdin = open(argv[1], O_RDONLY);
	if (fdin < 0)
	{
		perror(NULL);
		exit(EXIT_FAILURE);
	}
	fdout = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fdout < 0)
	{
		perror(NULL);
		exit(EXIT_FAILURE);
	}
	pipe(pipe1);
	if (cmds(directories, argv[2], envp, (int []){fdin, pipe1[1]}) < 0)
		perror(NULL);
	if (cmds(directories, argv[3], envp, (int []){pipe1[0], fdout}) < 0)
		perror(NULL);
}

int	main(int argc, char *argv[], char *env[])
{
	int		pathcnt;
	char	**directories;

	if (argc != 5)
		return (1);
	pathcnt = path(env);
	if (pathcnt == -1)
		exit(EXIT_FAILURE);
	directories = ft_split(&env[pathcnt][5], ':');
	run(directories, argv, env);
	while (wait(NULL) == 0)
		;
	freesplit(directories);
	return (0);
}
