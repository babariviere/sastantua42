/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 22:38:53 by briviere          #+#    #+#             */
/*   Updated: 2017/08/05 04:00:37 by smokhtar         ###   ########.fr       */
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

int ft_find_stage(int nbr_line, int gap[]}
	int n;
	int cur;
	int nbr_gap;

	n = 3;
	cur = 1;
	nbr_gap = 1;
	while(cur < nbr_line - 3)
	{
		while (cur < n)
		{
			gap[cur- 1] = 2 + 2 * nbr_gap;
			cur ++;
		}
		n = n + 1;
	}
	return (gap);
}

void ft_print_total(int size,int len_base,int nbr_line)
{
	int cur_line;
	int etage;

	cur_line = 0;
	etage = (cur_line - 3);
	while (cur_line < nbr_line)
	{
		ft_print_multiple(' ', (len_base /2) - cur_line );
		ft_putchar('/');
		ft_print_multiple('*', (1 + (2 * cur_line)+ gap[cur_line] ));
		ft_putchar('\\');
		ft_putchar('\n');
		cur_line++;
	}
}


int		ft_len_base(int size)
{
	int len;
	int etage;
	int gap;

	len = 7;
	etage = 2;
	gap = 3;
	while (etage <= size)
	{
		len += (etage + 1 + gap)* 2;
		if (etage % 2 == 1)
			gap++;
		etage++;
	}
	return (len);
}

int		ft_nbr_line(int size)
{
	int nb;
	int i;

	i = 0;
	nb = 0;
	while ( i < size)
	{
		nb = nb + (3 + (i));
		i++;
	}
	return (nb);
}

void	sastantua(int size)
{
	int len_base;
	int nbr_line;
	int cur_line;
	int gap[nbr_line = ft_nbr_line(size)]

	len_base = ft_len_base(size);
	nbr_line = ft_nbr_line(size);
	cur_line = 0;
	gap = ft_find_stage(nbr_line, gap
	ft_print_total(size, len_base, nbr_line, gap);
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
