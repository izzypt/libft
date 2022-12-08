/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:54:03 by smagalha          #+#    #+#             */
/*   Updated: 2022/12/08 18:20:25 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *strnstr(char *big, char *little, size_t limit)
{
    int j;
    int i;

    i = 0;
    j = 0;
    if (little[0] == '\0')
        return big;
    while (big[i] != '\0')
    {
        if(little[j] == '\0')
        {
            return &big[i-j];
        }
        if (big[i] == little[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
            j = 0;
        } 
        if (i >= limit)
        {
            return NULL;
        }
    }
    return NULL;
}
