#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int binarySearch(){

    printf("hi");

    return 0;
}

int swap(int x , int y)
{

    int temp = x;
    x = y;
    y = temp;

}



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

                /*

                    int temp = memo[k];
                    memo[k] = memo[k+1];
                    memo[k+1] = temp;

                */
                    swap(memo[k] , memo[k+1]);

                } // semicolon of the if
            } // semicolon of the for
        }
    
    // loop over the sorted array and print it 
        for(int j = 0; j < size; j++){
            printf("bubble sort : %d\n" , memo[j]);
        }

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

                    int temp = memo[i];
                    memo[i] = memo[j];
                    memo[j] = temp;

                }

            }

        }

        // a loop to show the sorted version to the user 

        for(int j = 0; j < size; j++){
            printf("selection sort : %d\n" , memo[j]);
        } 

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
    }
} // the end of the programm

/*



    
    
    

    int x;

    // Asking the user type the value he wants to know it's index
    printf("Please type a value ");
    scanf("%d", &x);

    

}




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
