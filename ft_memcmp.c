/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:25:21 by smagalha          #+#    #+#             */
/*   Updated: 2022/12/08 18:14:25 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string2;
	int	i;

	i = 0;
	string1 = (unsigned char*) s1;
	string2 = (unsigned char*) s2;
	while(i < n)
	{
		if (*string1 == *string2)
		{
			string1++;
			string2++;
		}
		else
			return *string1 - *string2;
	}

	return (0);
}
