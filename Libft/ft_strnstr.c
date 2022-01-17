/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 16:03:54 by candace       #+#    #+#                 */
/*   Updated: 2022/01/11 12:51:06 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	cnt;
	size_t	needcnt;

	cnt = 0;
	if (needle[0] == '\0')
		return ((char *)hay);
	while (hay[cnt] != '\0' && cnt < len)
	{
		if (needle[0] == hay[cnt])
		{
			needcnt = 0;
			while (needle[needcnt] == hay[cnt + needcnt]
				&& needle[needcnt] != '\0' && cnt + needcnt < len)
			{
				needcnt++;
			}
			if (needle[needcnt] == '\0')
				return ((char *)&hay[cnt]);
		}
		cnt++;
	}
	return (NULL);
}
