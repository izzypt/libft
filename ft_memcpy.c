/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:23:44 by smagalha          #+#    #+#             */
/*   Updated: 2022/11/28 13:40:45 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dest, void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*d;

	p = src;
	d = dest;
	while (n > 0)
	{
		*d = *p;
		p++;
		d++;
		n--;
	}
	return (dest);
}
