#include<stdio.h>
#include<limits.h>

int find2Smallest(int arr[], int n) {
   int min_1 = INT_MAX;
   int min_2;
   for (int i = 0; i < n; i++) {
      if(min_1 > arr[i]) {
         min_2 = min_1;
         min_1 = arr[i];
      }
      else if(min_2 > arr[i] && arr[i] != min_1) {
         min_2 = arr[i];
      }
   }
   printf("First smallest element is %d\n", min_1);
   printf("Second smallest element is %d", min_2);
}

int main(void) {
   int arr[] = {10, 433, -5, 0, 89, 1};
   int n = sizeof(arr);
   find2Smallest(arr, n);
   return 0;
}
