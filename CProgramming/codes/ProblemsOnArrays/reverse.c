
#include <stdio.h>

int main() {
    
    int n; 
    scanf("%d",&n); 
    
    int arr[n];
    // getting array elements
    for(int i = 0 ; i < n ; i++) 
        scanf("%d",&arr[i]);
    
    int start = 0, end = n-1;
    
    while(start < end) {
        // swap arr[start] arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
    for(int i = 0 ; i < n ; i++)
        printf("%d ",arr[i]);
    
    return 0;
}
