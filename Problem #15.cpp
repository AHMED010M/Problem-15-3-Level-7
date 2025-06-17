#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int RandomNumber(int From, int To)
{

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

int ReadNumber(string meesage)
{
	int num;
	cout << meesage << endl;
	cin >> num;

	return num;

}

void FillaMatrix3x3(int arr[3][3], int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j];

		}

	}


}
	
int CounterNumberInMatrix(int arr[3][3], int Rows, int Cols,int num)
{
	short counter = 0;

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (arr[i][j] == num)
			{
				counter++;
			}
		}

	}
	return counter;
}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);

		}
		cout << "\n";
	}

}



int main()
{

	srand(time(0));

	int arr1[3][3] = { { 5,2,5 }, { 3,5,4 }, { 1,1,5 } };



	FillaMatrix3x3(arr1, 3, 3);


	cout << "Matrix 1 : " << endl;
	PrintMatrix(arr1, 3, 3);

	int num = ReadNumber("Please enter the Number to count in Matrix : \n");

	cout << "\nNumber " << num << "  count in matrix is  " << CounterNumberInMatrix(arr1, 3, 3, num);

}

