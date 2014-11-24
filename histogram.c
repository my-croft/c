#include<stdio.h>

void main() {

    int lengths[20] = {0};
    int i;

    int firstLetter = 0;
    int lastLetter = 0;
    char c;
    int wordLength = 0;
    int inWord = 0;
    while( (c = getchar()) != EOF) {
        if( c >= 'A' && c <= 'z') {
            inWord = 1;
            wordLength++;
        }
        else {
            inWord = 0;
            if(wordLength > 0)
                lengths[wordLength]++;
            wordLength = 0;
        }
    }

    for(i = 0; i < sizeof(lengths)/sizeof(int);i++) {
        printf("Number of words of length %2d %2d ", i,lengths[i]);
        int star;
        for(star = 0; star < lengths[i]/185;star++)
            printf("*");
        printf("\n");
    }
    
}
