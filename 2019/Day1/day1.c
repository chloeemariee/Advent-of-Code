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


// 1. Open input.txt aka file IO

fp = fopen("input.txt","r");
//needs to read.lines or something
int mass;
fclose(fp);

// 2. Define variables

int mass = input.txt ;
int fuel = (( mass / 3 ) - 2 ) ; // how do you round down?
int fuel_total = SUM(fuel) ;

// 3. Main

int main (//what going in here?  ); {
FILE* fp;
fuel_total;
}



/* AHHHHHHHHHH

int modules (void) {
    char line [MAX_DIGITS] [MAX_LINES];
    char input[];
    FILE* fp = NULL;
}

int fuel_for_module = modules /= 3 -= 2 ;// rounding after / 3?
int total_fuel = (fuel_for_module) ;


keep the fuel for each module in an array, you'll need them seperate for part 2
gotta use tail recursion
recursion
base case
recursive case
 
if fuel <= 0 
    return total;
typecasting
*/ 