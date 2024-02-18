
#include <stdio.h>

int main() {
    
    int n; 
    printf("Enter the size: ");
    scanf("%d",&n); 
    
    int arr[n];
    // getting array permutation
    printf("Enter %d elements: ",n);
    for(int i = 0 ; i < n ; i++) 
        scanf("%d",&arr[i]);
        
    int result[n];
    for(int i = 0 ; i < n; i++) {
        result[i] = arr[arr[i]];
    }
    printf("Resultant array: ");
    for(int i = 0 ; i < n; i++)
        printf("%d ",result[i]);

    return 0;
}
