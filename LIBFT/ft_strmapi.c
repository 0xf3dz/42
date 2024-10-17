/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:25:33 by fscandiz          #+#    #+#             */
/*   Updated: 2024/03/01 14:56:30 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char test_function(unsigned int index, char c)
{
    // Add 1 to the character ASCII value based on its index
    return c + index + 1;
}

int main(void)
{
    char *input = "Hello, World!";

    printf("Original string: %s\n", input);

    char *result = ft_strmapi(input, &test_function);

    if (result)
    {
        printf("Modified string: %s\n", result);
        free(result); // Don't forget to free the allocated memory
    }
    else
    {
        printf("Memory allocation failed.\n");
        return 1; // Return error code
    }

    return 0; // Return success
}*/
