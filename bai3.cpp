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
	int dx = 0;
	for(int i = 0; i < n/2; i++){
		if(arr[i] ==arr[n-i-1]){
			printf("(%d, %d)",arr[i],arr[n-i-1]);
			dx = 1;
		}
	}
	if(!dx){
		printf("mang khong co phan tu doi xung.\n");
	}
	return 0;
}

