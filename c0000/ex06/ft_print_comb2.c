/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acheab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 23:57:17 by acheab            #+#    #+#             */
/*   Updated: 2024/08/03 17:46:06 by acheab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char nb)
{
	write (1, &nb, 1);
}

void	ft_comb2(int a, int b)
{
	ft_write (48 + a / 10);
	ft_write (48 + a % 10);
	ft_write (' ');
	ft_write (48 + b / 10);
	ft_write (48 + b % 10);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_comb2 (a, b);
			if (!(a == 98 && b == 99))
			{
				write (1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
/*int main()
{
	ft_print_comb2();
}*/
