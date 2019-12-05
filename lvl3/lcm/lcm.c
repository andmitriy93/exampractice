/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 10:40:31 by dmian             #+#    #+#             */
/*   Updated: 2019/07/29 11:27:10 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	i;

	if (a == 0 || b == 0)
		i = 0;
	if (a > b)
		i = a;
	else
		i = b;
	while (i % a != 0 || i % b != 0)
		i++;
	return (i);
}

int		main(void)
{
	printf("%d\n", lcm (20, 84));
	return (0);
}
