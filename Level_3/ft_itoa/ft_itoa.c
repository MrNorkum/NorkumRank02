
#include <stdlib.h>

int	numlen(int n)
{
	int len = 0;
	if (n <= 0)
		len++;
	while (0 < n || n < 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*arr;
	int		len;

	len = numlen(nbr);
	arr = (char *)malloc(sizeof(char) * (len + 1));
	arr[len] = '\0';
	if (nbr < 0)
		arr[0] = '-';
	if (nbr < 0)
		nbr = -nbr;
	else if (!nbr)
		arr[0] = '0';
	while (nbr)
	{
		arr[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (arr);
}
