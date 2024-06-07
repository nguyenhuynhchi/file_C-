#include<stdio.h>
typedef struct HOCPHAN
{
	char mshp[10], thp[50]; 		//mshp: ma so hoc phan    	thp: ten hoc phan
	int lth, thh;            	//lth: so tin chi ly thuyet	thh: so tin chi thuc hanh
	int hk, ttr;				//hk: hoc ki to chuc hp		ttr: tinh trang tai lieu giang day hp
}HP;

void nhap(HP *hp);
void xuat(HP *hp);
int main()
{
	HP a;
	
		printf("\nNhap thong tin hoc phan:");
		nhap(&a);
		printf("\n-----------------------------------------------------------------------");
		printf("\nThong tin hoc phan");
		xuat(&a);	
	
	return 0;
}

void nhap(HP *hp)
{
	printf("\n  Nhap ma hoc phan:");
	fflush(stdin);
	scanf("%s", &hp->mshp);
	
	printf("\n  Nhap ten hoc phan:");
	fflush(stdin);
	gets(hp->thp);
	
	printf("\n  So tin chi ly thuyet:");
	scanf("%d", &hp->lth);
	
	printf("\n  So tin chi thuc hanh:");
	scanf("%d", &hp->thh);
	
	do
	{
		printf("\n  Nhap tinh trang hoc phan(co-1, khong-0):");
		fflush(stdin);
		scanf("%d", &hp->ttr);
	}while((hp->ttr)>1||(hp->ttr)<0);
	
	do
	{
		printf("\n  Nhap hoc ki to chuc hoc phan(co 8 hoc ki): ");
		scanf("%d", &hp->hk);
	}while(hp->hk>8||hp->hk<=0);
}

void xuat(HP *hp)
{
	printf("\nMa so hoc phan: %s\t\t\tTen hoc phan: %s", hp->mshp, hp->thp);
	printf("\nSo tin chi ly thuyet: %d   \t\tSo tin chi thuc hanh: %d", hp->lth, hp->thh);
	if(hp->ttr==1)
	{
		printf("\nTinh trang tai lieu giang day: co\tHoc ki to chuc hoc phan: %d", hp->hk);
	}
	else
	{
		printf("\nTinh trang tai lieu giang day: khong\tHoc ki to chuc hoc phan: %d", hp->hk);
	}
}







