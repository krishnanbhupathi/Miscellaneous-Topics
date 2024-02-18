
#include <stdio.h>

int main() {
    
    int n, target; 
    printf("Enter the size: ");
    scanf("%d",&n); 
    
    int arr[n];
    // getting array elements
    printf("Enter %d elements: ",n);
    for(int i = 0 ; i < n ; i++) 
        scanf("%d",&arr[i]);
        
    printf("Enter the target element: ");
    scanf("%d",&target); // getting target element
    
    int count = 0; // to keep track of frequency of target
    // traversing over the array
    for(int i = 0 ; i < n ;i++)
        if(arr[i] == target)
            count++;
    
    printf("Frequency of %d is %d.",target,count);
    
    return 0;
}
