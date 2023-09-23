#include <unistd.h>

void    putnbr(int n)
{
    if (n > 9)
        putnbr(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int main(void)
{
    for (int i = 1; i <= 100; i++)
    {
        if (!(i % 3))
            write(1, "fizz", 4);
        if (!(i % 5))
            write(1, "buzz", 4);
        if (i % 3 && i % 5)
            putnbr(i);
        write(1, "\n", 1);
    }
}