/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpollino <lpollino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:34:52 by lpollino          #+#    #+#             */
/*   Updated: 2022/11/22 13:26:49 by lpollino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int impt)
{
	if ((impt >= '0') && (impt <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
//
//#include <stdio.h>
//
//int main()
//{
//	int spotify = 'A';
//	printf("%d", ft_isdigit(spotify));
//}
