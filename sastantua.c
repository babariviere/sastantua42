/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 22:38:53 by briviere          #+#    #+#             */
/*   Updated: 2017/08/05 01:27:31 by briviere         ###   ########.fr       */
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

void	ft_print_line(int len)
{
	ft_putchar('/');
	ft_print_multiple('*', len);
	ft_putchar('\\');
}

void	ft_print_etage(int etage, int len_base)
{
	int cur_line;
	int gap;

	cur_line = 0;
	gap = 2 + (etage / 2);
	while (cur_line < etage + 2)
	{
		ft_print_multiple(' ', (len_base / 2) - gap);
		ft_putchar('/');
		ft_print_multiple('*', cur_line + 0);
		cur_line++;
	}
}

void ft_print_total(int size,int len_base)
{
	int cur_line;
	int nbr_line;
	int gap;
	int etage;

	cur_line = 0;
	etage = (cur_line - 3);
	gap= 2 + (etage / 2);
	while (cur_line < nbr_line)
	{
		ft_print_multiple(' ', (len_base /2) - cur_line );
		ft_putchar('/');
		ft_print_multiple('*', (1 + (2 * cur_line)));
		ft_putchar('\\');
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

	len_base = ft_len_base(size);
	nbr_line = ft_nbr_line(size);
	cur_line = 0;
	while (cur_line < nbr_line)
	{

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
