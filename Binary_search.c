#include <stdio.h>
#include <conio.h>

int main(){
	int n,key,x=0;
	printf("Enter the size of the array :\n");
	scanf("%d",&n);
	int arr[n];
	int i;
	printf("Enter the elements of the array in sorted order :\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the number you want to search :\n");
	scanf("%d",&key);
	int low=0,high=n-1,mid;
	
	while(low<=high){
		mid = (low+high)/2;
		if(arr[mid] < key)
			low = mid+1;
		else if(arr[mid] > key)
			high = mid-1;
		else{
			printf("Found");
			x=1;
			break;
		}			
	}
	
	if(x!=1)
	printf("Not Found");
	
	return 0;
}
