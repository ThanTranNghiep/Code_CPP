#include<stdio.h>
#include<stdlib.h>

/*int demUS(int n)
	{
	int i,d;
	for(i=1,d=0;i<=n;i++)
	{
	if(n%i==0)
		d++;
	}
	return d;
	} */
int TongUocSo(int n)
	{
	int i,s;
	for(i=1,s=0;i<=n;i++){
		if(n%i==0)
			s=s+i;
	}
	return s;
	}
//ham liet ke so hoan thien
int LietKeSoHoanThien(int &n)
		{
		int i,s;
		for(i=1,s=0;i<=n;i++)
				if(TongUocSo(n)==n)
					printf("%d",i);
			s++;
		return s;
		}	


void XuatMenu(int & chon){
	printf("1:Giai phuong trinh bac 1\n");
	printf("2:kiem tra so hoan thien\n");
	printf("3:Liet ke so hoan thien trong pham vi tu 1 den n\n");
	printf("4:Tim uoc chung lon nhat cua 2 so nguyen\n");
	printf("0:Thoat\n");
}

void ThucHienChucNang(int chon,int n){
	switch(chon){
		case 1:
			system("cls");
			printf("Giai phuong trinh bac 1\n");
			system("pause");
			float a,b;
			printf("nhap a,b: ");
			scanf("%f%f",&a,&b);
		if(a==0)
		{
			if(b==0)
				printf("phuong trinh vo so nghiem");
			else
				printf("phuong trinh vo nghiem");
		}
		else
			printf("nghiem la:%f",-b/a);
		break;
		case 2:
			int n;
			system("cls");
			printf("kiem tra so hoan thien\n");
			printf("nhap n: ");
			scanf("%d",&n);
			if(TongUocSo(n)==n)	
				printf("%d la so hoan thien\n",n);
			else
				printf("%d khong la so hoan thien\n",n);
			system("pause");
		break;
		case 3:
			system("cls");
			printf("Liet ke so hoan thien trong pham vi tu 1 den n\n");
			printf("nhap n: ");
			scanf("%d",&n);
			int kq=LietKeSoHoanThien(n);
			printf("So hoan thien tu 1 den %d la: %d\n",n,kq);
			system("pause");
		break;
	}
}
int main(){
	int chon,n;
	XuatMenu( chon);
	do{ 
		printf("Hay chon cong viec: ");
		scanf("%d",&chon);
	}while(!(chon>=0 && chon<=4));
	ThucHienChucNang(chon,n);
}
