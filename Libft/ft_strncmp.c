/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cstaats <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 16:52:32 by cstaats       #+#    #+#                 */
/*   Updated: 2022/01/11 13:30:48 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	cnt;
	size_t	cnt2;

	cnt = 0;
	cnt2 = 0;
	if (n == 0)
		return (0);
	while (str1[cnt] != '\0')
		cnt++;
	while (str2[cnt2] != '\0')
		cnt2++;
	if (cnt == 0 || cnt2 == 0)
		return ((cnt2 == 0) - (cnt == 0));
	cnt = 0;
	while (cnt < n)
	{
		if ((unsigned char)str1[cnt] - (unsigned char)str2[cnt] != 0)
			return ((unsigned char)str1[cnt] - (unsigned char)str2[cnt]);
		if ((unsigned char)str1[cnt] == '\0'
			|| (unsigned char)str2[cnt] == '\0')
			return ((unsigned char)str1[cnt] - (unsigned char)str2[cnt]);
		cnt++;
	}
	return (0);
}
