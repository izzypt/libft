/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:03:50 by smagalha          #+#    #+#             */
/*   Updated: 2022/12/08 18:20:41 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  num_copied;

    num_copied = 0;
    while (*src && num_copied < size - 1)
    {
        *dst++ = *src++;
        num_copied++;
    }

    *dst = '\0';

    return num_copied + 1;
}
