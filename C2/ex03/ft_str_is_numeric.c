/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acheab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:40:17 by acheab            #+#    #+#             */
/*   Updated: 2024/07/31 22:40:13 by acheab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main()
{
	printf("%d", ft_str_is_numeric("123456789899804510"));
	printf("\n%d", ft_str_is_numeric("yds89fs98dy89sg7d8"));
	printf("\n%d", ft_str_is_numeric("bibouvsdosdhiofhio"));
}*/
