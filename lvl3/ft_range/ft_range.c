/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:26:57 by dmian             #+#    #+#             */
/*   Updated: 2019/11/27 12:40:18 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int		*ft_range(int start, int end)
{
	int		*range;
	int		i;
	if (start > end)
		range = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		range = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		range[i++] = start;     // Первый элемент начинается с start
		start += (start > end) ? -1 : 1; // в зависимости от условия start либо увеличивается, либо уменьшается
// if (start > end)
//     start += -1; // start--;
// else
//     start += 1; // start++
    }
	range[i] = end; // последний элемент в массиве равен end или это end
	return (range); // возвращаем новый полученный массив;
}
#include <stdio.h>
int main()
{
	int *arr = ft_range(5, 1);
	for(int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
