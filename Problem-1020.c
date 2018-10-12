#include<stdio.h>

int main(){
    int age_equation[3] = {365, 30, 1};
    int age_format[3] = {0, 0, 0};
    int days, i;
    scanf("%d", &days);
    for(i = 0; i < 3; i++){
        age_format[i] = days / age_equation[i];
        days = days % age_equation[i];
    }
    printf("%d ano(s)\n", age_format[0]);
    printf("%d mes(es)\n", age_format[1]);
    printf("%d dia(s)\n", age_format[2]);
    return 0;
}