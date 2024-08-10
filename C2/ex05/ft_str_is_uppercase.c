/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acheab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:59:49 by acheab            #+#    #+#             */
/*   Updated: 2024/07/31 22:42:49 by acheab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*int main()
{
	printf("%d", ft_str_is_uppercase("ERTRRTTUSRTSRTSRIRITYDITYDTJU"));
	printf("\n%d", ft_str_is_uppercase("jdsfshhvidsvivnishvishisigh"));
	printf("\n%d", ft_str_is_uppercase("984723nvnfhHHFGFYFIIYYFUGKJ"));
}*/
