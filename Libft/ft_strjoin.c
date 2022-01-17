/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 08:43:37 by candace       #+#    #+#                 */
/*   Updated: 2022/01/11 13:24:34 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	ft_joinstr(char *str3, char const *s1, char const *s2)
{
	size_t	cnt;
	size_t	cnt2;
	size_t	cnt3;

	cnt = 0;
	cnt2 = 0;
	cnt3 = 0;
	while (s1[cnt2] != '\0')
	{
		str3[cnt3] = s1[cnt2];
		cnt3++;
		cnt2++;
	}
	while (s2[cnt] != '\0')
	{
		str3[cnt3] = s2[cnt];
		cnt3++;
		cnt++;
	}
	str3[cnt3] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	cnt;
	char	*str3;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	cnt = ft_strlen(s2) + ft_strlen(s1);
	str3 = malloc((cnt + 1) * sizeof(char));
	if (str3 == NULL)
		return (NULL);
	ft_joinstr(str3, s1, s2);
	return (str3);
}
