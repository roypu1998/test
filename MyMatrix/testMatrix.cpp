#include "MyMatrix.h"
#include<iostream>
using namespace std;

int main()
{

	float num1, num2, num3, num4;
	cout << "enter 4 Numbers" << endl;
	cin >> num1 >> num2 >> num3 >> num4;
	MyMatrix matrix1{ num1,num2,num3,num4 };
	cout << "enter 4 Numbers" << endl;
	cin >> num1 >> num2 >> num3 >> num4;
	MyMatrix matrix2{ num1,num2,num3,num4 };
		int choice;
	do
	{
		cout << "1.Set matrix1" << endl << "2.Get matrix1" << endl << "3.Is_equal" << endl << "4.Print matrix1" << endl << "5.Det matrix1" << endl << "6.Is_inverse" << endl << "7.goodbye" << endl;
		cin >> choice;
		switch (choice)
		{

		case 1:
			cout << "enter number, rows and colums(i,j)" << endl;
			cin >> num1 >> num2 >> num3;
			matrix1.set(num2, num3, num1);
			break;
		case 2:
			cout << "enter rows and colums(i,j)" << endl;
			cin >> num1 >> num2;
			num3 = 0;
			matrix1.get(num1, num2, num3);
			cout << num3 << endl;
			break;
		case 3:
			cout << matrix1.is_equal(matrix2);
			break;
		case 4:
			matrix1.print();
			break;
		case 5:
			cout << matrix1.det() << endl;
			break;
		case 6:
			cout << matrix1.is_inverse(matrix2) << endl;
			break;

		default:
			break;
		}
	} while (choice>0 && choice<7);


		return 0;
}
