#include<stdio.h>

int main() 
{	
	int dim;
	printf("Welcome to magic square creator!!\n");
	printf("enter magic square diminsion: \n");
	scanf("%d", &dim);
	if(dim % 2 == 0)
	{
		printf("diminsion cannot be an even number!");
	}
	else if(dim==1)
	{
			printf("diminsion cannot be equal to one!");
	}
	else
	{
		int magicsquare[dim][dim];
		printf("You have chosen %d\n", dim);
		dim--;
		int	row = dim, column = dim / 2;
		int x, y = 0, num = 1;
		while(y <= dim)
		{
			x = 0;
			while(x <= dim){
				if(row == dim & column == 0)
				{
					magicsquare[row][column] = num;
					row++;
					column--;
				}
				else if(row == dim)
				{
					magicsquare[row][column] = num;
					row = 0;
					column--;	
				}
				else if(column == 0)
				{
					magicsquare[row][column] = num;
					column = dim;
					row++;
				}
				else
				{
					magicsquare[row][column] = num;
					row++;
					column--;
				}
				x++;
				num++;
			}
			row -= 2;
			column++;
			y++;
		}
		row = 0;
		column = 0;
		dim++;
		printf("\n");
		for(row = 0; row < dim; row++)
		{
			for(column = 0; column < dim; column++)
			{
				printf("%d \t", magicsquare[row][column]);
			}
			printf("\n");
		}
	}
	return 0;
}
