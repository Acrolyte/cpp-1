#include<bits/stdc++.h>
using namespace std; 
int main(){
	int arr[5]; 
	for(int i=0;i<5;i++){
		cin>>arr[i]; 
	}
	sort(arr,arr+5); 
	for(int i=1;i<5;i++){
		arr[i] = arr[i-1] + arr[i];  
	}
	cout<<arr[3]<<" "<<arr[4]-arr[0]<<endl;
	return 0; 
}