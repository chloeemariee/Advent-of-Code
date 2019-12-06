/* Advent of Code 2019 Day 2 : 1202 Program Alarm

Opcodes 
1 adds the following two numbers and writes the sum into the third spot e.g.
    1 10 20 30 --> add 3 to 5 and replace 6 with the total 
2 multiplys ollowing two numbers and writes the product into the third spot e.g.
    1 10 20 200
But wait! "the three integers after the opcode = where the inputs and outputs are, != their values."

99 means the programme is over, stop immediately

Read the opcodes in chunks of four i.e. 
1,9,10,3,   ADD *9 *10 output3
2,3,11,0,   MULT *3 *11 output0
99,         END
30,40,50    ....


Need this for Day 5


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. Open file
FILE* fp;

fp = fopen( "input.txt", "r" );
reader( fp, line[], )
fclose(fp);

// 2. Change .txt char to int 

// 3. Split string into groups of four [0] [1] [2] [3]
    // https://stackoverflow.com/questions/2723932/reading-bytes-from-a-text-file-that-has-the-form-of-machine-code-in-c
    // buffer?
    // https://stackoverflow.com/questions/3758956/reading-file-input-as-opcode-in-c
    // day 4 just came out gotta go ... :(
line []



// 4. "Make a computer" to read 1, 2, 99 as commands

int read_opcode () {
    if [0] = 1 ; 
        [1] += [2]
        // output into [3]
    else [0] = 2 ; 
        [1] *= [2]
        // output into [3]
    else [0] = 99;
        printf ("End of Programme")
}

// 5. "replace position [1] with the value 12 and replace position 2 with the value 2."

int main () {
FILE* fp;

}

// 6. Print "value at position [0]" after the programme ends

printf ("the value at position 0 is:" [0])

//indexing ????
