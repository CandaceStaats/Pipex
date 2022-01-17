/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 15:53:16 by candace       #+#    #+#                 */
/*   Updated: 2022/01/11 13:31:32 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cnt;

	cnt = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (cnt < n)
	{
		((char *)dst)[cnt] = ((char *)src)[cnt];
		cnt++;
	}
	return (dst);
}
