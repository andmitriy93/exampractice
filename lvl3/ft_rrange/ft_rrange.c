/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 16:11:35 by dmian             #+#    #+#             */
/*   Updated: 2019/11/27 12:40:22 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
   int *rrange;
   int i = 0;
   int len = (end >= start) ? (end - start + 1) : (start - end + 1); // в зависимости от условия выполняется одно из действий (находим кол-во элементов массива)
   //  эвивалетно тому, что выше
//    if (start > end)
// 		range = (int *)malloc(sizeof(int) * (start - end) + 1);
// 	else
// 		range = (int *)malloc(sizeof(int) * (end - start) + 1);

   rrange = (int*)malloc(sizeof(int) * len);

   while (i <= len) // i - это счетчик и индекс массива 
       rrange[i++] = (end >= start) ? end-- : end++; // Последний элемент массива приравнивается новому массиву и в зависимости от условия либо ++ либо --;
   retrun (rrange); // возвращаем новый полученный массив
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
