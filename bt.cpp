/*B�i tap co ban
voi yeu cau day ra ban dau,giang vien can biet diem so cao nhat cua 30 sinh vien trong lop,dong thoi muon bietdiem cao nhat la 
cua sinh vien so thu tu bao nhiu.Ban hay su dung mang 1 chieu de giai quyet van de nay(Diem cua sv dc nhap tu ban phim)*/ 
#include<iostream>
using namespace std;
int main()
{
    int mang_diem[30];
    int diem_max = mang_diem[100];    
    
    
    for (int i = 1; i <= 30; i++)
    {
        
        cout << "Nhap vao gia tri diem SV thu " << i << ": " ;
        cin >> mang_diem[i];
        
        if (diem_max < mang_diem[i])
        {
            diem_max = mang_diem[i];
        }
        else 
            {
            diem_max = diem_max;
          
            }
    }
    cout << "Diem cao nhat cua 30 sinh vien la : " << diem_max << " cua SV thu " ;
    return 0;
}
