/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 10:36:46 by candace       #+#    #+#                 */
/*   Updated: 2022/01/11 12:55:41 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sets(const char *s1, char del)
{
	size_t	cnt1;
	size_t	set;

	cnt1 = 0;
	set = 0;
	while (s1[cnt1] != '\0')
	{
		if (s1[cnt1] != del && cnt1 == 0)
			set++;
		else if (s1[cnt1] != del && s1[cnt1 - 1] == del)
			set++;
		cnt1++;
	}
	return (set);
}

static int	ft_start(const char *s1, char del, int cntst)
{
	size_t	start;
	int		cnt2;

	start = 0;
	cnt2 = -1;
	while (s1[start] != '\0' && cnt2 < cntst)
	{
		if (start == 0 && s1[start] != del)
			cnt2++;
		else if (s1[start] != del && s1[start - 1] == del)
			cnt2++;
		start++;
	}
	if (start == 0)
		return (start);
	return (start - 1);
}

static int	ft_setlen(const char *s1, char del, int n)
{
	size_t	cntsl;

	cntsl = 0;
	while (s1[cntsl + n] != '\0' && s1[cntsl + n] != del)
		cntsl++;
	return (cntsl);
}

static void	*ft_free(char **ret, int cntf)
{
	while (cntf >= 0)
	{
		free(ret[cntf]);
		cntf--;
	}
	free(ret);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		set;
	int		start;
	int		len;
	char	**ret;
	int		cnt;

	cnt = 0;
	if (s == NULL)
		return (NULL);
	set = ft_sets(s, c);
	ret = malloc((set + 1) * sizeof(char *));
	if (ret == NULL)
		return (NULL);
	while (cnt < set)
	{
		start = ft_start(s, c, cnt);
		len = ft_setlen(s, c, start);
		ret[cnt] = ft_substr(s, start, len);
		if (ret[cnt] == NULL)
			return (ft_free(ret, cnt));
		cnt++;
	}
	ret[cnt] = NULL;
	return (ret);
}
