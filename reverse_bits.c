/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an.dmitriy93 <an.dmitriy93@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:10:34 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/08/05 00:13:40 by an.dmitriy9      ###   ########.fr       */
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