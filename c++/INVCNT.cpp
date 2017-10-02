#include <iostream>
#include <cstdio>
using namespace std;

void merge(long long int *arr, long long int *a1, long long int *a2, int end1, int end2, long long int &inv){
	int i=0, j=0, k=0;
	while(i<end1 && j<end2){
		if(a1[i]<a2[j]){
			arr[k++]=a1[i++];
		}
		else{
			arr[k++]=a2[j++];
			inv+=(end1-i);
		}
	}
	while(i<end1)
		arr[k++]=a1[i++];
	while(j<end2)
		arr[k++]=a2[j++];
}

void ms(long long int *ar, int end, long long int &inv){
	if(end<=1)
		return;
	int mid=end/2, i=0;
	long long int arr1[mid], arr2[end-mid];
	for(i=0; i<end; i++){
		if(i<mid)
			arr1[i]=ar[i];
		else
			arr2[i-mid]=ar[i];
	}
	ms(arr1, mid, inv);
	ms(arr2, end-mid, inv);
	merge(ar, arr1, arr2, mid, end-mid, inv);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int i, n;
		scanf("\n%d", &n);
		long long int in=0, *a;
		a = new long long int[n];
		for(i=0; i<n; i++)
			cin>>a[i];
		
		ms(a, n, in);
		cout<<in<<endl;
		
		delete a;
	}
	scanf("\n");
	return 0;
}