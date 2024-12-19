#include<stdio.h>

int main(){
	int n;
	printf("nhap so luong phan tu cua mang:");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i < n; i++){
		printf("arr[%d]",i + 1);
		scanf("%d",&arr[i]);
	}
	int min = arr[0];
	for(int i = 0; i < n; i++){
		if(arr[i] < min){
			min =arr[i];
		}
	}
	printf("phan tuu nho nhat trong man la %d",min);
	return 0;
}

