/** lab10fixMe.c
* ===========================================================
* Name: Peyton Korte
* Section:
* Project: Lab 10
* Purpose: Debugging
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/



#include <stdio.h>
#include "lab10_functs.h"

int main() { 

    int n1, n2, n3;

    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);            
    int largest = findLargest(n1,n2,n3);
    printf("%d\n", largest);

    double fahrenheit = 0.0;
    printf("Please enter a temperature in fahrenheit: \n");
    scanf("%lf\n", &fahrenheit);
    double celsius = convertTemperature(fahrenheit);
    printf("%lf\n", celsius);
    return 0;
}