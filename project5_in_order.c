/* Khanh Dong - U14837275 */
/* The program take in an argument and determine if it is in alphabetical order or not. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int in_order(char *word);
int main(int argc, char *argv[]){
    if (argc != 2){
       printf("Output: Incorrect number of arguments. Usage: ./a.out word\n");
       return 0;
    }
    char *letter = argv[1];
    int order = in_order(letter);
    if (order) printf("Output: In order\n");
    else printf("Output: Not in order\n");
    return 0;
}

int in_order(char *word){
    int i,lower = 'a', previous, order = 1;
    for (i = 0; word[i] != '\0'; i++){
        previous = lower;
        lower = tolower(word[i]);
        if (isalpha(word[i]) == 0) order = 0;
        else if (previous > lower) order = 0;
    }
    return order;
} 
