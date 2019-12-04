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

#define MAX_LINES 500
#define MAX_DIGITS 100


// Main, find fuel total for rocket modules
int main (what_goes_in_here); {

FILE* fp;
fuel_total;

int fuel = (( mass / 3 ) - 2 ) ; // how do you round down?
int fuel_total = SUM(fuel) ;

fp = fopen("input.txt","r");
//needs to read.lines or something
int mass;
fclose(fp);

printf ("The total fuel you need for the rockets modules is:", fuel_total)
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