/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:09:28 by smagalha          #+#    #+#             */
/*   Updated: 2022/12/08 18:20:53 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = n;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (src < dest && src + n > dest)
	{
		while (i > 0)
		{
			(char*) dest[i - 1] = (char *) src[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			(char*) dest[i] = (char*) src[i];
			i++;
		}
	}
	return (dest);
}
