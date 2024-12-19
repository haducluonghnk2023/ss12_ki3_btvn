#include <stdio.h>

int main() {
  int n, i, j, count;

  printf("Nhap so luong phan tu cua mang: ");
  scanf("%d", &n);

  int arr[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int found_duplicate = 0; 
  for (i = 0; i < n; i++) {
    count = 1; 
    for (j = 0; j < i; j++) {
      if (arr[i] == arr[j]) {
        break; 
      }
    }

    if (i == j) {
   
      for (j = i + 1; j < n; j++) {
        if (arr[i] == arr[j]) {
          count++;
        }
      }

      if (count > 1) {
        printf("Phan tu %d xuat hien %d lan\n", arr[i], count);
        found_duplicate = 1;
      }
    }
  }

  if (!found_duplicate) {
    printf("Khong co phan tu lap lai.\n");
  }

  return 0;
}
