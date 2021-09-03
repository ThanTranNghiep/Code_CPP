#include<iostream>
#include<math.h>
// in ra so ngto lon nhat trong mang
using namespace std;
void In(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
void Out(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int ktrNgto(int x){
	if(x<=1)
	return 0;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0)
		return 0;	
	}
	return 1;
}
int Max(int a[],int n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(ktrNgto(a[i])==1){
			if(max<a[i]){
				max=a[i];
			}
		}
	}
	return max;
}
int main(){
	int a[100],n;
	cout<<"Nhap n: ";
	cin>>n;
	In(a,n);
	Out(a,n);
	cout<<"\nSo ngto lon nhat trong mang la:"<<Max(a,n);
return 0;
}
