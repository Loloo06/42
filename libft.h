/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpollino <lpollino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:17:00 by lpollino          #+#    #+#             */
/*   Updated: 2022/11/29 15:20:27 by lpollino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *string, int searchedChar);
char	ft_bzero(void *s, size_t n);
char	ft_isalnum(int inpt);
int		ft_isalpha(int impt);
int		ft_isascii(int impt);
int		ft_isdigit(int impt);
int		ft_isprint(int inpt);
void	*ft_memset(void *b, int c, size_t len);
char	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_tolower(int lt);
int		ft_toupper(int lt);
char	*ft_strrchr( const char *string, int searchedChar );
int		ft_strncmp(const char *first, const char *second, size_t length);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

#endif