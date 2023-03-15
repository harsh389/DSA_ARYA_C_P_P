/*

n = 5				i	b	*.
				-----------------
....*				1   4 	1
...* *				2	3	2		b => (n-i)
..* * *				3	2	3		*. => i
.* * * *			4	1	4
* * * * *			5	0	5
				-----------------
*/

#include <stdio.h>

int main()
{
	int i,n,j;
	
	printf("Please enter the number of layers...");
	scanf("%d",&n);
	
	printf("\nPrinting the pattern...\n\n");
	
	for(i=1;i<=n;i++) {
		for(j=1;j<=(n-i);j++)
			printf(".");

		for(j=1;j<=i;j++)
			printf("* ");
		
		printf("\n");
	}
	
	printf("\nEnd of the program...");
}











