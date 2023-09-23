#include <stdlib.h>

int	is_space(char c)
{
	return (c == '\t' || c == '\n' || c == ' ');
}

char    **ft_split(char *str)
{
	int sidx = 0, arg = 0, idx = 0;
	char **res = malloc(4096);

	while(is_space(str[sidx]))
		sidx++;
	while(str[sidx])
	{
		if(str[sidx] <= 32)
			sidx++;
		else
		{
			res[arg] = malloc(1000);
			while(str[sidx] > 32)
				res[arg][idx++] = str[sidx++];
			res[arg++][idx] = '\0';
			idx = 0;
		}
	}
	return(res[arg] = NULL, res);
}
