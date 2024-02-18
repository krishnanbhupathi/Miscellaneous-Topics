#include <stdio.h>

int main() {

    int n;
    printf("Enter the size: ");
    scanf("%d",&n);

    int arr[n];
    // getting array elements
    printf("Enter %d elements: ",n);
    for(int i = 0 ; i < n ; i++)
        scanf("%d",&arr[i]);

    // outer loop for each element
    for(int sp = 0 ; sp < n ; sp++) {

        // inner loop to get the subarray size
        for(int gs = sp; gs < n ; gs++) {

            // inner most loop to print actual elements
            for(int k = sp; k <= gs ; k++){
                printf("%d ",arr[k]);
            }
            printf("\n");
        }

    }

    return 0;
}
