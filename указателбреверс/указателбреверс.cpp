// Використовуючи два покажчики на масиви цілих чисел, скопіювати один масив у інший так, щоб у другому масиві елементи знаходилися у зворотному порядку.
#include <iostream>
using namespace std;

int main() {

	const int size = 10;
	int arr1[size] = { 2,41,15,7,57,3,6,8,0,1 };
	int arr2[size];

	int* oldarr1 = arr1;
	int* newarr2 = arr2;
	int a = size-1;
	for (int i =0; i <size; i++)
	{		
		*(newarr2 +i) = *(oldarr1 + a);	
		a--;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr2[i] << " ";
	}
}
