#include <stdio.h>
#include <time.h>

void swap(int a, int b) {
  int temp = a;
  a = b; 
  b = temp;
}

int partition (int arr[], int low, int high) {
  int pivot = arr[high]; 
  int i = (low - 1);

  for (int j = low; j <= high- 1; j++) {
    if (arr[j] <= pivot) {
      i++; 
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}
int main() {
   int n;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int a[n];
    /*for (int i=0;i<n;i++) {  
        a[i]=rand()%(10000 + 1);  
    } */
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
  clock_t start = clock();
  quickSort(arr, 0, n-1);
  clock_t end = clock();
  for(int i=0; i<n; i++) {
    printf("%d ", arr[i]);
  }
  double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
  printf("\nTime taken by quick sort is %f seconds", time_taken);
  return 0;
}
