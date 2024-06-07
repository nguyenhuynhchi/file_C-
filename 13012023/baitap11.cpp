#include <stdio.h>
void nhapM2C(float A[][10], int m, int n);
int max(float A[][10], int m, int n);
int demMax(float A[][10], int m, int n);
int main()
{
	float mang2[10][10];
	int sd, sc, kq;
	
	//	nhap so dong, so cot (m=dong, n=cot)
	printf("Nhap so dong cua mang: "); scanf("%d", &sd);
	printf("Nhap so cot  cua mang: "); scanf("%d", &sc);
	nhapM2C(mang2, sd, sc);
	
	kq=max(mang2, sd, sc);
	printf("\nGia tri lon nhat trong mang la: %d", kq);
	
	printf("\nCo %d gia tri lon nhat trong mang", demMax(mang2, sd, sc));
	
	
	return 0;
}

void nhapM2C(float A[][10], int m, int n)
{

	
//	i= vi tri dong, j vi tri cot
	int i, j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("\nNhap gia tri tai vi tri A[%d][%d]: ", i, j);
			scanf("%f", &A[i][j]);
		}
	}
}

int max(float A[][10], int m, int n)
{
	int i, j, max;
	max=A[0][0];
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(A[i][j]>max)
			{
				max=A[i][j];
			}
		}
	}
	return max;
}

int demMax(float A[][10], int m, int n)
{
	int i, j, dem=0;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(A[i][j]==max(A, m, n))
			{
				dem++;
			}
		}
	}
	return dem;
}







