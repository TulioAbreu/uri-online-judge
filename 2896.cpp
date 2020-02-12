#include <stdio.h>

void test();

int main(int argc, char const *argv[])
{
    int test_cases;
    scanf("%d", &test_cases);
    for (int i = 0; i < test_cases; ++i)
    {
        test();
    }
    return 0;
}

void test() 
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    int new_bottles = n / k;
    int my_bottles = n - new_bottles*k;

    int total_bottles = new_bottles + my_bottles;

    printf("%d\n", total_bottles);
}
