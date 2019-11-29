// Advent of Code 2015 Day 03
// In class with Ian, whole class contribution
// input file = input03.txt

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// These might be general useful things to include

#define MAXMOVES 100000000

int main (void) {
    char buffer[MAXMOVES] = { "\0"}; // buffer is idiomatic
    FILE *fp;
    char *address_of_null;
    size_t difference_of_memory_locations;
    int number_of_moves;

    fp = fopen( "input03.txt", "r");
    if ( fgets( buffer, MAXMOVES, fp ) != NULL) {
        address_of_null = strchr( buffer, "\0");
        difference_of_memory_locations = address_of_null - &buffer[0]; //basically looking at the length of the whole sentence address of last character - address of first character
        number_of_moves =(int) difference_of_memory_locations;
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
