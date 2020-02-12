#include <stdio.h>

int main() {
        int tests;
        scanf("%d", &tests);

        int i;
        for (i = 0; i < tests; ++i) {
                int radius1, radius2;
                scanf("%d %d", &radius1, &radius2);
        
                int radius3 = radius1+radius2;
                printf("%d\n", radius3);
        }

        return 0;
}