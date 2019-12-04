/* Advent of Code 2019 Day 4 
Secure Container

Looking for a password: 
    A. 6 digits
    B. in range of "input.txt" (273,025-767,253)
    C. there's at least one number pair e.g. 1_22_479
    D. from left to right numbers can only increase

How many different password combinations exist in your range?
*/

/* 1. Read/Process the number range
(to generalise, ask people who read my code to manually change lower and upper bounds?)
*/
int lowerbound = 273025;
int upperbound = 767253;

// 2. Modularise password conditions 

int valid_passwords; // a running total we'll switch into each module

int in_range () { // number of passwords that satisfy A and B
    (upperbound -= lowerbound) += 1;
    valid_passwords += in_range
}

= (upperbound -= lowerbound) += 1; 
int number_pairs (){ //something like this, so you can still change the range
    if >= lowerbound
        = 0;
    if <= upperbound
        = 0;
}

// 3. Main? Count how many passwords there are?

int main () {



}