#include <stdlib.h>

int ft_abs(int n)
{
	return(n *= -(n < 0) + !(n < 0), n);
}

int     *ft_rrange(int start, int end)
{
	int *arr = (int *)malloc(sizeof(int) * (ft_abs(start - end) + 1));
	int i = 0;
	while(end < start)
		arr[i++] = end++;
	while(start < end)
		arr[i++] = end--;
	return(arr[i] = end, arr);
}
