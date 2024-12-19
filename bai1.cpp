#include<stdio.h>

int main(){
	int n;
	printf("nhap so luong phan tu cua mang:");
	scanf("%d",&n);
	int arr[n];
	if (n <= 0) {
        printf("Khong co gia tri nao\n");
        return 0; 
    }
	for(int i = 0; i < n; i++){
		printf("arr[%d]",i + 1);
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	for(int i = 0; i < n; i++){
		if(arr[i] > max ){
			max = arr[i];
		}
	}
	printf("phan tu lon nhat trong mang la %d",max);
	return 0;
}

