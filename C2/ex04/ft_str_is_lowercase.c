/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acheab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:49:02 by acheab            #+#    #+#             */
/*   Updated: 2024/07/31 22:41:25 by acheab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*int main()
{
	printf("%d", ft_str_is_lowercase("eufhewhfvhwehwegphgw"));
	printf("\n%d", ft_str_is_lowercase("GGGGGJGJYUYUYRUYRUY"));
	printf("\n%d", ft_str_is_lowercase("4564fgf5fgd4g56d4gxv"));
}*/
