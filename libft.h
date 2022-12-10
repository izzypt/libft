/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:27:06 by smagalha          #+#    #+#             */
/*   Updated: 2022/12/10 20:16:30 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
#include <string.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int	   	ft_isalpha(int c);
int	    ft_isascii(int c);
int	    ft_isdigit(int c);
int	    ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int	    ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t n);
void    *ft_memset(void *s, int c, size_t n);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlen(const char *s);
int		ft_strncmp(const char *s, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_calloc(size_t elements, size_t bytes);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int     ft_atoi(const char *s);
char	*ft_strjoin(char const *prefix, char const *suffix);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);

#endif
