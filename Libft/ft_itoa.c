/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 12:25:35 by candace       #+#    #+#                 */
/*   Updated: 2022/01/11 13:28:44 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_mem(long int store)
{
	int	len;

	len = 0;
	if (store == 0)
		len = 1;
	else if (store < 0)
	{
		len = 1;
		store = -store;
	}
	while (store)
	{
		store /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = ft_mem(n);
	str = ft_calloc((len + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 9)
	{
		str[len - 1] = n % 10 + '0';
		n /= 10;
		len--;
	}
	str[len - 1] = n % 10 + '0';
	return (str);
}
