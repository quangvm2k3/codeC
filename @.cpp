#include<conio.h>
#include <windows.h>
#include<iostream.h>

float a[10][10];

int n;

void nhap();

void xuat();

void doicot(int,int);

void truhang(int,int);

float dinhthuc();

void main()

{clrscr();

cout<<"Nhap kich thuoc ma tran vuong a: so hang = so cot <10, n="; cin>>n;

cout<<"Nhap ma tran a :\n";

nhap();

cout<<"\nMa tran A :\n";

xuat();

cout<<"\n\nDinh thuc ma tran A :"<<dinhthuc();

}

void nhap()

{int i,j,t;

for (i=0;i<n;i++)

{cout<<"Nhap cac phan tu hang thu "<<i+1<<":\n";

for (j=0;j<n;j++)

{cout<<"A["<<i+1<<","<<j+1<<"]="; cin>>t; a[i][j]=t;

}

}

}

void xuat()

{int i,j;

for (i=0;i<n;i++)

{cout<<endl;

for (j=0;j<n;j++)

{cout<<" "; cout<<a[i][j];

}

}

}

void doicot(int k,int t)

{int i;float p;

for(i=0;i<n;i++)

{p=a[i][k];

a[i][k]=a[i][t];

a[i][t]=p;

}

}

void truhang(int h,int r)

{int i;float x;

x=-a[h][h]/a[r][h];

for(i=h;i<n;i++) a[r][i]=a[h][i]+x*a[r][i];

}

float dinhthuc()

{ int i,j; float d=1;

  for (i=0;i<n-1;i++)

         { if(a[i][i]==0)

              { for(j=i+1;(j<n)&&(a[i][j]==0);j++);

                 if(j<n)

                        { doicot(i,j); d=-d;

                         }

                 else d=0;

               }

            if(d==0)break;

            for(j=i+1;j<n;j++)

                if(a[j][i])truhang(i,j);

            }

 if(d) for(i=0;i<n;i++)d=d*a[i][i];

 return d;

}
