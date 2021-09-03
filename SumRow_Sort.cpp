#include<iostream>
#include<math.h>
using namespace std;
void In(int a[][100],int &row,int &colum){
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    }
}
void Out(int a[][100],int row,int colum){
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            cout<<a[i][j]<<"\t ";
        }
        cout<<"\n";
    }
}

int sumrow(int a[][100],int row,int colum){
    int sumj=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            if(a[i][j]%2==0)
                sumj+=a[i][j];
        }
    }
    return sumj;
}
void tangdan(int a[][100],int k,int colum){
    for(int i=0;i<colum;i++){
        for(int j=0;j<i;j++){
            if(a[k][i]<a[k][j]){
                int temp = a[k][i];
                a[k][i]=a[k][j];
                a[k][j]=temp;
            }
        }
    } 
}
int tong(int a[][100],int k,int colum){
    int s=0;    
    for(int j=0;j<colum;j++)
        s+=a[k][j];
    return s;
}
int main(){
    int a[100][100],row,colum,n,k;
    cout<<"Insert row: ";
    cin>>row;
    cout<<"\nInsert colum: ";
    cin>>colum;
    In(a,row,colum);
    Out(a,row,colum);
    cout<<"\nTong cua cac phan tu chan la: "<<sumrow(a,row,colum) <<endl;
    cout<<"\nSap xep ma tran tang dan tren dong: ";
    cin>>k;
//    cout<<"\nMa tran dc xep theo chieu tang dan: "<<endl;
    tangdan(a,k,colum);
    for(int i=0; i<colum; i++)
        cout << a[k][i] << "\t";
    int t=tong(a,k,colum);
    cout<<"\nTong cac phan tu tren dong "<< k <<" la: "<< t <<endl;
    system("pause");
    return 0;
}