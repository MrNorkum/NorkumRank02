#include <string.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
	size_t	i;

	for (i = 0; s[i]; i++)
	{
		for (size_t j = 0; reject[j]; j++)
			if (reject[j] == s[i])
				return (i);
	}
	return (i);
}
