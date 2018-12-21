#include<stdio.h>

int main()
{
	char n;
	
	scanf("%c",&n);
//	if(n> 'a'&& 'z'<n || n>'A' && 'Z'<n)
	if(n>65 && 122<n)
	{
		printf("C");
	}
	
	else
	{
		printf("Not char");
	}

	return 0;
}
