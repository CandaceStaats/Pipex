/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cstaats <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 16:45:32 by cstaats       #+#    #+#                 */
/*   Updated: 2022/01/11 13:26:27 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	cnt;
	int	pos;

	res = 0;
	cnt = 0;
	pos = 1;
	while (str[cnt] == '\n' || str[cnt] == ' ' || str[cnt] == '\t'
		|| str[cnt] == '\v' || str[cnt] == '\f' || str[cnt] == '\r')
		cnt++;
	if (str[cnt] == '-')
	{
		pos = -1;
		cnt++;
	}
	else if (str[cnt] == '+')
		cnt++;
	while (str[cnt] >= '0' && str[cnt] <= '9')
	{
		res = res * 10 + str[cnt] - '0';
		cnt++;
	}
	return (res * pos);
}
