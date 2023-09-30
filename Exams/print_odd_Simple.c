#include <unistd.h>

int main (int ac, char **av)
{
    int i = 1;
    int l = 0;

    while (av[1][l])
    {
        l++;
    }

    if (ac == 2)
    {
        while (i <= l)
        {
            write (1, &av[1][i], 1);
            i = i + 2;
            if (i >= l)
                break;
        }
    }
    write (1, "\n", 1);

}