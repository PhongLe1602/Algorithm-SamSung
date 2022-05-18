#include <stdio.h>
//#include <conio.h>
 
int f[1000005],a[1000005],KQ;
 
 
int max(int x,int y)
{
    if(x>y)
    return x;
    return y;
}
 
void thietlap(int x,int y,int d)
{
    if(x==y)
        f[d]=a[x];
    else 
    {
      thietlap(x,(x+y)/2,2*d);
      thietlap((x+y)/2+1,y,2*d+1);
      f[d]=max(f[2*d],f[2*d+1]);
    }
}
 
void tinh(int dau,int cuoi,int x,int y,int d)
{
    if(dau>y||cuoi<x);
    else if(dau<=x&&cuoi>=y)
        KQ=max(KQ,f[d]);
    else
    {
        tinh(dau,cuoi,x,(x+y)/2,2*d);
        tinh(dau,cuoi,(x+y)/2+1,y,2*d+1);
    }
}
 
main()
{
    int n,m,p,k,x,y,u,kz=0;
    scanf("%d %d",&n,&m);
    a[0]=0;
    for(int i=1;i<=m;i++)
    {     
       scanf("%d",&k);
       if(k==1){
       		scanf("%d %d %d",&x,&y,&u);
       		a[x]=a[x]+u;
       	    a[y+1]=a[y+1]-u;
	   }else{
	   	   for(int i=2;i<=n;i++)
        	  a[i]=a[i-1]+a[i];
    	   thietlap(1,n,1);
    	   scanf("%d %d",&x,&y);
		   KQ=0;
		   tinh(x,y,1,n,1);
		   printf("%d\n",KQ);
	   }
    }
}