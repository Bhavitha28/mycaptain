#include <stdio.h>

void main()
{
  int arr1[3][3],i,j,sum;
   int *parry1=arr1
  
       printf("\n\nRead a 2D array of size 3x3 and print the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
    {
	      scanf("%d",&arr1[i][j]);
      }
  }  
 
 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",**parr1[i][j]);
  }
For(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
Sum=sum+arr1[i][i];
 printf("\n%d\n",sum);
}
