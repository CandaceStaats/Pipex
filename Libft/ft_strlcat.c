/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 13:49:53 by candace       #+#    #+#                 */
/*   Updated: 2022/01/11 13:29:30 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	cnt;
	size_t	cntsrc;

	cntsrc = 0;
	cnt = 0;
	if (n == 0)
		return (ft_strlen(src));
	while (dst[cnt] != '\0' && cnt < n)
		cnt++;
	while (src[cntsrc] != '\0' && cntsrc + cnt + 1 < n)
	{
		dst[cnt + cntsrc] = src[cntsrc];
		cntsrc++;
	}
	if (cnt < n)
		dst[cnt + cntsrc] = '\0';
	while (src[cntsrc] != '\0')
	{
		cntsrc++;
	}
	return (cnt + cntsrc);
}
