#include <stdio.h>

char *ft_strupcase(char *str)
{
    int    i;
    i = 0;
    
    while(str[i])
    {   
        
        if (str[i] > 96 && str[i] < 123)
        {
            str[i] = str[i] - 32;
        }
        i++;
    }

    return str;
}

int main()
{
    char src[] = "az";
    ft_strupcase(src);
    printf("%s", src);
}