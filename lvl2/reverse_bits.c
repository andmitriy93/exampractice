/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:10:34 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/11/22 16:17:27 by dmian            ###   ########.fr       */
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
        reverse = (reverse << i) | (octet & 1);
        octet = octet >> 1;
        i--;
    }
    return (reverse);
}

// Второй вариант
unsigned char   reverse_bits(unsigned char octet)
{
    return (((octet >> 0) & 1) << 7) | \
           (((octet >> 1) & 1) << 6) | \
           (((octet >> 2) & 1) << 5) | \
           (((octet >> 3) & 1) << 4) | \
           (((octet >> 4) & 1) << 3) | \
           (((octet >> 5) & 1) << 2) | \
           (((octet >> 6) & 1) << 1) | \
           (((octet >> 7) & 1) << 0);

}
