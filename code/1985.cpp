#include <cstdio>

int main(int argc, char const *argv[]) {
    float billValue = 0.0;
    int lunchs = 0;
    scanf("%d", &lunchs);

    for (int i = 0; i < lunchs; i++) {
        int code, quantity;
        scanf("%d %d", &code, &quantity);

        float price = 0.0;
        switch (code) {
        case 1001: {
            price = 1.50f;
        } break;
        case 1002: {
            price = 2.50f;
        } break;
        case 1003: {
            price = 3.50f;
        } break;
        case 1004: {
            price = 4.50f;
        } break;
        case 1005: {
            price = 5.50f;
        } break;
        }

        billValue += price*quantity;
    }

    printf("%.2f\n", billValue);
    
    return 0;
}
