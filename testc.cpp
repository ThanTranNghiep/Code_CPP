#include<iostream>
#include<cmath>
using namespace std;
void array(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
void out_array(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int ktngto(int n){
	if(n<=1)
		return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
void lkngto(int a[],int n){
	for(int i=0;i<n;i++){
		if(ktngto(a[i])==1)
			cout<<a[i]<<" ";
	}
}
int MaxInvalue(int a[],int n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(max < a[i])
			max=a[i];
	}
	return max;
}
int MinInvalue(int a[],int n){
	int min=a[0];
	for(int i=0;i<n;i++){
		if(min>a[i])
			min=a[i];
	}
	return min;
}
int main(){
	int a[100],n;
	cout<<"Nhap n: ";
	cin>>n;
	array(a,n);
	cout<<"\nMang vua nhap la: "<<endl;
	out_array(a,n);
	cout<<"\nThe primes in a 1 dimensional array are: ";
	lkngto(a,n);
	cout<<"\nMax: "<<MaxInvalue(a,n);	
	cout<<"\nMin: "<<MinInvalue(a,n);
return 0;
}
		
