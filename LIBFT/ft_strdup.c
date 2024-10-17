/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:53:30 by fscandiz          #+#    #+#             */
/*   Updated: 2024/02/24 16:31:43 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	int		len;

	len = 0;
	while (s[len])
		len++;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}

/*
#include <string.h>

int main() {
    const char *original_str = "Hello, world!";

    // Using strdup
    char *str1 = strdup(original_str);
    if (str1 == NULL) {
        perror("strdup");
        return EXIT_FAILURE;
    }

    // Using ft_strdup
    char *str2 = ft_strdup(original_str);
    if (str2 == NULL) {
        perror("ft_strdup");
        free(str1);
        return EXIT_FAILURE;
    }

    // Comparing the strings
    int equal = strcmp(str1, str2) == 0;

    // Output the comparison result
    if (equal) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    // Freeing memory
    free(str1);
    free(str2);

    return EXIT_SUCCESS;
}*/
