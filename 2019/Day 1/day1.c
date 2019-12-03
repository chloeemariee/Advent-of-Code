// Advent of Code 2019
// Day 1: The Tyranny of the Rocket Equation

// "the fuel required for a module =  its mass, divide by three, round down, and subtract 2"

//Fuel Counter-Upper = how much total fuel needed
//Calculate the fuel for each module (input.txt) and sum them 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_LINES 500
#define MAX_DIGITS 100

int modules (void) {
    char line [MAX_DIGITS] [MAX_LINES];
    char input[];
    FILE* fp = NULL;
}

//File IO
fp = fopen("input.txt","r");
int modules;
fclose(fp);

int fuel_for_module = modules /= 3 -= 2 ;// rounding after / 3?
int total_fuel = (fuel_for_module) ;

int main ; {

    
}

//keep the fuel for each module in an array, you'll need them seperate for part 2
//gotta use tail recursion
// recursion
//    base case
//    recursive case

if fuel <= 0 
    return total;

// typecasting