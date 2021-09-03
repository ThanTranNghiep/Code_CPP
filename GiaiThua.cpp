// De quy
#include<iostream>
using namespace std;
int funsion(int n){
    if(n==0){
        return 1;
    }
    return n*funsion(n-1);
}
int main(){
    int n;
    cout<<" Nhap n: ";
    cin>>n;
    cout<<n<<"! = "<<funsion(n);
    return 0;
}