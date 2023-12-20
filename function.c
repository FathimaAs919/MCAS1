#include<stdio.h>
int sum(int a, int b);
int main()
{
    int a=5,b=10;
      int d=sum(a,b );
    printf("sum=%d",d);

}
int sum(int x,int y)
{
	
	 int c;
    c=x+y;
    return c;
}