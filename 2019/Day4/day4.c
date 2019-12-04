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

/* 1. Read/Process the number range
(If you're not me, you can add your own input range by changing these bounds)
*/
int lowerbound = 273025;
int upperbound = 767253;


// 2. Modularise password conditions 

int valid_passwords = 0 ; // a running total to switch into each module for the return?

int digits () { // number of passwords that satisfies A
    999999 -= 111111 += 1;

    return 0;
}

int in_range () { // number of passwords that satisfies B
    (upperbound -= lowerbound) += 1;

    return 0;
}

/* how many numbers are there between 111111 - 999999 that have at least one pair?
    9 * 4 = 36      digits * (digits - pair) = 1 spot
    36 * 5 = 180    1 spot * number of spots = 1 pair 
    180 * 9 = 1620  1 pair * number of pairs = total pairs
*/
int pairs = 1620; 

int valid_pairs (){ // number of passwords that satisfies C
    
    if(>= lowerbound)
        = 0;
    if(<= upperbound)
        = 0;
    
    return 0;
}

int size_matters () { // number of passwords that satisfies D

    return 0;
}

// 3. Main? Count how many passwords there are?

int main () {
    
    int all_passwords[999999]; // https://stackoverflow.com/questions/43240949/populating-an-array-with-100-integers-in-c
    for(int i = 111111; i <1000000; i++)
    all_passwords[i] = i; 


    return 0;
}

/*
valid_passwords += digits;
    valid_passwords -= in_range;
    valid_passwords -= valid_pairs;
    valid_passwords -= size_matters;

*/