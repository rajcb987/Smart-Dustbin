#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float old_weight=1000,old_points=100,x=1000;
	float new_points,new_weight;

	printf("\Enter weight");
	scanf("%f",&new_weight);
	clrscr();

	   if(old_weight==x)
	   {
		new_points=((old_points/old_weight)*new_weight);


	   }
	   printf("\nPoints:%f",new_points);

	   getch();
}
