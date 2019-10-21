/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an.dmitriy93 <an.dmitriy93@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:20:35 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/10/16 19:02:21 by an.dmitriy9      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				count = av[1][i] - 64;
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				count = av[1][i] - 96;
			else
				write(1, &av[1][i], 1);
			while (count)
			{
				write(1, &av[1][i], 1);
				count--;
			}
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}