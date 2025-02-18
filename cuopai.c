#include<stdio.h>
long long cuopai(int n)
{
	if(n==1)
	{
		return 0;
	}
	if(n==2)
	{
		return 1;
	}
	return (n-1)*(cuopai(n-1)+cuopai(n-2));
}
int main()
{
	int n;
	printf("请输入数字n: ");
	scanf("%d",&n);
	printf("%d的错排数为：%lld\n",n,cuopai(n));
	return 0;
}
