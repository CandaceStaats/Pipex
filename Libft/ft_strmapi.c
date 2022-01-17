/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 14:04:37 by candace       #+#    #+#                 */
/*   Updated: 2021/01/19 16:01:53 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		cnt;

	cnt = 0;
	if (s == NULL)
		return (NULL);
	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (s[cnt] != '\0')
	{
		result[cnt] = (*f)(cnt, s[cnt]);
		cnt++;
	}
	result[cnt] = '\0';
	return (result);
}
