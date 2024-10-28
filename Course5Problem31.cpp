#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void Swap(int& A , int& B)
{
	int Temp = 0;

	Temp = A;
	A = B;
	B = Temp;
}

void FillArrayFrom1ToN(int Arr[100], int& ArrayLength)
{

	for (int i = 0; i <= ArrayLength - 1; i++)
	{
		
		Arr[i] = i + 1;

	}

}

void ShuffleArray(int Arr[100] , int ArrayLength)
{

	for (int i = 0 ; i <= ArrayLength - 1; i++)
	{
		Swap(Arr[RandomNumber(1, ArrayLength) - 1], Arr[RandomNumber(1, ArrayLength) - 1]);
	}

}

void PrintArray(int Arr[100], int ArrayLength)
{

	for (int i = 0; i <= ArrayLength - 1; i++)
		cout << Arr[i] << " ";

	cout << "\n";
}

int main()
{
	
	srand((unsigned)time(NULL));

	int Arr[100], Length = 0;

	Length = ReadPositiveNumber("Enter a positive number");
	FillArrayFrom1ToN(Arr , Length);

	cout << "\nOriginal Array :";
	PrintArray(Arr , Length);
	
	ShuffleArray(Arr , Length);

	cout << "\nArray after shuffling :";
	PrintArray(Arr , Length);

	return (0);

}