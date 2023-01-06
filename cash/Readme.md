DINU ALEXANDRU 17 LICEUL TEORETIC OVIDIUS CONSTANTA alexandrudinu04@gmail.com
# README
This program calculates the minimum number of coins needed to give a customer change.

# Functionality
The program prompts the user for the amount of change owed and ensures that a positive value is entered. It then calculates the minimum number of coins needed to give the customer the correct amount of change. The program considers four types of coins: quarters, dimes, nickels, and pennies. The program first calculates the number of quarters needed, then the number of dimes, then the number of nickels, and finally the number of pennies. The program prints the total number of coins required.

# Implementation Details
The program consists of a main function and four helper functions:

* *get_cents prompts* the user for the amount of change owed and ensures that a positive value is entered. It returns the value entered by the user.
* *calculate_quarters* calculates the number of quarters needed to give the correct amount of change. It takes an integer argument representing the number of cents and returns the number of quarters needed.
* *calculate_dimes* calculates the number of dimes needed to give the correct amount of change. It takes an integer argument representing the number of cents and returns the number of dimes needed.
* *calculate_nickels* calculates the number of nickels needed to give the correct amount of change. It takes an integer argument representing the number of cents and returns the number of nickels needed.
* *calculate_pennies* calculates the number of pennies needed to give the correct amount of change. It takes an integer argument representing the number of cents and returns the number of pennies needed.
* The *main* function calls these helper functions in order to calculate the minimum number of coins needed to give the customer the correct amount of change. It then prints the total number of coins required.
