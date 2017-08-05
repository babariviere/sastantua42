/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 17:33:45 by briviere          #+#    #+#             */
/*   Updated: 2017/08/05 15:16:51 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_end(char *str)
{
	int index;
	int sign_present;

	index = 0;
	sign_present = 0;
	while (str[index] != 0)
	{
		if (str[index] == '-' || str[index] == '+')
		{
			if (sign_present)
				return (index);
			sign_present = 1;
		}
		if (!('0' <= str[index] && str[index] <= '9') &&
				str[index] != ' ' && str[index] != '-' &&
				str[index] != '+' && str[index] != '\t' &&
				str[index] != '\v' && str[index] != '\n' &&
				str[index] != '\n')
			return (index);
		index++;
	}
	return (index);
}

int		ft_atoi(char *str)
{
	int		idx;
	long	result;
	long	pow;

	idx = ft_find_end(str);
	result = 0;
	pow = 1;
	while (idx--)
	{
		if (('0' <= str[idx] && str[idx] <= '9'))
		{
			result += (str[idx] - '0') * pow;
			pow *= 10;
		}
		if (str[idx] == '-')
			return (result * -1);
	}
	return (result);
}
