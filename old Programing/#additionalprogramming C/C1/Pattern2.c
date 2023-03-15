/*

n = 5			i		*
			-----------------
*****			1     	5
****			2		4		
***				3		3		* => (n-i+1)
**				4		2
*				5		1
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
		for(j=1;j<=(n-i+1);j++)
			printf("*");
		
		printf("\n");
	}
	
	printf("\nEnd of the program...");
}











