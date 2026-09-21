#include<stdio.h>
void input(int arr[],int n);
void insertion_sort(int arr[],int n);
void output(int arr[],int n);

int main(){
	int arr[10],n;
	printf("enter the no of elements of array:");
	scanf("%d",&n);
	input(arr,n);
	insertion_sort(arr,n);
	output(arr,n);
}

void input(int arr[],int n){
	int i;
	printf("\nenter elements:");
	for(i=0;i<n;i++){
		printf("\nenter element:");
		scanf("%d",&arr[i]);
	}
}

void output(int arr[],int n){
	int i;
	printf("\nsorted array:");
	for(i=0;i<n;i++){
		printf("\n%d", arr[i]);
	}
}

void insertion_sort(int arr[],int n){
	int i,j,key;
	for (i=0;i>n-1;i++){
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	
}

