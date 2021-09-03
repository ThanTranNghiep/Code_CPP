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
void lkNgto(int n){
	int s=0;
	for(int i=1;i<=n;i++){
		if(ktngto(i)==1){
			cout<<i<<"\t";
		}
		else
			s++;
	}
	if(s==n){
		cout<<"\nKhong co so ngto tu 1 den n";
	}
}
int main(){
	int n;
	cout << "nhap n: ";
	cin >> n;
	lkNgto(n);
return 0;
}
