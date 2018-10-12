#include<stdio.h>
#include<math.h>

int main(){
    double x1, x2, y1, y2, ans;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    ans = pow((x2 - x1), 2) + pow((y2 - y1), 2);

    ans = sqrt(ans);

    printf("%.4lf\n", ans);

    return 0;
}


