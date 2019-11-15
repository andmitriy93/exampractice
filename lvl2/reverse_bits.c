/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:10:34 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/11/14 10:51:24 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    reverse_bits(unsigned char octet)
{
    unsigned char   reverse;
    int             i;

    i = 7;
    reverse = 0;
    while (i >= 0)
    {
        reverse = (reverse << 1) | (octet & 1);
        octet = octet >> 1;
        i--;
    }
    return (reverse);
}