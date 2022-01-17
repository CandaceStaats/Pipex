/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/24 09:00:02 by candace       #+#    #+#                 */
/*   Updated: 2020/12/09 15:59:08 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	cnt;
	char			*substr;

	cnt = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	substr = malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (cnt < len && s[cnt + start] != '\0')
	{
		substr[cnt] = s[cnt + start];
		cnt++;
	}
	substr[cnt] = '\0';
	return (substr);
}
