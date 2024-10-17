/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:02:04 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/15 15:05:27 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	count;

	count = 122;
	while (count <= 122 && count >= 97)
	{
		write(1, &count, 1);
		count--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
