#include<stdio.h>
main()

{
	int i,n;
	
	printf("Enter first Number=");
	scanf("%d",&i);
	
	printf("Enter last Number=");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%4==0)
		{
			printf("%d\t",i);
		}
		i++;
	}
}