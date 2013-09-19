#include <stdio.h>
void merge(int a[],int low,int mid,int high){
	int t[10];
	int i=low,j=mid+1,k=low;
	while((i<=mid)&&(j<=high)){
		if(a[i]>=a[j]) t[k++] = a[j++];
		else t[k++] = a[i++];
	}
	if(j>high) while(k<=high) t[k++] = a[i++];
	else while(k<=high) t[k++] = a[j++];
	for(i=low;i<=high;i++) a[i] = t[i];
}
void msort(int a[],int low,int high){
	if(low<high){
		int mid = (high+low)>>1;
		int i,j;
		msort(a,low,mid);
		msort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
int main(int argc, char const *argv[]){
	int i,j,k,max,x,arr[] = {23,452,1,44,54,3,8,23,78,0};
	msort(arr,0,9);	
	for(i=0;i<10;i++) printf("%d\n",arr[i] );
	return 0;
}

