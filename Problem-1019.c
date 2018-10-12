#include<stdio.h>

int main(){
    int time_equation[3] = {3600, 60, 1};
    int time_format[3] = {0, 0, 0};
    int second, i;

    scanf("%d", &second);
    for(i = 0; i < 3; i++){
        time_format[i] = second / time_equation[i];
        second = second % time_equation[i];
    }
    for(i = 0; i < 3; i++){
        printf("%d", time_format[i]);
        if(i < 2){
            printf(":");
        }
    }
    printf("\n");
    return 0;
}