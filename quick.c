#include "stdio.h"
void quicksort(int arr[],int low,int high){
    if( low < high ){
    	int pivot,j,temp,i;
        pivot = low;
        i = low;
        j = high;
		while(i < j){
            while( arr[i] <= arr[pivot] && i < high) i++;
            while( arr[j] > arr[pivot] ) j--;
            if( i < j ){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
		temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        quicksort(arr,low,j-1);
        quicksort(arr,j+1,high);
	}
}
int main(int argc, char const *argv[]){
	int i,j,k,max,x,arr[] = {23,452,1,44,54,3,8,23,78,0};
	quicksort(arr,0,9);
	for(i=0;i<10;i++) printf("%d\n",arr[i]);
	return 0;
}