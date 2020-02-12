#include <stdio.h>

int main(int argc, char const *argv[])
{
    int total_tomadas = 1;
    int T[4];
    
    size_t i;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &T[i]);
        total_tomadas += T[i]-1;
    }

    printf("%d\n", total_tomadas);

    return 0;
}
