//Write a C program to print out the coordinates of a certain point.

#include <stdio.h>

typedef struct{ //Defining a new type of variables.
	int x; //The new variable is made of x.
	int y; //The new variable contains y too.
}point; //Naming the variable point.

int main(){

	point a,b; //Defining a and b as points.

	a.x = 2; //Giving the program the value of x for the point a.
	a.y = 3; //Giving the program the value of y for the point a.

	b.x = 4; //Giving the program the value of x for the point b.
	b.y = -2; //Giving the program the value of y for the point b.

	printf("The coordinates of a are: X= %d; y= %d\n", a.x, a.y); //Printing the coordinates of a.
	printf("The coordinates of b are: X= %d; y= %d\n", b.x, b.y); //Printing the coordinates of b.

return(0);
}
