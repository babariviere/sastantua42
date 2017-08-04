/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 22:38:53 by briviere          #+#    #+#             */
/*   Updated: 2017/08/05 00:57:08 by smokhtar         ###   ########.fr       */
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

void	ft_len_base(int size)
{
	
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
	int len;
	int nbr;

	len = 3 + size / 2;
	nbr = ft_nbr_line(size);
	printf("%d", nbr);
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
