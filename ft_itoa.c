/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:29:27 by smagalha          #+#    #+#             */
/*   Updated: 2022/12/11 22:51:54 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_decimal_places(int n)
{
	size_t	len;

    len = 0;
    if (n == 0)
		return (1);
	else if (n < 0)
    {
        n = n * -1;
        len = len + 1;
    }
		
    while (n > 0)
    {
        n = n/10;
        len++;
    }
	printf("%ld\n", len);
    return (len);
}

char *ft_itoa(int n)
{
    char    *string;
    size_t		len;

    len = ft_decimal_places(n);
    string = malloc((len * sizeof(char)) + 1);
	if (!string)
		return (NULL);
    string[len] = '\0';
	if (n == 0)
		string[0] = '0';
	if (n < 0)
	{
		string[0] = '-';
		n *= -1;
	}
    while (n != 0)
    {
        len--;
        string[len] = n % 10 + '0';
        n = n / 10;
    }
    return (string);
}

void main()
{
	printf("%s", ft_itoa(-2147483648));
}