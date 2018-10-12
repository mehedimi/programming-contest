#include <stdio.h>

int main()
{
    float amount,
        coins[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    int i,
        notes[6] = {100, 50, 20, 10, 5, 2},
        coins_alt[5] = {50, 25, 10, 5, 1},
        notes_count[6] = {0, 0, 0, 0, 0, 0},
        coins_count[6] = {0, 0, 0, 0, 0, 0};
    int note, coin;
    scanf("%f", &amount);
    note = amount;
    coin = (amount - note) * 100;
    // if((coin * 1000) % 10 == 9){
    //     coin++;
    // }
    for(i = 0; i < 6; i++){
        notes_count[i] = note / notes[i];
        note = note % notes[i];
    }
    coins_count[0] = note / 1;
    for(i = 1; i < 6; i++){
        printf("Coin %d\n", coin);
        coins_count[i] = coin / coins_alt[i];
        coin = coin % coins_alt[i];
    }
    printf("NOTAS:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d nota(s) de R$ %d.00\n", notes_count[i], notes[i]);
    }
    printf("MOEDAS:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d moeda(s) de R$ %.2f\n", coins_count[i], coins[i]);
    }
    return 0;
}