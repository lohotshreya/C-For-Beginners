#include <stdio.h>

int main() {
    int arr[5], i, count = 0;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > 0) {
            count++;
        }
    }

    printf("Count of positive numbers: %d\n", count);
    return 0;
}
