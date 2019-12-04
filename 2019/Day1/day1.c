/* Advent of Code 2019
Day 1: The Tyranny of the Rocket Equation PART 1

"the fuel required for a module =  its mass, divide by three, round down, and subtract 2"

Fuel Counter-Upper = how much total fuel needed
Calculate the fuel for each module (input.txt) and sum them 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* why is this here?
#define MAX_LINES 500
#define MAX_DIGITS 100
*/

// Main, find fuel total for rocket modules
int main () {

FILE* fp;
char mass;

fp = fopen("input.txt","r");
    int fuel = (( mass / 3 ) - 2 ) ; // how do you round down?
    int fuel_total = sum(fuel) ;
fclose(fp);

printf("Sum of array is %d.", fuel_total); //https://www.tutorialspoint.com/learn_c_by_examples/sum_of_array_in_c.htm

}



/*
keep the fuel for each module in an array, you'll need them seperate for part 2
gotta use tail recursion
recursion
base case
recursive case
 
if fuel <= 0 
    return total;
typecasting
*/ 