#include<iostream>
using namespace std;
//Commenting .  .
int main(){
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>a[i];
	}
	for(int j=0;j<n/2;j++){
	a[j]=a[j]+a[n-1-j];
	a[n-1-j]=a[j]-a[n-1-j];
	a[j]=a[j]-a[n-1-j];
	}
	for(int i=0;i<n;i++){
	cout<<a[i]<<"\t";
	}
	return 0;
}
