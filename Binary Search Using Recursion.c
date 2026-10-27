#include <stdio.h>

int binary(int arr[], int low, int high, int key) {
    if(low>high)
        return -1;

    int mid = (low+high)/2;

    if(arr[mid]==key)
        return mid;
    else if(arr[mid] > key)
        return binary(arr, low, mid-1, key);
    else
        return binary(arr, mid+1, high, key);
}

int main() {
    int arr[5]={1,2,3,4,5};
    int pos = binary(arr,0,4,3);

    printf("Position = %d", pos+1);

    return 0;
}