#include <stdio.h>

int binary_search_recursive(int arr[], int low, int high, int x) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
      return mid;

    if (arr[mid] > x)
      return binary_search_recursive(arr, low, mid - 1, x);

    return binary_search_recursive(arr, mid + 1, high, x);
  }

  return -1;
}

int main(void) {
  int arr[] = {2, 3, 4, 10, 40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 40;
  int result = binary_search_recursive(arr, 0, n - 1, x);
  (result == -1) ? printf("Phan tu khong ton tai trong mang")
                 : printf("Phan tu duoc tim thay tai chi so %d", result);
  return 0;
}
