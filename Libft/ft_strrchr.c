/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cstaats <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 12:22:32 by cstaats       #+#    #+#                 */
/*   Updated: 2022/01/11 13:23:30 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *str, int c)
{
	size_t	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		cnt++;
	}
	while (1)
	{
		if (c == str[cnt])
			return ((char *)&str[cnt]);
		if (cnt == 0)
			break ;
		cnt--;
	}
	return (NULL);
}
