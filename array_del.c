#include <stdio.h>
int MAX = 10;

void inputArray(int *a);
void outputArray(int *a);
void deleteArray(int *a, int del);

void main(void)
{
int a[MAX], del;
inputArray(a);

del = delete();
printf("The current list is:\n");
outputArray(a);
printf("You wanted to remove the value in index number %d\n", del);
printf("Deleting chosen index value....\n");
deleteArray(a,del);
MAX = MAX--;
printf("The new list is:\n");
outputArray(a);
}

	int delete()
	{
	int i;
	printf("Which index do you want to delete?\n");
	scanf("%d", &i);
	return i;
	}

	void inputArray(int *a)
	{
		int i;
		printf("Input number:\n");
		for(i=0; i<MAX; i++)
			scanf("%d", &a[i]);
	}

	void outputArray(int *a)
	{
		int x;
		for(x=0; x<MAX; x++)
			printf("%d\n", a[x]);
	}

	void deleteArray(int *a, int del)
	{
		int y;
		for(y = del - 1; y<MAX; y++)
		 	a[y] = a[y+1];
	}