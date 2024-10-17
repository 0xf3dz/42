/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:17:08 by fscandiz          #+#    #+#             */
/*   Updated: 2024/03/06 13:06:18 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*next_word(char const **s, char c)
{
	char	*word_start;

	word_start = (char *)*s;
	while (**s && **s != c)
		(*s)++;
	return (ft_substr(word_start, 0, *s - word_start));
}

static void	ft_cleanup(char ***result, size_t i)
{
	while (i > 0)
		free((*result)[--i]);
	free(*result);
	*result = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	num_words;
	char	**result;
	size_t	i;

	num_words = count_words(s, c);
	result = (char **)malloc((num_words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			result[i] = next_word(&s, c);
			if (!result[i++])
			{
				ft_cleanup(&result, i);
				return (NULL);
			}
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
/*
int main(void)
{
    char *s = "hello world";
    char **result = ft_split(s, ' ');

    if (!result)
    {
        printf("Error: ft_split failed.\n");
        return 1;
    }

    printf("Result:\n");
    for (int i = 0; result[i]; ++i)
    {
        printf("%s\n", result[i]);
        free(result[i]);
    }

    free(result);
    return 0;
}*/
