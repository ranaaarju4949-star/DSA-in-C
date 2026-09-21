#include<stdio.h>
void input(int arr[],int n);
void bubble_sort(int arr[],int n);
void output(int arr[],int n);

int main(){
	int arr[10],n;
	printf("enter the no of elements of array:");
	scanf("%d",&n);
	input(arr,n);
	bubble_sort(arr,n);
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

void bubble_sort(int arr[],int n){
	int i,j,temp;
	for (i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

