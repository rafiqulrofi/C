#include<stdio.h>
#include<conio.h>

    void printline(void)
    
{
	int i;
	for (i=1;i<40;i++)
	
	printf("_");
	printf("\n");
	
}

    void printline(void);

    main()
{
	printline();
	printf("Thise illustrates the use of c function");
	printline();
	
	getch();
	return 0;
}

    void printline()

{
	int i;
	for(i=1;i<40;i++)
	printf("_");
	printf("\n");
}
