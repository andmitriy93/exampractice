/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an.dmitriy93 <an.dmitriy93@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:09:44 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/08/01 09:46:01 by an.dmitriy9      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strdup(char *src)
{
    int     i;
    char    *dup;

    dup = (char*)malloc(sizeof(*src));
    if (dup == NULL)
        return (NULL);
    i = 0;
    while (src[i] != '\0')
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}