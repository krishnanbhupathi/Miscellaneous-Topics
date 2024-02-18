
#include <stdio.h>

int main() {
    
    int n; 
    scanf("%d",&n); 
    
    int arr[n];
    // getting array elements
    for(int i = 0 ; i < n ; i++) 
        scanf("%d",&arr[i]);
 
    // just printing reverse of given array
    for(int i = n -1 ; i >= 0 ; i--)
        printf("%d ",arr[i]);
    
    // declaring an array to store result
    int reverse[n]; 
    int j = 0; 
    
    for(int i = n-1; i >= 0; i--) {
        reverse[j] = arr[i];  
        j++; 
    }
    
    printf("Printing reverse array: ");
    for(int i = 0 ; i < n ; i++) {
        printf("%d ",reverse[i]);
    }
    
    return 0;
}
