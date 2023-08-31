#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
	system("color 74");
	float operator, areaCirc, perimeter;
	double ray;
	
	printf("\n---------- CIRCUMFERENCE CALCULATOR ----------");
	
	printf("\n\n\nInform the operation (1 for area and 2 for perimeter): ");
	scanf("%f", &operator);
	
	printf("\nEnter the radius of the circle: ");
	scanf("%lf", &ray);
	
	if(operator == 1)
	{
		areaCirc = M_PI * ray * ray;
		printf("\nThe circumference area is: %2f", areaCirc);
    }
    else if (operator == 2)
    {
    	perimeter = 2 * M_PI * ray;
    	printf("\nThe perimeter of the circle is: %2f", perimeter);
	}
	else
	{
		printf("\nEnter a valid operation, 1 for area and 2 for perimeter");
	}
}