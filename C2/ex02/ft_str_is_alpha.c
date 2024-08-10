/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acheab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 20:31:17 by acheab            #+#    #+#             */
/*   Updated: 2024/07/31 22:37:01 by acheab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*int main()
{
	printf("%d", ft_str_is_alpha("FDASSDohuasfnlanfsalkf"));
	printf("\n%d", ft_str_is_alpha("gjgf7ewy9wefhow34r5"));
	printf("\n%d", ft_str_is_alpha("65646464*46-+4+444"));
}*/
