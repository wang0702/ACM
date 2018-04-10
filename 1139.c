#include<stdio.h> 
#include<math.h>
#include<string.h>
#define max(a,b) (a>b)? a : b
long long b[100];
int main()
{
    int i;
    b[1]=1;
    b[2]=1;
    for(i=3;i<99;i++)
    b[i]=b[i-1]+b[i-2];
    long long a;
    while(scanf("%lld",&a)!=EOF)
    {
        if(a==1||a==2||a==3)
        printf("%d %d\n",1,1);
        else{

        long long sum=0;
        int pos=0,k=1;
        while(a>=sum)
        {
            sum=sum+b[k++];
            pos++;
        }
        pos--;
        sum=sum-b[--k];
        sum=a-sum;
        if(b[pos]>=sum)
        printf("%d %lld\n",pos,b[pos]);
        else
        printf("%d %lld\n",pos+1,sum);
    }
    }
    return 0;
 } 