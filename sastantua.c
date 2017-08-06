/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 22:38:53 by briviere          #+#    #+#             */
/*   Updated: 2017/08/06 20:07:01 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Only for debug
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Only for debug
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_multiple(char c, int size)
{
	int count;

	count = 0;
	while (count++ < size)
		ft_putchar(c);
}


void	ft_print_last_floor(int floor, int *cur_len, int total_len)
{
	int taille;
	int idx;

	idx = 1;
	taille = (floor + (floor % 2)) * 2 / 2 - 1;
	while (idx <= floor)
	{
		ft_print_multiple(' ', (total_len - *cur_len) / 2);
		ft_putchar('/');
		ft_print_multiple('*', (*cur_len - 2 - taille) / 2);
		if (idx == 1 && floor % 2 == 0)
			ft_print_multiple('*', taille);
		else
		{
			ft_print_multiple('|', taille - 2);
			if (idx == (floor / 2 + 1) && floor >= 5)
			{
				ft_putchar('$');
				ft_putchar('|');
			}
			else if (floor <= 2)
				ft_putchar('|');
			else if (taille > 1)
				ft_print_multiple('|', 2);
		}
		ft_print_multiple('*', (*cur_len - 2 - taille) / 2);
		ft_putchar('\\');
		ft_putchar('\n');
		idx += 1;
		*cur_len += 2;
	}
}

int		ft_len_base(int size)
{
	int len;
	int floor;
	int gap;

	len = 7;
	floor = 2;
	gap = 3;
	while (floor <= size)
	{
		len += (floor + 1 + gap)* 2;
		if (floor % 2 == 1)
			gap++;
		floor++;
	}
	return (len);
}

void	ft_print_floor(int floor, int total_floor, int *cur_len, int total_len)
{
	int size;
	int idx;

	size = floor + 2;
	idx = 1;
	if (floor == total_floor)
		size = 2;
	while (idx <= size)
	{
		ft_print_multiple(' ', (total_len - *cur_len) / 2);
		ft_putchar('/');
		ft_print_multiple('*', *cur_len - 2);
		ft_putchar('\\');
		ft_putchar('\n');
		idx += 1;
		*cur_len += 2;
	}
}

void	sastantua(int size)
{
	int floor;
	int cur_len;
	int total_len;

	total_len = ft_len_base(size);
	cur_len = 3;
	floor = 1;
	while (floor <= size)
	{
		ft_print_floor(floor, size, &cur_len, total_len);
		if (floor < size)
			cur_len += 4 + 2 * ((floor - 2) / 2);
		floor++;
	}
	ft_print_last_floor(floor - 1, &cur_len, total_len);
}

// Only for debug
int		main(int argc, char **argv)
{
	if (argc <= 1)
	{
		printf("Usage: ./sastantua <size>\n");
		return (1);
	}

	int size = atoi(argv[1]);
	sastantua(size);
	return (0);
}
