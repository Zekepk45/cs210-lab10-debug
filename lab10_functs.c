/** lab10_functs.c
* ===========================================================
* Name: Name, Date
* Section:
* Project: Lab 10
* Purpose: Debugging
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/

    int findLargest(int n1, int n2, int n3){
        if (n1>=n2 && n1>=n3)
            return n1;
        else if (n2>=n1 && n2>n3)  
            return n2;
        else                  
            return n3;
        return 0;
    }

    double convertTemperature(double fahrenheit){
        double celsius = (5.0/9.0) * (fahrenheit - 32.0);
        return celsius;
    }