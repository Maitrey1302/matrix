//Name- Maitrey Pangal
//email id-marshpangal@gmail.com
#include<stdio.h>
void main()
{
	int num[3][3];
	int i,j;
	printf("Inpute elements in the mayrix:\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("element-[%d][%d]:",i,j);
			scanf("%d",&num[i][j]);
		}
	}
		printf("\n\nmatrix is\n");
	for(i=0;i<3;i++)
	{
	    printf("\n");
		for(j=0;j<3;j++)
		
		{
			printf("%d\t",num[i][j]);
		}
	}
	printf("\n\n");
}
