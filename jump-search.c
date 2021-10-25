//Jump-search algorithm to search in O(root(n)) time
//complexity to be implemented only in sorted array

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define size 100

int main() {
    int n, block, val, key=-1;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    if(n>size || n<0) {
        printf("\nInvalid input\n");
        exit(0);
    }
    printf("\nEnter the array: ");
    int i, j, arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the value to be searched: ");
    scanf("%d", &val);
    block = sqrt(n);
    i = 0;
    while(i<n && val>=arr[i]) {
        i += block;
    }
    if((i-block)<0) {
        j = 0;
    }
    else {
        j = i - block;
    }
    for (j; j < i; j++) {
        if(arr[j]==val) {
            key = j;
        }
    }
    if(key!=-1) {
        printf("\nThe index of %d is %d.", val, key);
    }
    else {
        printf("\nElement not found\n");
    }
}