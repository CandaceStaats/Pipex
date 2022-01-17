/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 13:30:11 by candace       #+#    #+#                 */
/*   Updated: 2022/01/11 13:29:48 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	cnt;

	if (src == dst)
		return (dst);
	if (src < dst)
	{
		cnt = len;
		while (cnt > 0)
		{
			cnt--;
			((char *)(dst))[cnt] = ((char *)(src))[cnt];
		}
	}
	else
	{
		cnt = 0;
		while (cnt < len)
		{
			((char *)(dst))[cnt] = ((char *)(src))[cnt];
			cnt++;
		}
	}
	return (dst);
}
