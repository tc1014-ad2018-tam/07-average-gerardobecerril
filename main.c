/*
 * This program tells the user the average of all the number he inputs, as well as the aount of numbers he inputs.
 *
 * Author: Gerardo González Becerril.
 * E-mail: a01411981@itesm.mx
 * Date: September 6, 2018.
 */

#include <stdio.h>

int main() {

    // Variables for storing the user's input, the sum of these's values, as well as their amount.
    double n, sum = 0, average;
    int count = 0;

    // Runs the code inside at least once.
    do {

        printf("Enter an integer: "); // Asks for a first number.
        scanf("%lf", &n); // Receives the user's input.

        sum += n; // Adds the latest input value to the sum variable.
        count++; // Ads one to the count variable, since there's a new loop, thus a new number input.

    } while (n != 0); // The code will run as long as the input is not 0.

    count -= 1; // Takes one away from count, since that's the value of 0.
    average = sum / count; // Divides the sum of the numbers between the amount of these to get the average.
    printf("The average of the %d numbers is: %lf.", count, average); // Tells the user the average.

    return 0;

}
