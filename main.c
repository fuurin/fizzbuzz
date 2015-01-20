#include<stdio.h>

int main()
{
	int i, input;
	scanf("%d",&input);
	
	for (i = 1; i <= input; ++i)
	{
		if(i%3==0 && i%5==0)printf("fizzbuzz\n");
		else if(i%3==0)printf("fizz\n");
		else if(i%5==0)printf("buzz\n");
		else printf("%d\n",i);
	}

	while(1){}
}