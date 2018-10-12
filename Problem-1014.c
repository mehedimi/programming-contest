#include<stdio.h>
#include<math.h>

int main(){
    int x;
    float y;

    scanf("%d", &x);
    scanf("%f", &y);

    printf("%.3f km/l\n", x / y);
    return 0;
}

