#include <string.h>
#include "letter_value.c"
#include<stdio.h>
#include "Console_IO_Utility.h"

//global constants
const int doubleLetterScore = 2;
const int doubleWordScore = 2;
const int trippleWordScore = 3;
const int trippleLetterScore = 3;

//prototypes
int addTileValues(char* word);

// -TODO-
int fetchWordBonuses();
int fetchLetterBonuses();

// get string
// sort string by index adding each char value using getPeicevalue to pointcounter

int main()
{
    char playedWord[ STD_STR_LEN];
    int wordScore;
    
    promptForString("enter your word for counting:", playedWord);
    printf("length = %d\n", strlen(playedWord));
    wordScore = addTileValues(playedWord);

    printf("your score for the word %s was %d\n", playedWord, wordScore);
    return 0;
}

int addTileValues(char* word)
{
    
    //find length of inout string
    int length = strlen(word);
    int score = 0;
    //loop to add string letter scrabble values
    for (int index = 0; index < length; index++)
    {
        score = score + getPieceValue(word[index]);
    }
    return score;
}