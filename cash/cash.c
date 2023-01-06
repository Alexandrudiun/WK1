#include <csbootcamp.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate number of quarters 
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate number of dimes
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate number of nickels
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate number of pennies
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Add all coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number
    printf("%i\n", coins);
}

int get_cents(void)
{
   
    int change_coins=get_int("Change owed: ");

    while(change_coins<0)
         {
          change_coins=get_int("Change owed: ");
         }

         return change_coins;

}

//every function verify how many times the value of a coin can be reduced 
//if it is not possible to reduce the function will return 0;

//calculate how many quarters
int calculate_quarters(int cents)
{
    int cents1 = cents;
    int k=0;
    while (cents1>=25)
    {
        cents1=cents1-25;
        k++;
    }
    return k;
    return 0;
}
//calculate how many dimes
int calculate_dimes(int cents)
{
    int cents1 = cents;
    int k=0;
    while (cents1>=10)
    {
        cents1=cents1-10;
        k++;
    }
    return k;
    return 0;
}
//calculate how many nickels
int calculate_nickels(int cents)
{
      int cents1 = cents;
    int k=0;
    while (cents1>=5)
    {
        cents1=cents1-5;
        k++;
    }
    return k;
    return 0;
}
//calculate how many pennies
int calculate_pennies(int cents)
{
      int cents1 = cents;
    int k=0;
    while (cents1>=1)
    {
        cents1=cents1-1;
        k++;
    }
    return k;
    return 0;
}
