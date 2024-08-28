#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, mat[3][3];
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
	
	  	printf("Elemento[%d][%d]=", i,j );
	 	scanf("%d",&mat[i][j]);	
}
printf("\n ----------Matriz----------\n");

	for(i=0;i<3;i++){
	for(j=0;j<3;j++)
	
	  	printf("%d ",mat[i][j]);
	  	printf("\n");	  	
}

	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	mat[i][j] = mat[i][j]*5;
	
	printf("\n ----------Matriz x5----------\n");
	
	for(i=0;i<3;i++){
	for(j=0;j<3;j++)
	
	  	printf("%d ",mat[i][j]);
	  	printf("\n");
}
return 0;
}