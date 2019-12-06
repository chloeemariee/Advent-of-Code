// Advent of Code 2019 Day 03, part I
// Crossed Wires





//From code in class 2015 day 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXMOVES 100000000

int main (void) {
    char buffer[MAXMOVES] = { "\0"}; // buffer is idiomatic
    FILE *fp;
    char *address_of_null;

    fp = fopen( "input.txt", "r");
    if ( fgets( buffer, MAXMOVES, fp ) != NULL) {
        address_of_null = strchr( buffer, "\0");
        
    } else {
        printf( " :( \n");
        return 1;
    }
    fclose(fp); //checked that this is opening and reading the file, and it does!

    char moves[number_of_moves+1] = {"\0"};
    strncpy( moves, buffer, number_of_moves);

    for (int i = 0; i < number_of_moves; i++ ){ //spits back the contents of the file as one long string
        printf( "%c", moves [i] );
    }

    printf( "\n number of moves %d\n\n", number_of_moves);

    return 0;
}
//this isn't working, check upload from Ian after class

// plan of attack:
// in part one you want to build in as much redundancy as possible just in case you need it for part two
// For python, you could create a set to make sure everything in the list isn't a repeat
// Ian has a subroutine for counting the number of moves, from there let's make a grid
// int x=0, y=0 this will be the starting point in the grid (maybe an ordered pair struct)
// now you need to make sense of these moves then record where you go : a modular function 
// eats charaters and the spits out where you go, declare a function:
void mover (const char current_move, int *x, int *y) { //cont char becuase it saves on memory
    //switch case statement, a more compact way to do a long else if
   
    switch ( current_move ) {
        case ( "R"): *x = *x + 1; break; // same thing as x -= 1 I think
        case ( "U"): *y = *y + 1; break;
        case ( "L"): *x = *x - 1; break;
        case ( "D"): *y = *y - 1; break;
        default: printf( "\n :( \n"); // we should never get here this is just in case it doesn't work
    }
    return;
}
//try executing this function to make sure it's working, i.e. print all the x, y coordinates in a column
// you'll need to change how it prints at the end obviously