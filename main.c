#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int swap(int x, int y){

    int temp = x;
    x = y;
    y = temp;
};
int main(){

    int n;
    

    printf("Please enter the number of elements :");
    scanf("%d", &n);

    int memo[n];

    // allocate memorey
    

    memo[n] = (int*)malloc(n * sizeof(int));


    
    // Asking the user to type each note
    for(int i = 0; i < n; i++){

        printf("Enter the notes  %d: ", i+1);
        scanf("%d", &memo[i]);
            
    };

    

    int size = sizeof(memo)/sizeof(memo[0]);

    // bubble sort

    for(int i = 0; i < size-1; i++) {
            
        for(int k = 0; k < size-1; k++){

            if(memo[k] <= memo[k+1]){

            int temp = memo[k];
            memo[k] = memo[k+1];
            memo[k+1] = temp;

        };
    };
};


    for(int j = 0; j < size; j++){
        printf("bubble sort : %d\n" , memo[j]);
    }; 

    // selection sort

    for(int i = 0; i < size - 1; i++){

        int max = memo[0];

        if(max < memo[i]){
            max = memo[i];
        };

    };

    for(int j = 0; j < size; j++){
        printf("selection sort : %d\n" , memo[j]);
    }; 

    
    
    // insertion sort

    for(int i = 0; i <= size; i++){

        int max = memo[i];

        for(int j = i+1; j <= size; j++){

            if(max < memo[j]){ // if there  is a number biggre than our max value change the value to it
                max = memo[j];
            };

            if(max != i){ // if the index changed swap the values 

                swap(memo[max] , memo[j]);

            };

        };

    };
    for(int j = 0; j < size; j++){
        printf("insertion sort : %d\n" , memo[j]);
    }; 

// Well , this part of the project is under building :)

    int index;

    printf("What is the note : ");
    scanf("%d", &index);
    printf("The element you chosen is : %d", index);
   
    
};


/*

#include <stdio.h>
#include <string.h>

int askingForNotes()
{
    int Notes[] = {14,4,8,20};

    

    int size = sizeof(Notes)/sizeof(Notes[0]);
    int order,temp;

    printf("Type 1 to show the list of notes \n Type 2 to order them");
    scanf("%d", &order);

    switch (order)
    {
    case 1:
        for(int i = 0; i < size; i++){

        printf("%d\n", Notes[i]);

        };
        break;
    case 2:
        for(int i = 0; i < size-1; i++) {
            
            for(int k = 0; k < size-1; k++){
                if(Notes[i] > Notes[i+1]){

                temp = Notes[i];
                Notes[i] = Notes[i+1];
                Notes[i+1] = temp;

            };
        };
            
        };
        for(int j = 0; j < size; j++){
            printf("%d\n", Notes[j]);
        };

    default:
        break;
    }



};


int main() {
    
    askingForNotes();

};

*/