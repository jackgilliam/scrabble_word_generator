#include<stdio.h>
#include "Console_IO_Utility.h"

//const
const BOARD_SIZE = 224;

//prototypes
int getPieceValue (char letter);

int main()

{
    //initilize variables
    char finalValue, userLetter;

    userLetter = getChar("please enter your letter:");
    finalValue = getPieceValue( userLetter );

    return finalValue;
}

int getPieceValue (char letter)
{
    const int oneScore=10, twoScore=1, threeScore=4, fourScore=5, fiveScore=1, eightScore=2, tenScore=2;
    char onePoints[oneScore] = {'A', 'E', 'I', 'L', 'N', 'O', 'R', 'S', 'T', 'U'};
    char twoPoints[twoScore] = 'D';
    char threePoints[threeScore] = {'B', 'C', 'M', 'P'};
    char fourPoints[fourScore] = {'F', 'H', 'V', 'W', 'Y'};
    char fivePoints[fiveScore] = 'K';
    char eightPoints[eightScore] = {'J', 'X'};
    char tenPoints[tenScore] = {'Q', 'Z'};

    char* letterArr[] = {onePoints, twoPoints, threePoints, fourPoints, fivePoints, eightPoints, tenPoints};

    int* letterArrSizes[] = {oneScore, twoScore, threeScore, fourScore, fiveScore, eightScore, tenScore};

    int index;
    for(index = 0; index < 7; index++)
    {
        int index2;
        for(index2 = 0; index2 < letterArrSizes[index]; index2++)
        {
            if(letter == letterArr[index][index2])
            {
                return index;
            }
        }
    }


    
    
    
}
