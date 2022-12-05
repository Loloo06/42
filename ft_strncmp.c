/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpollino <lpollino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:21:00 by lpollino          #+#    #+#             */
/*   Updated: 2022/11/29 13:35:22 by lpollino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t l)
{
	int		spotify;
	int		deezer;
	size_t	i;
	size_t	k;

	k = 0;
	i = 0;
	spotify = ft_strlen(first);
	deezer = ft_strlen(second);
	while (first[i] && second[i] && first[i] == second[i] && ++k < l && ++i)
		;
	if (((first[i] != second[i]) && (spotify > deezer)) && (k <= l))
		return ((unsigned char) first[i] - second[i]);
	else if (((first[i] != second[i]) && (spotify <= deezer)) && (k <= l))
		return ((unsigned char) first[i] - second[i]);
	return (0);
}
/*
int	main(int argc, char **argv)
{
	int	one;
	int	two;

	if (argc == 4)
	{
		one = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
		two = strncmp(argv[1], argv[2], atoi(argv[3]));
		printf("R1 = %d \n", one);
		printf("R2 = %d\n", two);
		printf("%s", (one == two) ? "" : "\e[31;1mERROR!\e[0m\n" );
	}	
}*/
