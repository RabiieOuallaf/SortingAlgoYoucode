#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// searching algo 

int binarySearch(int arr[], int low, int high, int n){

    

    int middle = (high + low) / 2;


    if(n == arr[middle]) {

        return printf("the index of the element you want is : %d" , middle);

    }else if (n <= arr[middle]) {

        return binarySearch(arr , low, high = middle, n);

    }else if (n >= arr[middle]){

        return binarySearch(arr , low = middle , high, n);

    }else {
        return printf("Hello");
    }

    return 0;
}

void swap(int *x, int *y)
{

    int temp = *x;
    *x = *y;
    *y = temp;

};



int main(){

    int chiox; 

    printf("Chose the way of sorting you want : \n 1 : Bubble sort \n 2 : Selection sort \n 3 : insertion sort \n the mode you want : ");
    scanf("%d", &chiox);

    if(chiox != 1 && chiox != 2 && chiox != 3){

        printf("Stop joking");

    }else if(chiox == 1) { // if the user takes 

        int size;
    

        printf("Please enter the number of elements :");
        scanf("%d", &size);

        int *memo;

        // allocate memorey
    

        memo = (int*)malloc(size * sizeof(int));


        // Asking the user to type each note

        for(int i = 0; i < size; i++){

            printf("Enter the notes  %d: ", i);
            scanf("%d", &memo[i]);
            
        }

        // bubble sort

        for(int i = 0; i < size; i++) {

            
            for(int k = 0; k < size-i-1; k++){

                if(memo[k] < memo[k+1]){ // if the first element smaller than the second swap;


                    //int temp = memo[k];
                    //memo[k] = memo[k+1];
                    //memo[k+1] = temp;

                    swap(&memo[k], &memo[k+1]);


                } // semicolon of the if
            } // semicolon of the for
        }
    
    // loop over the sorted array and print it 
        for(int j = 0; j < size; j++){

            printf("bubble sort : %d\n" , memo[j]);

        }

    // asking the user to type the numbre he wants to know it's index;
    int n; 

    printf("What number you are searching for ? :");

    scanf("%d", &n);
    // calling the searching algo function

    binarySearch(memo, 0, 4, n);

    }else if(chiox == 2){

        int size;
    

        printf("Please enter the number of elements :");
        scanf("%d", &size);

        int *memo;

        // allocate memorey
    

        memo = (int*)malloc(size * sizeof(int));

        // Asking the user to type each note

        for(int i = 0; i < size; i++){

            printf("Enter the notes  %d: ", i);
            scanf("%d", &memo[i]);
            
        }

        // selection sort

        for(int i = 0; i < size ; i++){

            int min = i;

            for(int j = i+1; j <= size - 1; j++){

                if(memo[j] < memo[min]){

                    min = j;

                }

                if(min != i){


                    int temp = memo[j-1];
                    memo[j-1] = memo[min];
                    memo[min] = temp;

                }

            }

        }

        // a loop to show the sorted version to the user 

        for(int j = 0; j < size; j++){
            printf("selection sort : %d\n" , memo[j]);
        } 

        // asking the user to type the numbre he wants to know it's index;
        int n; 

        printf("What number you are searching for ? :");

        scanf("%d", &n);

        // calling the searching algo function

        binarySearch(memo, 0, 4, n);

    }else if(chiox == 3){  // third mode

        int size;
    

        printf("Please enter the number of elements :");
        scanf("%d", &size);

        int *memo;

        // allocate memorey
    

        memo = (int*)malloc(size * sizeof(int));

        // Asking the user to type each note

        for(int i = 0; i < size; i++){

            printf("Enter the notes  %d: ", i);
            scanf("%d", &memo[i]);
            
        }
        // insertion sort

        for(int i = 0; i < size; i++){

            int max = i;

            for(int j = i+1; j < size; j++){

                if(memo[max] < memo[j]){ // if there  is a number biggre than our max value change the value to it


                     // if the index changed swap the values 

                        int temp = memo[i];
                        memo[i] = memo[j];
                        memo[j] = temp;

                    
                }
            }
        }

        // a loop to show the sorted version to the user 
        for(int j = 0; j < size; j++){
            printf("insertion sort : %d\n" , memo[j]);
        }
        
        // asking the user to type the numbre he wants to know it's index;
        int n; 

        printf("What number you are searching for ? :");

        scanf("%d", &n);

        // calling the searching algo function

        binarySearch(memo, 0, 4, n);
    }
} // the end of the programm