#include <unistd.h>

int main(int ac, char **av) {

    int i = 0;

    while (av[1][i]) {
        if (i % 2) {
            char currentChar = av[1][i];
            write(1, &currentChar, 1);
        }
        i++;
    }
    write(1, "\n", 1);
    return 0;
}