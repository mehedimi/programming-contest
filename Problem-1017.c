#include<stdio.h>
#include<math.h>

int main(){
    int spend_time, average_speed;
    float calculate = 0.0;

    scanf("%d", &spend_time);
    scanf("%d", &average_speed);

    calculate = spend_time * average_speed; // KM

    calculate = calculate / 12;

    printf("%.3lf\n", calculate);

    return 0;
}

