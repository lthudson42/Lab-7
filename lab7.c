/*
Liam Hudson
COP3502
March 7th, 2024
*/
#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int n){
    //declare variables
    int count[n];
    int minIdx, temp, i, j;
    int totalCount = 0;
    //fill count array with 0's
    for(i = 0; i < n; i++)
        count[i] = 0;
    for(i = 0; i < n-1; i++){
        minIdx = i;
        for(j = i+1; j < n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
                totalCount++;
                count[minIdx]++;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
    for(i = 0; i < n; i++)
        printf("%d: # of times %d is swapped\n", count[i], arr[i]);
    printf("Total # of swaps: %d\n", totalCount);
    
}

void bubbleSort(int arr[], int n){
    //declare variables
    int i, j, temp, count[n];
    int totalCount = 0;
    //fill the count array with 0's
    for(i = 0; i < n; i++)
        count[i] = 0;
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                totalCount++;
                count[j]++;
            }
        }
    }
    for(i = 0; i < n; i++)
        printf("%d: # of times %d is swapped\n", count[i], arr[i]);
    printf("Total # of swaps: %d\n", totalCount);
}

int main(){
    int array1[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[9] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    printf("array1 (bubble sort):\n");
    bubbleSort(array1, 9);
    printf("array2 (bubble sort):\n");
    bubbleSort(array2, 9);
    int array3[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array4[9] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    printf("array1 (selection sort):\n");
    selectionSort(array3, 9);
    printf("array2 (selection sort):\n");
    selectionSort(array4, 9);
    return 0;
}