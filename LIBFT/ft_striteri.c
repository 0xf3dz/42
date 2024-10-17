/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:51:24 by fscandiz          #+#    #+#             */
/*   Updated: 2024/03/05 11:51:53 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>

// Sample function to apply to each character
void apply_function(unsigned int index, char *c)
{
    // Modify each character based on its index
    *c = *c + index;
}

int	main(void)
{
    // Input string
    char input[] = "Hello, World!";

    // Print the original string
    printf("Original string: %s\n", input);

    // Apply ft_striteri to the input string with apply_function
    ft_striteri(input, &apply_function);

    // Print the modified string
    printf("Modified string: %s\n", input);

    // Return 0 to indicate success
    return 0;
}*/
