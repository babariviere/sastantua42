/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 22:38:53 by briviere          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/08/05 00:57:08 by smokhtar         ###   ########.fr       */
=======
/*   Updated: 2017/08/05 00:54:47 by briviere         ###   ########.fr       */
>>>>>>> 4216f886bb0c153a7c5b0f6d1e22439aa3067d38
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
	int len;
	int nbr;

	len = 3 + size / 2;
	nbr = ft_nbr_line(size);
	printf("%d", nbr);

	len = ft_len_base(size);
	printf("%d\n", len);
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
