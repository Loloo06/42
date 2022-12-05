/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpollino <lpollino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:10:59 by lpollino          #+#    #+#             */
/*   Updated: 2022/11/22 15:23:45 by lpollino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == searchedChar)
		{
			return ((char *)string + i);
		}
		else if (string[i] == '\0')
		{
			return ((char *)string + i);
		}
		i++;
	}
	if (searchedChar == '\0')
	{
		return ((char *)string + i);
	}
	return (0);
}
/*
int	main(void)
{
	char	*str;
	int		let;

	let = '\0';
	str = "SALUT";
	printf("LE RESULTAT = %s \n", ft_strchr(str, let));
	printf("LE RESULTAT = %s", strchr(str, let));
}
*/