#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int    i;
    i = 0;
    
    while(str[i])
    {   
        if (str[i] > 96 && str[i] < 123){
                    if (i == 0 || !((str[i - 1] > 96 && str[i - 1] < 123) || (str[i - 1] > 64 && str[i - 1] < 91) || (str[i - 1] > 47 && str[i - 1] < 58)))                                    // Capitalize lower case ( First Letter & First in Word)
                    {
                        str[i] = str[i] - 32;
                    }
        }
        else if (str[i] > 64 && str[i] < 91)
            str[i] = str[i] + 32;
        
        i++;
    }
    return str;
}

int main()
{
    char src[] = " he quick+brown+fox jumped over the lazy+dog? it was a sunny day in the peaceful countryside. birds chirped in the trees, and a gentle breeze rustled the leaves? the river flowed quietly nearby, reflecting the clear blue sky. life seemed calm+and+serene in this idyllic setting?       ";
    ft_strcapitalize(src);
    printf("%s", src);
}