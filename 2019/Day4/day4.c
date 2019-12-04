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
int six_digits = 0;           // A  
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
int increment = 0;



// Main

int main () {
    
    // array of all possible passwords
    int all_passwords[in_range]; // https://stackoverflow.com/questions/43240949/populating-an-array-with-100-integers-in-c
    for(int i = lowerbound; i <upperbound; i++)
    all_passwords[i] = i; 
    // how remove things from the array? count how many of x exist in the array?



    // Password Conditions 


    // number of passwords that satisfy condition A
    six_digits = (999999 -= 111112 += 1);             //Why can't I add two things here and ...
    printf ("digits", six_digits);


    // number of passwords that satisfies condition B
    in_range = (upperbound -= lowerbound) += 1;       // ...here???? I could get rid of A, B works to do the same
    printf ("in range", in_range);


    // number of passwords that satisfies condition C
    valid_pairs;
        if (pairs >= lowerbound)
            max_pairs= 0;
        if (pairs <= upperbound)
            max_pairs = 0;
        else (max_pairs - pairs);
        // idk what I'm doing here, should I find where all the pairs are in the array?
    printf ("pairs", valid_pairs);


    // number of passwords that satisfies condition D
    size_matters;
        if (all_passwords[], ([0]<=[1]<=[2]<=[3]<=[4]<=[5]))
            increment += 1;
        else
            increment;
    printf ("size", size_matters);



    valid_passwords = ((((valid_passwords + six_digits )- in_range) - valid_pairs ) - size_matters); 
    printf ("number of valid passwords =", valid_passwords);
    return 0;
}