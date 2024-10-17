/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:31:12 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/22 12:31:41 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	char			c;
	int				new;

	i = 0;
	new = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (new == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		else if (new == 0 && c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			new = 1;
		else
			new = 0;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Original: %s\n", str);
	printf("Capitalized: %s\n", ft_strcapitalize(str));
	return 0;
}
*/
