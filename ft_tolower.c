/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpollino <lpollino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:32:30 by lpollino          #+#    #+#             */
/*   Updated: 2022/11/22 14:51:53 by lpollino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int lt)
{
	if ((lt >= 65) && (lt <= 90))
	{
		lt = lt + 32;
		return (lt);
	}
	else
	{
		return (lt);
	}
}
//#include <stdio.h>
//int main()
//{
//	char no = 'p';
//	printf("%c", ft_tolower(no));
//}
