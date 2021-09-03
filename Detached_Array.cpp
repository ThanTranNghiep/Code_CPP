#include<iostream>
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
// separates elements <0 into a new array
void Detached_array(int a[],int n,int b[],int &m){
	m=0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			b[m++]=a[i];
		}
	}
}/*
void Merge_array(int a[],int &n,int b[],int m){
	n+=m;
	for(int i=(n-m);i<n;i++){
		a[i]=b[i-(n-m)];
	}
}*/
void Merge_array(int a[],int &n,int b[],int m){
	for (int i = 0; i < m; i++)
	{
		a[n++] = b[i];
	}
}
int main(){
	int a[100],b[100],n,m;
	cout<<"Nhap n: ";
	cin>>n;
	In(a,n);
	Out(a,n);
	cout<<"\nMang gom cac phan tu <0 la: "<<endl;
	Detached_array(a,n,b,m);
	Out(b,m);
	cout<<"\nGop hai mang lai:"<<endl;
	Merge_array(a,n,b,m);
	Out(a,n);
return 0;
}
