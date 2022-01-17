/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 15:24:43 by candace       #+#    #+#                 */
/*   Updated: 2021/01/26 15:17:31 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*cnt;

	cnt = (unsigned char *)s;
	while (n)
	{
		n--;
		*cnt = 0;
		cnt++;
	}
}
