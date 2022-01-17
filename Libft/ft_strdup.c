/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 10:39:29 by candace       #+#    #+#                 */
/*   Updated: 2020/11/21 14:36:32 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy_s1;
	size_t	cnt;

	cnt = 0;
	cpy_s1 = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (cpy_s1 == NULL)
		return (NULL);
	while (s1[cnt] != '\0')
	{
		cpy_s1[cnt] = s1[cnt];
		cnt++;
	}
	cpy_s1[cnt] = '\0';
	return (cpy_s1);
}
