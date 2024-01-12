#include <stdlib.h>

static unsigned char	ft_numlen(long num)
{
	unsigned char	i;

	i = 0;
	if (num <= 0)
		i++;
	while (!!num && ++i)
		num /= 10;
	return ((int)i);
}

char	*ft_itoa(int n)
{
	unsigned char	len;
	long			nb;
	char			*arr;

	nb = n;
	len = ft_numlen(nb);
	arr = (char *)ft_calloc(sizeof(char), len + 1);
	if (!arr)
		return (NULL);
	if (nb < 0)
		*arr = 45;
	if (!nb)
		*arr = '0';
	nb *= !!(nb > 0) - !!(nb < 0);
	while (!!nb)
	{
		arr[--len] = nb % 10 + 48;
		nb /= 10;
	}
	return (arr);
}
