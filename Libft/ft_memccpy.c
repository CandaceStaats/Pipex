/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 11:47:16 by candace       #+#    #+#                 */
/*   Updated: 2022/01/11 13:32:26 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	cnt;

	cnt = 0;
	while (cnt < n)
	{
		((char *)dst)[cnt] = (unsigned char)((char *)src)[cnt];
		if (((unsigned char)((char *)src)[cnt]) == (unsigned char)c)
			return (&dst[cnt + 1]);
		cnt++;
	}
	return (NULL);
}
