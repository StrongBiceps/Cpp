#include <iostream>
using namespace std;

int main()
{
	int row = 3, col = 5;
	int* row_1 = new int[col] {1, 2, 3, 4, 5}; // int ���� 5���� 1���� ���� �迭 row_1
	int* row_2 = new int[col] {6, 7, 8, 9, 10}; // int ���� 5���� 1���� ���� �迭 row_2
	int* row_3 = new int[col] {11, 12, 13, 14, 15}; // int ���� 5���� 1���� ���� �迭 row_2

	int** Two_d_array = new int* [row] {row_1, row_2, row_3};
	// int* ������ ���� 3��(= 1���� �迭�̸� 3��)�� 2���� ���� �迭 2d_array
	// ������ 3���� ����ִ� �迭(������)�� �ּҸ� ���Ϲ��� 
	// �������� �������̹Ƿ� 2d_array�� Ÿ���� int **�� �ȴ�. 

	delete[] row_1;
	delete[] row_2;
	delete[] row_3;
	delete[] Two_d_array;

	return 0;
}