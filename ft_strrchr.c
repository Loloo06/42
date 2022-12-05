/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpollino <lpollino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:24:54 by lpollino          #+#    #+#             */
/*   Updated: 2022/11/22 13:24:38 by lpollino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr( const char *stri, int searchedChar)
{
	int	i;

	i = 0;
	while (stri[i])
		i++;
	while (i >= 0)
	{
		if (stri[i] == (char)searchedChar)
			return ((char *)(stri + i));
			i--;
	}
	return (0);
}

/*int	main(void)
{
	char	*str;
	int		let;

	let = '\0';
	str = "SALUT";
	printf("LE RESULTAT = %s \n", ft_strrchr(str, let));
	printf("LE RESULTAT = %s", strrchr(str, let));
}*/
