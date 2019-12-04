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

int valid_passwords = 0 ; // running total
int digits = 0;           // A  
int in_range = 0;         // B  
int valid_pairs = 0;      // C  
int pairs = 0;
int max_pairs = 1620 ;
/* how many numbers are there between 111111 - 999999 that have at least one pair?
9 * 4 = 36      digits * (digits - pair) = 1 spot
36 * 5 = 180    1 spot * number of spots = 1 pair 
180 * 9 = 1620  1 pair * number of pairs = total pairs
*/
int size_matters = 0;     // D  

// Main

int main () {
    
    //why did I make this?
    int all_passwords[999999]; // https://stackoverflow.com/questions/43240949/populating-an-array-with-100-integers-in-c
    for(int i = 111111; i <1000000; i++)
    all_passwords[i] = i; 

    // Password conditions 

    // number of passwords that satisfies condition A
    digits = (999999 -= 111112 += 1);                   //Why can't I add two things here and ...
    printf ("digits", digits);

    // number of passwords that satisfies condition B
    in_range = (upperbound -= lowerbound) += 1;         // ...here????
    printf ("in range", in_range);

    // number of passwords that satisfies condition C
    valid_pairs;
        if (pairs >= lowerbound)
            max_pairs= 0;
        if (pairs <= upperbound)
            max_pairs = 0;
        else (valid_pairs); 
        // idk what I'm doing here
    printf ("pairs", valid_pairs);

    // number of passwords that satisfies condition D
    size_matters;
        // how do I even do a function requiring sequential numbers
    printf ("size", size_matters);

    valid_passwords = ((((valid_passwords + digits )- in_range) - valid_pairs ) - size_matters); 

    return 0;
}