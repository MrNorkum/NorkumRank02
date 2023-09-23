#include <unistd.h>
#include <stdio.h>

int	control(char c, int str_base)
{
	char	*nbrs = "0123456789abcdef";
	char	*nbrs2 = "0123456789ABCDEF";

	for (int i = 0; i < str_base; i++)
		if (nbrs[i] == c || nbrs2[i] == c)
			return (1);
	return (0);
}

int ft_atoi_base(const char *str, int str_base)
{
	int	sign = 1, res = 0, i = 0;

	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && control(str[i], str_base))
	{
		if (str_base <= 10)
			res = (res * str_base) + (str[i] - '0');
		else
		{
			if (str[i] >= '0' && str[i] <= '9')
				res = (res * str_base) + (str[i] - '0');
			else if (str[i] >= 'a' && str[i] <= 'f')
				res = (res * str_base) + (str[i] - 'a' + 10);
			else if (str[i] >= 'A' && str[i] <= 'F')
				res = (res * str_base) + (str[i] - 'A' + 10);
		}
		i++;
	}
	return (res * sign);
}
