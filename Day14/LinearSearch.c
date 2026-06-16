#include <stdio.h>
int linearSearch(int arr[], int n, int key) {
   for (int i = 0; i < n; i++) {
       if (arr[i] == key) {
           return i; 
       }
   }
   return -1; 
}
int main() {
     int n,i ;
     printf("Enter size of array:");
     scanf("%d",&n);
      int arr[n];
      printf("enter the elements:");
     for(i=1;i<=n;i++){
       scanf("%d",&arr[i]);
     }
   int key;
   printf("Enter the value of key  element:");
   scanf("%d",&key);
   int result = linearSearch(arr, n, key);
   if (result == -1)
       printf("Key Not Found\n");
   else
       printf("Key Found at Index: %d\n", result);
   return 0;
}