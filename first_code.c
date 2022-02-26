#include<stdio.h>
#include "Console_IO_Utility.h"

//const
const int BOARD_SIZE = 224;

//prototypes
int getPieceValue (char letter);

int main()

{
    //initilize variables
    int finalValue;
    char userLetter;

    userLetter = promptForCharacter("please enter your letter:");
    finalValue = getPieceValue( userLetter );
    printf("the final value is: %d", finalValue);

    return 0;
}

int getPieceValue (char letter)
{

    char alpha1[] = {'A', 'E', 'I', 'L', 'N', 'O', 'R', 'S', 'T', 'U'};
    char alpha2[] = {'D'};
    char alpha3[] = {'B', 'C', 'M', 'P'};
    char alpha4[] = {'F', 'H', 'V', 'W', 'Y'};
    char alpha5[] = {'K'};
    char alpha8[] = {'J', 'X'};
    char alpha10[] = {'Q', 'Z'};

    // checks if letter is in the alpha1 array 
    //      returns point value (1)
    for (int index = 0; index < 9; index++)
    {
        if (alpha1[index] == letter)
        {
            return 1;
        }
    }
    
    // checks if letter is in the alpha2 array 
    //      returns point value (2)
    for (int index = 0; index < 1; index++)
    {
        if (alpha2[index] == letter)
        {
            return 2;
        }
    }

    // checks if letter is in the alpha3 array 
    //      returns point value (3)
    for (int index = 0; index < 4; index++)
    {
        if (alpha3[index] == letter)
        {
            return 3;
        }
    }
    
    // checks if letter is in the alpha4 array 
    //      returns point value (4)
    for (int index = 0; index < 5; index++)
    {
        if (alpha4[index] == letter)
        {
            return 4;
        }
    }

    // checks if letter is in the alpha5 array 
    //      returns point value (5)
    for (int index = 0; index < 1; index++)
    {
        if (alpha5[index] == letter)
        {
            return 5;
        }
    }

    // checks if letter is in the alpha8 array 
    //      returns point value (8)
    for (int index = 0; index < 2; index++)
    {
        if (alpha8[index] == letter)
        {
            return 8;
        }
    }
    
    // checks if letter is in the alpha10 array 
    //      returns point value (10)
    for (int index = 0; index < 2; index++)
    {
        if (alpha10[index] == letter)
        {
            return 10;
        }
    }



 return 0;

}


/*
/
TODO:
- set rules 
- add total word score function
- create board function
- set bonus squares
- track amount of tiles/left
- tell braden what to do
- display scrabble board
- set images for empty bonus squares
- generate random tiles 
- 


- 
- dictionary 
- list possible letters/combos that are playable
- find possible words with given tiles on board/hand
- find largest possible score
*/

