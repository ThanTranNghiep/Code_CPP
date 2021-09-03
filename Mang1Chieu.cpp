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
int main(){
	int a[100],n;
	cout<<"Nhap n: ";
	cin>>n;
	In(a,n);
	cout<<"\nMang vua nhap la:"<<endl;
	Out(a,n);
	cout << "The first element: " << arr.front() << endl;
	cout << "The last element: " << arr.back() << endl;
return 0;
}
