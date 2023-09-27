#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int    i;
    i = 0;
    
    while(str[i])
    {   
        
        if (!(str[i] > 31 && str[i] <= 127))
        {
            printf("Not printable");
            return 0;
        }
        i++;
    }
    printf("It is Printable");
    return 1;
}

int main()
{
    char src[] = "Hello";
    ft_str_is_printable(src);
}
