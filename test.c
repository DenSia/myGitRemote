#include <stdio.h>
#define cube(x) ((x) * 5.9)

int main()
{
	int num = cube(5);
	printf("%s\n", __FILE__); //Ô¤¶¨ÒåµÄºê 
	printf("%f\n",num);
	return 0;
}

