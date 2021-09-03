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
int TimPhanTu(int a[], int n, int x)
{
	for(int i=0; i<n; i++)
		if(a[i] == x)
			return i; //T�m th?y x t?i v? tr� th? i
	return -1; //Kh�ng t�m th?y x trong m?ng
}
//=======================================================================
void XoaPhanTu(int a[], int &n, int x)
{
	int vt=TimPhanTu(a, n, x); //T�m v? tr� x trong m?ng
	if(vt==-1)
		cout<<"\nKhong tim thay phan tu "<<x<<" can xoa !"<<endl;
	else
	{
		for(int i=vt; i<=n-2; i++)
			a[i] = a[i+1]; //D?ch c�c ph?n t? sang tr�i 1 v? tr�
		n--; //Gi?m s? ph?n t? b?t 1
	}			
}
int main(){
		int a[100],n,x;
	cout<<"Nhap n: ";
	cin>>n;
	In(a,n);
	Out(a,n);
	cout<<"\nNhap phan tu can xoa:";
	cin>>x;
	cout<<"\nMang sau khi xoa phan tu "<<x<<" la:"<<endl;
	XoaPhanTu(a,n,x);
	Out(a,n);
	return 0;
}
