#include<stdio.h>
#include<math.h>

int main(){
    int possible_banknotes[7] = { 100, 50, 20, 10, 5, 2, 1 };
    int possible_banknotes_count[7] = {0, 0, 0, 0, 0, 0, 0};

    int i, amount;

    scanf("%d", &amount);

    int cary = amount;

    for(i = 0; i < 7; i++){
        possible_banknotes_count[i] = cary / possible_banknotes[i];
        cary = cary % possible_banknotes[i];
    }
    printf("%d\n", amount);
    for( i = 0; i < 7; i++){
        printf("%d nota(s) de R$ %d,00\n", possible_banknotes_count[i], possible_banknotes[i]);
    }
    return 0;
}


