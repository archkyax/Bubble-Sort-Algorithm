#include <iostream>

void swap(int & x, int & y)
{
	int temp = x;
	x = y;
	y = temp;
}

void printArray(int array[], int arraySize)
{
	std::cout << "| ";
	for (int i = 0; i < arraySize; i++)
	{
		std::cout << *(array + i) << " | ";
	}
	std::cout << '\n';
}

void bubbleSort(int array[], int arraySize)
{
	bool flag;
	do
	{
		flag = true;
		for (int i = 0; i < arraySize; i++)
		{
			if (i != arraySize)
			{
				if (*(array + i) > *(array + i + 1))
				{
					swap(*(array + i), *(array + i + 1));
					flag = false;
				}
			}
			else
			{
				if (*(array + i - 1) > *(array + i))
				{
					swap(*(array + i - 1), *(array + i));
					flag = false;
				}
			}
		}
	}
	while (!flag);
}

int main()
{
	int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int arraySize = sizeof(array)/sizeof(int);
	printArray(array, arraySize);
	bubbleSort(array, arraySize);
	printArray(array, arraySize);
	return 0;
}