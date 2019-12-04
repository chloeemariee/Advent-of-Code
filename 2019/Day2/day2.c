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

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. Open file

// 2. Change .txt char to int 

// 3. Split string into groups of four [0] [1] [2] [3]

// 4. "Make a computer" to read 1, 2, 99 as commands

// 5. "replace position [1] with the value 12 and replace position 2 with the value 2."

// 6. Print "value at position [0]" after the programme ends


//indexing ????
