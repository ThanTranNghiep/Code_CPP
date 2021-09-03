#include<iostream>
#include<math.h>
using namespace std;
int ktngto(int n){
	if(n<=1)
		return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main(){
	int n;
	cout << "nhap n: ";
	cin >> n;
	if(ktngto(n)==1){
		cout <<n <<" la so ngto";}
	else {
		cout <<n <<" khong la so ngto";}
return 0;
}