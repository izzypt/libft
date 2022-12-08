/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:27:36 by smagalha          #+#    #+#             */
/*   Updated: 2022/12/08 18:55:56 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *string;
    unsigned char   character;
    size_t  i;

    string = (unsigned char*) s;
    character = (unsigned char) c;
    while (i < n)
    {
        if (string[i] == c)
        {
            return (&string[i]);
        }
        i++;
    }
    return (0);
}