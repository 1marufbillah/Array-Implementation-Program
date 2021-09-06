#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int Fetching();
int Insertion();
int Detetion();
int Exit();

int main(){
    int choice, data;

    while(1){
        /* Menu */
        printf("\n\t\t\t\t------------------------------------\n");
        printf("\t\t\t\t    ARRAY IMPLEMENTATION PROGRAM      \n");
        printf("\t\t\t\t    Md Maruf Billah, LPU: 12010433     \n");
        printf("\t\t\t\t------------------------------------\n");
        printf("\t\t\t\t1. Create Array & Fetch element(s)\n");
        printf("\t\t\t\t2. Insertion\n");
        printf("\t\t\t\t3. Deletion\n");
        printf("\t\t\t\t4. Exit\n");
        printf("\t\t\t\t------------------------------------\n");
        printf("\t\t\t\tEnter your choice: ");
        scanf("%d", &choice);

        switch(choice){
        case 1: data = Fetching();
            break;
        case 2: data = Insertion();
            break;
        case 3:data = Detetion();
            break;
        case 4: data = Exit();
                break;
        }
    }
}

int Fetching(){
    int i ,size;
    /* Taking size of array from user */
    printf("\nEnter size of the array: ");
    scanf("%d",&size);
    printf("\nSize of the array[%d]\n",size);
    int arr[size];
    int num,pos;
    /* Now Input Element according to Size*/
    printf("\nEnter elements in array : \n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Fetch all element(s): ");
    /*Print all inputed element*/
    for(int i=0; i<size; i++){
        printf(" %d ", arr[i]);
    }
}
int Insertion(){
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    printf("Size of the array[%d]",size);
    int arr[size];
    int num,pos;
    printf("\nEnter elements in array : \n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);
    if(pos > size+1 || pos<= 0){
        printf("Invalid position! Please enter position between 1 to %d", size+1);
    }else{
        for(int i = size; i>=pos; i--){
            arr[i] = arr[i-1];
        }
        arr[pos-1] = num;
        size++;
        printf("Array elements after insertion: ");
        for(int i=0; i<size; i++){
            printf("%d\t", arr[i]);
        }
    }
}
int Detetion(){
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int arr[size];
    int i, pos;
    /* Input size and element in array */
    printf("\nEnter elements in array: \n");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    /* Input element position to delete */
    printf("Enter the element position to delete : ");
    scanf("%d", &pos);
    /* Invalid delete position */
    if(pos < 0 || pos > size){
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else{
        /* Copy next element value to current element */
        for(i=pos-1; i<size-1; i++){
            arr[i] = arr[i + 1];
        }

        /* Decrement array size by 1 */
        size--;

        /* Print array after deletion */
        printf("\nElements of array after delete are: ");
        for(i=0; i<size; i++){
            printf("%d\t", arr[i]);
        }
    }
}
int Exit(){
    printf("\n\t\t\t\t|-------------------------------------------|");
    printf("\n\t\t\t\t|      You have exited from Operation.      |");
    printf("\n\t\t\t\t|   Khatam, Bye Bye, Tata, Good Bye, Gaya.  |");
    printf("\n\t\t\t\t|-------------------------------------------|");
    exit(0);
}


