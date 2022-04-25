// Khanh Dong - U14837275
// The program sort states by percentage of population from 65 years old to older//

#include <stdio.h>
#include <string.h>
#define MAX_STATE 100
#define MAX_LEN 150

struct states {
    char name[MAX_LEN+1];
    int pop_2020;
    int pop_2010;
    double percent_5;
    double percent_18;
    double percent_65;
};

void sort_states(struct states list[], int n);

int main(){
    struct states state[MAX_STATE];
    char input[MAX_LEN],output[MAX_LEN]="sorted_";
  
    printf("Enter the file name:\n");
    scanf("%s", input);
   
    strcat(output, input);

    FILE *pfile = fopen(input, "r");
    if (pfile == NULL){
       printf("Error when reading\n");
       return 1;
    }
    int i=0;
    while (!feof(pfile) && !ferror(pfile)){
       fscanf(pfile, "%[^,],%d,%d,%lf,%lf,%lf\n",state[i].name,&state[i].pop_2020, &state[i].pop_2010, &state[i].percent_5, &state[i].percent_18, &state[i].percent_65);
       i++;
    }

    sort_states(state, i);

    FILE *sorted = fopen(output, "w");
    if (sorted == NULL){
       printf("Error when reading\n");
       return 1;
    }
    int x;
    for(x = i-1; x > -1; x--){
       fprintf(sorted, "%s, %d, %d, %.1lf, %.1lf, %.1lf\n", state[x].name, state[x].pop_2020, state[x].pop_2010, state[x].percent_5, state[x].percent_18, state[x].percent_65);
    }
    fclose(pfile);
    fclose(sorted);
    return 0;
}

void sort_states(struct states list[], int n){
    struct states temp;
    int largest = 0;
    if(n == 1) return;
    
    int i;
    for (i = 1; i<n; i++){
        if (list[i].percent_65 > list[largest].percent_65) largest = i;
    }
    if (largest < n-1){
        temp = list[n-1];
        list[n-1] = list[largest];
        list[largest] = temp;
    }
    sort_states(list, n-1);
}   
