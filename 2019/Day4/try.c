/* Advent of Code 2019 Day 4 
Secure Container

Looking for a password: 
    A. 6 digits
    B. in range of "input.txt" (273,025-767,253)
    C. there's at least one number pair e.g. 1_22_479
    D. from left to right numbers can only increase

How many different password combinations exist in your range?
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Read/Process the number range
(If you're not me, you can add your own input range by changing these bounds)
*/
int lowerbound = 273025; //first real option 333333
int upperbound = 767253; //last real option 666666

// Define variables

int all_passwords[333334]; // https://stackoverflow.com/questions/43240949/populating-an-array-with-100-integers-in-c
    for(int i = 333333; i <666666; i++)
    all_passwords[i] = i; 

