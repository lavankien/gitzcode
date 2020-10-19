#include<iostream>
 
using namespace std;
 
typedef struct Fac
{
    int n;
    char x[10000005];
    char *p,*q;
    Fac()
    {
        p=x+10000000;
        *p=1;
        q=p;
        n=0;
    }
    void Nhan(int k);
    long GT(int k,int x);
}Fac;
long Fac::GT(int k,int x)
{
    for(int i=2;i<=k;i++) Nhan(i);
    long S=0;
    for(char *r=p;r<=q;r++)
    if(*r==x) S++;
    if(x==0) S+=n;
    return S;
}
 
void Fac::Nhan(int k)
{
    while(k%10==0)
    {
        n++;
        k=k/10;
    }
    int nho=0;
    for(char *r=q;r>=p;*r--)
    {
        nho=nho+(*r)*k;
        *r=nho%10;
        nho=nho/10;
    }
    while(nho>0)
    {
        p--;
        *p=nho%10;
        nho=nho/10;
    }
    while(*q==0)
    {
        q--;
        n++;
    }
}
 
 
int main()
{
    int T,n,x;
    cin>>T;
    long *kq=new long [T+5];
    for(int i=1;i<=T;i++)
    {
        Fac *F=new Fac();
        cin>>n>>x;
        kq[i]=F->GT(n,x);
    }
    for(int i=1;i<=T;i++)
    cout<<kq[i]<<"\n";
  //  getch();
}
 
