/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghahn <ghahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 03:01:01 by ghahn             #+#    #+#             */
/*   Updated: 2022/06/07 01:19:17 by ghahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (*tab != NULL)
	{
		if (f(tab[i]) != 0)
			return (1);
		tab++;
	}
	return (0);
}
