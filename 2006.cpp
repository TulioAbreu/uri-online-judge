#include <stdio.h>

int main() {
        int tea;
        int hits = 0;

        scanf("%d", &tea);

        int i;
        for (i = 0; i < 5; ++i) {
                int current_answer;
                scanf("%d", &current_answer);

                if (current_answer == tea)
                        hits++;
        }

        printf("%d\n", hits);

        return 0;
}