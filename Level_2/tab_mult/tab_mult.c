#include<unistd.h>

int ft_atoi(char *s, int res)
{
	if('0' <= *s && *s <= '9')
		return (ft_atoi(s + 1, res * 10 + *s - '0'));
	return (res);
}

void putnbr(int n)
{
	if(n > 9)
		putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int main(int ac, char** av)
{
	for(int i = 1; ac == 2 && i <= 9; i++)
	{
		putnbr(i);
		write(1, " x ", 3);
		putnbr(ft_atoi(av[1], 0));
		write(1, " = ", 3);
		putnbr(i * ft_atoi(av[1], 0));
		write(1, "\n", 1);
	}
	return (write(1, "\n", (ac != 2)), 0);
}
