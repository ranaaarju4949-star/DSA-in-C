#include<stdio.h>
void input(int arr[],int n);
void selection_sort(int arr[],int n);
void output(int arr[],int n);

int main(){
	int arr[10],n;
	printf("enter the no of elements of array:");
	scanf("%d",&n);
	input(arr,n);
	selection_sort(arr,n);
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

void selection_sort(int arr[],int n){
	int i,j,temp,min;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
		   if (arr[min]>arr[j])
			{ min=j;
			}
		}
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		
	}
}
