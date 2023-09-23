#include <stdlib.h>

int ft_abs(int n)
{
	return(n *= -(n < 0) + !(n < 0), n);
}

int     *ft_range(int start, int end)
{
	int *arr = (int *)malloc(sizeof(int) * (ft_abs(end - start) + 1));
	int i = 0;
	while(start < end)
		arr[i++] = start++;
	while(start > end)
		arr[i++] = start--;
	return(arr[i] = start, arr);
}
