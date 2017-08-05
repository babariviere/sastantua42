/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 17:17:47 by briviere          #+#    #+#             */
/*   Updated: 2017/08/04 03:24:00 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strend(char *str)
{
	int pos;

	pos = 0;
	while (str[pos] != 0)
		pos++;
	return (pos);
}

char	*ft_strrev(char *str)
{
	int		start;
	int		end;
	char	tmp;

	start = 0;
	end = ft_strend(str) - 1;
	while (start < end)
	{
		tmp = str[end];
		str[end] = str[start];
		str[start] = tmp;
		start++;
		end--;
	}
	return (str);
}
