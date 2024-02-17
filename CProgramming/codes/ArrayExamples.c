#include <stdio.h>

int main() {
    // one type of initialization
    int marks[5] = {99, 98 , 78, 99,11}; 
    
    // size can be ommited if we initialize like above initializtion
    
    int my_array[] = {1,2,3,4,5,6,7,8,8};
    
    // if you know the size but don't the actual elements
    int numbers[5];
    
    printf("Enter five integer elements: ");
    for(int i = 0 ; i < 5; i++) {
        int element;
        scanf("%d",&element); // getting the actual data
        numbers[i] = element; // assigning it to array
    }
    
    // user has to give the size and actual data
    int size;
    printf("Enter the size: ");
    scanf("%d",&size); // getting size from user
    
    // data_type variable_name[size];
    int array_name[size];
    
    printf("Enter %d elements: ",size);
    for(int i = 0 ; i < size; i++) {
        // &array_name[0] --> gives you first array address
        // &array_name[1] --> gives you second array address
        scanf("%d",&array_name[i]); 
    }
    
    // Printing the array element
    printf("Array elements are: ");
    for(int i = 0 ; i < size; i++) {
        printf("%d ",array_name[i]); // printing each element
    }
    
    int arr[5]; // it gives you memory for 5 continues locations
    
    // generally from a[0] to a[4] possible
    
    arr[9] = 119; // this won't give you any erros in c 
    // in any other languages we will get array out of bound erros
    return 0;
}
