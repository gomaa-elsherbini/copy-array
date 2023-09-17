#include <iostream>
#include <cstdlib>
using namespace std;




int getRandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void readArray(int arr[100], int& arrLength)
{
	cout << "Please enter how many elements of the array?\n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = getRandomNumber(1, 100);
	}
}

void copyArray(int arr1[100], int arr2[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr2[i] = arr1[i];
	}
}

void printArray(int numArr[100], int arrLength)
{
	//cout << "\nArray Elements: ";
	for (int i = 0; i < arrLength; i++)
	{

		cout << numArr[i] << " ";
	}
	cout << endl;
}


void printArrayDetails(int numArr[100], int arrLength)
{
	for (int i = 1; i <= 2; i++)
	{
		cout << "Array [" << i << "] Elements:" << endl;
		printArray(numArr, arrLength);
		cout << endl;
	}
	cout << "\n\n";
}



int main()
{
	int arr1[100]; int arr2[100]; int arrLength;


	readArray(arr1, arrLength);
	copyArray(arr1, arr2, arrLength);

	cout << "Array1 Elements "; printArray(arr1, arrLength);
	cout << "Array2 Elements "; printArray(arr2, arrLength);


	return main();
}