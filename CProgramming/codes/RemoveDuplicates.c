#include<stdio.h>

int main() {

    int arr[] = {1 , 2 , 3, 2 , 1 , 4, 1, 4, 5 , 4 };
    
    int frequency[1005];
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0 ; i < length ; i++) {
        printf("%d ",arr[i]);
    }

    for(int i = 0 ; i < 1005; i++) 
        frequency[i] = 0;

    for(int i = 0 ; i < length ; i++) 
        frequency[arr[i]]++;

    printf("\n");
    int resultSize = 0;
    for(int i = 0 ; i < 1005; i++)
        if (frequency[i] == 1)
            printf("%d ",i);

    return 0;
}
