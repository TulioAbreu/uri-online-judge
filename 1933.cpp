#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A, B;
    scanf("%d %d", &A, &B);

    int bestC;
    if (A == B) { // Trio
        bestC = A;
    }
    else { // Dupla
        bestC = (A > B)? A:B;
    }

    printf("%d\n", bestC);
    return 0;
}
