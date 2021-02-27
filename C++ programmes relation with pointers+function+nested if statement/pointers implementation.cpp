#include<iostream>
using namespace std;
void insert(int*& ptr, int size)
{
	for (int s = 0; s < size; s++)
	{
		cout << "Enter Data " << s << " :: ";
		cin >> ptr[s];
	}
}
int sum(int* ptr, int size)
{
	int sum = 0;
	for (int s = 0; s < size; s++)
	{
		sum+=ptr[s];
	}
	return sum;
}

int main()
{
	int* ptr;
	int size;
	cout << "Enter size of an array\t::\t";
	cin >> size;
	ptr = new int[size + 1];
	insert(ptr, size);
	cout << "Sum\t::\t" << sum(ptr, size) << endl;


	system("pause");
	return 0;
}