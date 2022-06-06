#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int cash = 100;

    int main(){
        
        if (cash == 0) {
            printf("\nDeposite more cash to keep gambling!");
            return 0;
        } 
        int n1, bet_money, bet_type;
        srand(time(0));
        printf("\nCurrent bet=>");
        scanf("%d", &bet_money);
        if (bet_money == 0)
        {
            printf("Come back later\n");
            main();
        }
        if (bet_money > cash)
        {
            printf("Not enough founds\n");
            main();
        }
        if (bet_money != 0)
        {
            cash = cash - bet_money;
        }
        printf("What type of bet?\n");
        printf("Green => 1\nRed => 2\nBlack => 3\n1 - 12 => 4\n13 - 24 => 5\n25 - 36 => 6\n");
        printf("Type of bet=>");
        scanf("%d", &bet_type);
        n1 = (rand() % 36);
        printf("\nWinning number => %d\n", n1);
        if (bet_type == 1)
        {
            if (n1 == 0)
            {
                printf("Congratulations, you WON!\n");
                bet_money = bet_money * 34;
                cash = cash + bet_money;
                printf("\nCash = %d", cash);
                main();
            }
            else
            {
                printf("You lost, better luck next time");
                printf("\nCash = %d", cash);
                main();
            }
        }
        if (bet_type == 2)
        {
            if (n1 == 1 || n1 == 3 || n1 == 5 || n1 == 7 || n1 == 9 || n1 == 12 || n1 == 14 || n1 == 16 || n1 == 18 || n1 == 19 || n1 == 21 || n1 == 23 || n1 == 25 || n1 ==27 || n1 == 30 || n1 == 32 || n1 ==34 || n1 == 36)
            {
                printf("Congratulations, you WON!\n");
                bet_money = bet_money * 2;
                cash = cash + bet_money;
                printf("\nCash = %d", cash);
                main();
            }
            else
            {
                printf("You lost, better luck next time");
                printf("\nCash = %d", cash);
                main();
            }
        }
        if (bet_type == 3)
        {
            if (n1 == 2 || n1 == 4 || n1 == 6 || n1 == 8 || n1 == 10 || n1 == 11 || n1 == 13 || n1 == 15 || n1 == 17 || n1 == 20 || n1 == 22 || n1 == 24 || n1 == 26 || n1 == 28 || n1 == 29 || n1 == 31 || n1 == 33 || n1 == 35)
            {
                printf("Congratulations, you WON!\n");
                bet_money = bet_money * 2;
                cash = cash + bet_money;
                printf("\nCash = %d", cash);
                main();
            }
            else
            {
                printf("You lost, better luck next time");
                printf("\nCash = %d", cash);
                main();
            }
        }
        if (bet_type == 4)
        {
            if (n1 > 0 && n1 <= 12)
            {
                printf("Congratulations, you WON!");
                bet_money = bet_money * 3;
                cash = cash + bet_money;
                printf("\nCash = %d", cash);
                main();
            }
            else
            {
                printf("You lost, better luck next time");
                printf("\nCash= %d", cash);
                main();
            }
        }   
        if (bet_type == 5)
        {
            if(n1 > 12 && n1 <=24)
            {
                printf("Congratulations, you WON!");
                bet_money = bet_money * 3;
                cash = cash + bet_money;
                printf("\nCash = %d", cash);
                main();
            }
            else
            {
                printf("You lost, better luck next time");
                printf("\nCash= %d", cash);
                main();
            }
        }
        if (bet_type == 6)
        {
            if (n1 > 24 && n1 <=36)
            {
                printf("Congratulations, you WON!");
                bet_money = bet_money * 3;
                cash = cash + bet_money;
                printf("\nCash = %d", cash);
                main();
            }
            else
            {
                printf("You lost, better luck next time");
                printf("\nCash= %d", cash);
                main();
            }
        }
        return cash;
        }   
