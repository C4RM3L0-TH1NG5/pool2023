#include <stdio.h>

char *ft_strupcase(char *str)
{
    int    i;
    i = 0;
    
    while(str[i])
    {   
        
        if (str[i] > 64 && str[i] < 91)
        {
            str[i] = str[i] + 32;
        }
        i++;
    }

    return str;
}

int main()
{
    char src[] = "AZ";
    ft_strupcase(src);
    printf("%s", src);
}