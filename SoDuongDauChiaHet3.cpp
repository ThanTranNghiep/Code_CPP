#include<iostream>
using namespace std;
// de: in ra so duong dau tien chia het cho 3
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
// liet ke so duong dau chia het cho 3
void lk(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]>0&&a[i]%3==0){
			cout<<a[i];break;
		}
	}
}
// liet ke so duong dau khong chia het cho 3
void lkchia3(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]>0&&a[i]%3!=0){
			cout<<a[i];break;
		}
	}
}
int main(){
	int a[100],n;
	cout<<"Nhap n: ";
	cin>>n;
	In(a,n);
	cout<<"\nMang vua nhap la:"<<endl;
	Out(a,n);
	cout<<"\nSo duong dau tien chia het 3: ";
	lk(a,n);
	cout<<"\nSo duong dau tien khong chia het 3: ";
	lkchia3(a,n);
return 0;
}
