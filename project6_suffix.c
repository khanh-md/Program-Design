//Khanh Dong - U14837275//
//The program ask for amount of characters then combine words to create a suffix that has that amount of letters. //

#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000
void makeSuffix(FILE *pfile, int M);
int main(int argc, char *argv[]){
    int i, M;
    printf("Enter the value of M: \n");
    scanf("%d", &M);
    while(M < 20){
         printf("Must be at least 20\n");
         return 0;
    }
    FILE *pfile;
    for (i = 1; i<argc; i++){
        printf("%s: ", argv[i]);
        pfile = fopen(argv[i], "r");
        if (pfile == NULL){
           printf("Error opening file\n");
           return 1;
        }
        makeSuffix(pfile, M);
        printf("\n");
    }
    return 0;
}

void makeSuffix(FILE *pfile, int M){
     char line[MAX_LEN+1];
     char suffix[]="";
     int len=0;
     while(fgets(line, MAX_LEN+1, pfile) != NULL){
          if (strlen(line) > (M-len)){ 
             strcpy(suffix, "");
             strcat(suffix, line);
          }
          else{   
             strcat(suffix, line);
             len = strlen(suffix);
          }
     }
     printf("%s", suffix);
     fclose(pfile); 
}
