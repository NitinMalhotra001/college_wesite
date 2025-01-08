#include<stdio.h>
int palendrom(int n)
{
  int rem,rev=0; 
 int  temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    {
    return 0;
    }
    else{
        return 1;
    }
} 
int main()
    {
int x,a;
scanf("%d",&a);
x=palendrom(a);
if (x==0){
    printf("num is palendrom");
}
else{
    printf("num is not palendrom");
}
return 0;
     }


