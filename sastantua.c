/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 22:38:53 by briviere          #+#    #+#             */
/*   Updated: 2017/08/04 22:49:35 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Only for debug
#include <stdio.h>
#include <unistd.h>

// Only for debug
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	sastantua(int size)
{
	
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
}
