#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main()
{
    float dollars;
    do
    {
        dollars = get_float("change owed; ");
    }
    while(dollars < 0);
    int cents = round(dollars * 100);
    
    int coins = 0;
    // 75 => 3 quarters, 0, 0, 0
    // 41 => 41 / 25 => 1 quarter,
    // 16 / 10 => 1 dime
    // 6 / 5 => 1 nickel
    // 1 / 1 => 1 cent => 0 remainder
    while(cents != 0) {
        // 25
        coins += cents / 25; // 1
        cents = cents % 25;
        
        // 10 counts
        coins += cents / 10;
        cents %= 10;
        
        // 5 counts
        coins += cents / 5;
        cents %= 5;
        
        // 1 counts
        coins += cents / 1;
        cents %= 1;
    }
    
     printf("%d\n", coins);
}