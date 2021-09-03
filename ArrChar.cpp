#include<iostream>
using namespace std;
const int Max=100;
void ArrIn(char foo[],int n){
    for(int i=0;i<n;i++){
        cout<<"foo["<<i<<"]=";
        cin>>foo[i];
    }
}
void ArrOut(char foo[],int n){
    for(int i=0;i<n;i++){
        cout<<foo[i]<<" ";
    }
}
int main(){
    char foo[20];
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    ArrIn(foo,n);
    cout<<"\nMang ki tu vua nhap la:"<<endl;
    ArrOut(foo,n);
    return 0;
}