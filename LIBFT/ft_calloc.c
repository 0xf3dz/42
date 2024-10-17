/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:38:25 by fscandiz          #+#    #+#             */
/*   Updated: 2024/02/24 16:29:26 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;
	char	*byte_ptr;
	size_t	i;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(1);
		if (ptr != NULL)
			*(char *)ptr = '\0';
		return (ptr);
	}
	if (SIZE_MAX / nmemb < size)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	byte_ptr = (char *)ptr;
	i = 0;
	if (ptr != NULL)
	{
		while (i < total_size)
			byte_ptr[i++] = 0;
	}
	return (ptr);
}

/*
int main() {
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    // Allocate memory using my_calloc
    int *array1 = (int *)ft_calloc(num_elements, element_size);
    if (array1 == NULL) {
        perror("ft_calloc");
        return EXIT_FAILURE;
    }

    // Allocate memory using calloc
    int *array2 = (int *)calloc(num_elements, element_size);
    if (array2 == NULL) {
        perror("calloc");
        free(array1);
        return EXIT_FAILURE;
    }

    // Compare the memory contents of both arrays
    int equal = memcmp(array1, array2, num_elements * element_size) == 0;

    // Output the comparison result
    if (equal) {
        printf("Memory contents are equal.\n");
    } else {
        printf("Memory contents are not equal.\n");
    }

    // Free the allocated memory
    free(array1);
    free(array2);

    return EXIT_SUCCESS;
}*/
