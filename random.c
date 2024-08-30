#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "random.h"

char *randchar(){
    char *str = malloc(8); //Allocate for 7 characters and a null terminator
    str[0] = '\0'; //initialize empty string
    for (int i = 0; i<7; i++){ //Repeat for 7 rand letters
        char randLetter = 'A' + (rand() % 26); //Generate letter
        //char tempStr[2]; //Temp array for concatination
        str[i] = randLetter;
     }
    str[7] = '\0';
    return str;
 }
