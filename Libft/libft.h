/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaliende <oaliende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:14:21 by oaliende          #+#    #+#             */
/*   Updated: 2023/03/09 20:52:35 by oaliende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(char *str);
int	ft_strlen(const char *str);
int	ft_toupper(int ch);
int	ft_tolower(int ch);
size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int	ft_isprint(int num);
int	ft_isdigit(int c);
int	ft_isascii(int num);
int	ft_isalpha(int c);
int	ft_isalnum(int num);
void	ft_bzero(void *s, size_t n);
void	*calloc(size_t count, size_t size);
char	*ft_itoa(int n);
void	*memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char const *s, int fd);
char	**ft_split(const char *s, char c);
char  *ft_strchr(const char *s, int c);
char	*strdup(const char *s1);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int	strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *large, const char *small, size_t len);
char	*strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t lenght);

#endif