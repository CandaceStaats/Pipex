/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pipexlib.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/28 11:16:28 by candace       #+#    #+#                 */
/*   Updated: 2022/01/11 13:19:46 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEXLIB_H
# define PIPEXLIB_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include "Libft/libft.h"
# include <stdio.h>
# include <fcntl.h>
# include <sys/wait.h>

int		path(char *env[]);
char	*valid(char *path[], char *cmd);
void	freesplit(char **str);
#endif
