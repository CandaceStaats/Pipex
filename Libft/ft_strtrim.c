/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 15:51:05 by candace       #+#    #+#                 */
/*   Updated: 2022/01/11 13:30:11 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static void	ft_fill(char *s1, char *s2, char *s3)
{
	size_t	cnt;

	cnt = 0;
	while ((size_t)(s2 - s1) > cnt)
	{
		s3[cnt] = s1[cnt];
		cnt++;
	}
	s3[cnt] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	cnt;
	char	*str;
	char	*str2;
	char	*str3;

	cnt = 0;
	if (s1 == NULL)
		return (NULL);
	while (s1[cnt] != '\0' && ft_strchr(set, s1[cnt]))
		cnt++;
	str = (char *)&s1[cnt];
	cnt = ft_strlen(s1);
	while (cnt != 0 && ft_strchr(set, s1[cnt]))
		cnt--;
	str2 = (char *)&s1[cnt + 1];
	if (str2 < str)
		return (ft_strdup(""));
	str3 = malloc((((str2 - str) + 1)) * sizeof(char));
	if (str3 == NULL)
		return (NULL);
	ft_fill(str, str2, str3);
	return (str3);
}
