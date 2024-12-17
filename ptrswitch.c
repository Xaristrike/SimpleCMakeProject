#include <stdio.h>
#include <string.h>

#define ARR_SIZE 10

int main(void)
{
	/* Create the array */
	int arr[ARR_SIZE];
	
	/* Set all of it's contents to 'A' */
	memset(arr, 65, sizeof(arr));
	
	/* Print it's contents */
	for (long unsigned int it = 0; it < sizeof(arr) / sizeof(int); it++)
	{
		printf("%c", arr[it]);
	}
}