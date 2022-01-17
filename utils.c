/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/28 11:15:39 by candace       #+#    #+#                 */
/*   Updated: 2022/01/12 13:24:28 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pipexlib.h"

int	path(char *env[])
{
	int		cnt;

	cnt = 0;
	while (env[cnt] != NULL)
	{
		if (env[cnt][0] == 'P' && env[cnt][1] == 'A'
		&& env[cnt][2] == 'T' && env[cnt][3] == 'H'
		&& env[cnt][4] == '=')
			return (cnt);
		cnt++;
	}
	return (-1);
}

char	*valid(char *path[], char *cmd)
{
	char	*full;
	int		cnt;

	cnt = 0;
	while (path[cnt] != NULL)
	{
		full = ft_strjoin(ft_strjoin(path[cnt], "/"), cmd);
		if (full == NULL)
			return (NULL);
		if (access(full, X_OK) == 0)
			return (full);
		free(full);
		cnt++;
	}
	return (NULL);
}

void	freesplit(char **str)
{
	int	cntf;

	cntf = 0;
	while (str[cntf] != NULL)
	{
		free(str[cntf]);
		cntf++;
	}
	free(str);
}
