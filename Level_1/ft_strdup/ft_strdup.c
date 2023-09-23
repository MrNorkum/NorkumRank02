#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char	*dest;
	int		i;

	for (i = 0; src[i]; i++);
	dest = (char *)malloc(sizeof (char) * (i + 1));
	if (!dest)
		return (NULL);
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	return (dest[i] = src[i], dest);
}
