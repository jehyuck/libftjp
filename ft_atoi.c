/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:58:39 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/11 12:58:48 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static const	char	*ft_isspace(const char *str)
{
	while ((*str >= 9 && *str <= 13 && *str) || *str == ' ')
		str++;
	return (str);
}

static const	char	*ft_count_minus(const char *str, int *rtn)
{
	*rtn = 0;
	while (*str)
	{
		if (*str == '+' || *str == '-')
		{
			if (*str == '-')
				*rtn += 1;
		}
		else
			break ;
		str++;
	}
	return (str);
}

static	int	find_num(const char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int	minus;
	int	rtn;
	int	i;
	int	j;
	int	num;

	rtn = 0;
	minus = 0;
	nptr = ft_isspace(nptr);
	nptr = ft_count_minus(nptr, &minus);
	i = find_num(nptr);
	while (i)
	{
		j = i;
		num = *(nptr++) - '0';
		while (--j)
			num *= 10;
		rtn += num;
		i--;
	}
	if (minus % 2 == 0)
		return (rtn);
	else
		return (-rtn);
}
