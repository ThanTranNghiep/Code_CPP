#include<iostream>
#include<math.h>
using namespace std;
bool check(int n){
	int s=0;
	for(int i=1;i<n;i++){
		if(n%i==0)
			s+=i;
	}
	if(s==n)
		return true;
	return false;
}
void lkhoanhao(int n){
	int s=0;
	for(int i=1;i<=n;i++){
		if(check(i)==true){
			cout<<i<<"\t";
		}
		else
			s++;
	}
	if(s==n){
		cout<<"\nKhong co so hoan hao tu 1 den n";
	}
}
int main(){
	int n;
	cout << "nhap n: ";
	cin >> n;
	lkhoanhao(n);
return 0;
}
