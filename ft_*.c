/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_*.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:39:12 by simao             #+#    #+#             */
/*   Updated: 2022/11/25 12:21:22 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if ((c >= 0 && c <= 9))
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	ft_isprint(int c)
{
	if (c >= 1 && c <= 127)
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
}

void *memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (s);
}

void *bzero(void *s, size_t n)
{

	return (memset(s, '\0', 4));
}

void *memcpy(void *dest, void *src, size_t n)
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

char *strdup(const char *s)
{
	
}

void	main(void)
{
	char str[] = "A mota do Joao foi";
	char str2[] = "A casa da Maria";
	memcpy(&str[0], &str2[0], 12);
	printf("%s\n", str2);
	printf("%s\n", str);
}
