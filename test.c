/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 10:44:25 by dmian             #+#    #+#             */
/*   Updated: 2019/11/27 12:40:44 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int i = 0;
	int *range;

	if (start > end)
		range = (int *)malloc(sizeof(int) * (start - end + 1));
	else
		range = (int*)malloc(sizeof(int) * (end - start + 1));
	while (start != end)
	{
		range[i++] = start;
		if (start < end)
			start++;
		else
			start--;
	}
	range[i] = start;
	return (range);
}