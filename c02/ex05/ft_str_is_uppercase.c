#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int    i;
    i = 0;
    
    while(str[i])
    {   
        
        if (!(str[i] > 64 && str[i] < 91))
        {
            printf("Lower Case");
            return 0;
        }
        i++;
    }
    printf("Upper Case");
    return 1;
}

int main()
{
    char src[] = "HELLO";
    ft_str_is_uppercase(src);
}
