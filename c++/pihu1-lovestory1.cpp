#include <iostream>
#include <algorithm>
using namespace std;

long long int binarySearch(long long int arr[], long long int startIndex, long long int endIndex, long long int element) {
	if (startIndex > endIndex) {
		return 0;
	}
	
	long long int mid = startIndex + ((endIndex - startIndex) / 2);
	
	if (arr[mid] == element) {
		return 1;
	}
	if (element > arr[mid]) {
		return binarySearch(arr, mid + 1, endIndex, element);
	} else {
		return binarySearch(arr, startIndex, mid - 1, element);
	}
}

int main() {
	long long int iterator;
	cin>>iterator;
	
	while (iterator!=0) {
		long long int size;
		cin>>size;
		
		long long int arr[size];
		for(long long int i=0; i < size; i++) {
			cin>>arr[i];
		}
		int check=0;
		long long int totalSum;
		cin >> totalSum;
		
		for(long long int i = 0;i<size-2;i++) {
			long long int smallSum=totalSum-arr[i];
			for(long long int j = i + 1; j < size - 1 ; j++) {
				if(binarySearch(arr, j + 1, size - 1, smallSum - arr[j])) {
					check++;
					break;
				}
			}
			if(check == 1) {
				break;
			}
		}
		
		if(check == 1) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
		iterator--;
	}
	
	return 0;
}
