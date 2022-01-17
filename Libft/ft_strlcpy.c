/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cstaats <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 10:39:32 by cstaats       #+#    #+#                 */
/*   Updated: 2022/01/11 13:22:22 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	cnt;

	cnt = 0;
	if (src == NULL)
		return (0);
	if (dst == NULL)
		return (ft_strlen(src));
	if (n == 0)
		return (ft_strlen(src));
	while (src[cnt] != '\0' && cnt < n - 1)
	{
		dst[cnt] = src[cnt];
		cnt++;
	}
	dst[cnt] = '\0';
	return (ft_strlen(src));
}
