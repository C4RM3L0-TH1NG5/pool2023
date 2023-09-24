#include <stdio.h>

void ft_sort_int_tab(int *tab, int size){
    int i,t,a,b;
    i = 0;

    while( i < size -1 )
    {
        if ( tab[i] > tab[i +1 ] )
        {
            t = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = t;
            i = 0;
        }
        i++;
    }
}

int main(){
    int b[] = {6,98,76,998};

    ft_sort_int_tab(b, 5);
    printf("%d %d %d %d", b[0], b[1], b[2], b[3]);
}