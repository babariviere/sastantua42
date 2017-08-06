/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 22:38:53 by briviere          #+#    #+#             */
/*   Updated: 2017/08/05 08:54:44 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Only for debug
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Only for debug
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_multiple(char c, int size)
{
	while (size--)
		ft_putchar(c);
}

int	ft_len_base(int size)
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
	    floor++;
	    cur_len += 4 + 2 * ((floor - 2) / 2);
	}
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
