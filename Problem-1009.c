#include<stdio.h>

int main(){
    char name[20];
    float salary;
    float sales_product;
    float final_salary;

    scanf("%s", name);
    scanf("%f", &salary);
    scanf("%f", &sales_product);

    final_salary = ((sales_product * 15) / 100) + salary;

    printf("TOTAL = R$ %.2f\n", final_salary);

    return 0;
}