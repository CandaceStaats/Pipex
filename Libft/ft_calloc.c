/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 16:51:54 by candace       #+#    #+#                 */
/*   Updated: 2022/01/11 13:29:12 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*pnt;

	pnt = malloc(nitems * size);
	if (pnt == NULL)
		return (NULL);
	ft_bzero(pnt, (nitems * size));
	return (pnt);
}
