/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 22:38:53 by briviere          #+#    #+#             */
/*   Updated: 2017/08/06 18:09:05 by smokhtar         ###   ########.fr       */
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
	while (size--)
		ft_putchar(c);
}

void	ft_print_last_floor(int floor, int size, int *cur_len, int total)
{
	int taille;
	int idx;

	
	idx = 0;
	taille = size / 2 - 1;
	printf("%d", taille);
	while(0)
	{
		ft_print_multiple(' ', (total - *cur_len) / 4);
		ft_putchar('/');
		ft_print_multiple('*', (*cur_len - 2) / 2);
		ft_print_multiple('|', 1 + ( size / 2));
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
	{
		size = 3 - ( total_floor % 2);
	}
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
	ft_print_last_floor(floor,size, &cur_len, total_len);
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
