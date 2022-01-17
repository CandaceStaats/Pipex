/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/18 12:30:19 by candace       #+#    #+#                 */
/*   Updated: 2022/01/11 13:23:00 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	cnt;

	cnt = 0;
	while (cnt < n)
	{
		if (((unsigned char *)s1)[cnt] != ((unsigned char *)s2)[cnt])
		{
			return (((unsigned char *)s1)[cnt] - ((unsigned char *)s2)[cnt]);
		}
		cnt++;
	}
	return (0);
}
