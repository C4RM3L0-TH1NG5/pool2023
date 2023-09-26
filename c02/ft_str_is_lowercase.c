#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int    i;
    i = 0;
    
    while(str[i])
    {   
        
        if (!(str[i] > 96 && str[i] < 123))
        {
            printf("Upper Case");
            return 0;
        }
        i++;
    }
    printf("Lower Case");
    return 1;
}

int main()
{
    char src[] = "Hello";
    ft_str_is_lowercase(src);
}
