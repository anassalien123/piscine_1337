/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acheab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 02:27:27 by acheab            #+#    #+#             */
/*   Updated: 2024/08/09 03:13:38 by acheab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atio(char *str)
{
	int	i;
	int	sin;
	int	resu;

	i = 0;
	sin = 0;
	resu = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sin++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resu = (resu * 10) + (str[i] - 48);
		i++;
	}
	if (sin % 2 != 0)
		return (resu * (-1));
	else
		return (resu);
}
/*#include <stdio.h>
int main ()
{
	int a = ft_atio(" \t\n\f\v\r -----+++--+1223c34");
	printf ("%d\n", a);
}*/
