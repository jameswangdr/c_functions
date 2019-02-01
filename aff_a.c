/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 17:55:32 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/31 18:03:53 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

int main (int argc, char **argv)
{
	int i;


	if (argc != 2)
	ft_putchar('\n');
	if (argc == 2)
	{	
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
				ft_putchar('a');
				break;
			i++;
		}
	ft_putchar('\n');
	}
}
