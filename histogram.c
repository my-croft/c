/*
    Bullshit C program for printing out word counts
    for a given text input. Only counts words less
    than twenty characters.
*/
#include<stdio.h>

void main() {

    //Create an array of word lengths and initalize to zero
    int lengths[20] = {0};
    int i;

    int firstLetter = 0;
    int lastLetter = 0;
    char c;
    int wordLength = 0;
    int inWord = 0;
    //Read in characters while the end of file has not been reached
    while( (c = getchar()) != EOF) {
        //If the character is a letter
        if( c >= 'A' && c <= 'z') {
            //Toggle the flag indicating we are inside a word
            inWord = 1;
            wordLength++;
        }
        else {
            //Toggle inWord to show we are outside a word
            inWord = 0;
            //If we just scanned in a word
            if(wordLength > 0)
                //Increment the number of words of a given wordLength
                lengths[wordLength]++;
            wordLength = 0;
        }
    }

    //Print the word count for each word length along with stars
    for(i = 0; i < sizeof(lengths)/sizeof(int);i++) {
        printf("Number of words of length %2d %2d ", i,lengths[i]);
        int star;
        for(star = 0; star < lengths[i]/185;star++)
            printf("*");
        printf("\n");
    }
    
}
