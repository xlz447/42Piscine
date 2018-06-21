/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhu <xzhu@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 12:05:14 by xzhu              #+#    #+#             */
/*   Updated: 2018/05/19 17:56:37 by xzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x && y != 1 && x != 1))
				ft_putchar(47);
			else if ((i == 1 && j == x) || (i == y && j == 1))
				ft_putchar(92);
			else if ((i > 1 && i < y) && (j > 1 && j < x))
				ft_putchar(' ');
			else
				ft_putchar(42);
			j++;
		}
		i++;
		j = 1;
		ft_putchar('\n');
	}
}
