/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 12:35:50 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/27 16:56:36 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_base.h"

int	main(int ac, char **av)
{
		printf("abcde\n");
	(void)av;
	if (ac >= 1)
	{
		ft_map_reader(ac, av);
	}
	else
	{
	}
	return (0);
}
