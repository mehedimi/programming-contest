#include <stdio.h>

int main()
{
    int product_code[2];
    int product_unit[2];
    float product_price[2];
    float answer;

    scanf("%d %d %f", &product_code[0], &product_unit[0], &product_price[0]);
    scanf("%d %d %f", &product_code[1], &product_unit[1], &product_price[1]);

    answer = ((product_price[0] * product_unit[0]) + (product_price[1] * product_unit[1]));
    printf("VALOR A PAGAR: R$ %.2f\n", answer);
    return 0;
}