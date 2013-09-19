#include "stdio.h"
int main(int argc, char const *argv[]){
	int i,j,k,max,x,arr[] = {23,452,1,44,54,3,8,23,78,0};
	for(i=9;i>=0;i--){
		k=0;max=0;
		for(j=0;j<=i;j++){
			if((x=arr[j])>max){
				max = x;
				k = j; 
			}
		}
		x = arr[k];
		arr[k] = arr[i];
		arr[i] = x;
	}
	for(i=0;i<10;i++) printf("%d\n",arr[i] );
	return 0;
}