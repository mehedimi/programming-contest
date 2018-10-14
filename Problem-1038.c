#include<stdio.h>

int main(int argc, char const *argv[])
{
    float products[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    int product_code, quantity;

    scanf("%d %d", &product_code, &quantity);

    printf("Total: R$ %.2f\n", (products[product_code - 1] * quantity));

    return 0;
}
