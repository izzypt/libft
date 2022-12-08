/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 23:51:57 by smagalha          #+#    #+#             */
/*   Updated: 2022/12/08 17:16:24 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	return (counter);
}

char *ft_strrchr(char *s, int c)
{
    char*   match;
    int len;
    
    len = ft_strlen(s);
    while(len > 0)
    {
        if (s[len] == c)
        {
            match = &s[len];
            return match;
        }
        len--;
    }
    return NULL;
}
