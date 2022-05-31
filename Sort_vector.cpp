#include <iostream>
#include <vector>
#include <iterator>
template< typename T >
void sort(std::vector< T > &arr)	// this sorts the elements of the array in ascending order
{
	typename std::vector< T >::iterator it_vec = arr.begin();
	for (int i = 1; i < arr.size(); i++)
	{
		int count = *(it_vec + i);
		for (int j = i - 1; j >= 0 && *(it_vec + j) > count; j--)
		{ *(it_vec + j + 1) = *(it_vec + j);
			*(it_vec + j) = count;
		}
	}
}
template< typename T >
void print_vector(std::vector< T > arr)
{
	typename std::vector< T >::iterator my_iterator = arr.begin();
	for (int i = 0; i < arr.size(); i++)
	{

		std::cout << *(my_iterator + i) << " ";
	}
	std::cout << std::endl;
}

int main()
{

	int size_of_array;
	std::cout << "please enter size of numbers in your array" << std::endl;
	std::cin >> size_of_array;
	std::cout << "please enter numbers of your array" << std::endl;
	std::vector<int> myVector;
	int numbers;
	for (int i = 0; i < size_of_array; i++)
	{
		std::cout << "enter value of " << i << " index " << std::endl;
		std::cin >> numbers;
		myVector.push_back(numbers);
		numbers = 0;
	}

	std::cout << "your array is : " << std::endl;
	print_vector(myVector);
	sort(myVector);
	std::cout << "your array after sorting" << std::endl;
	print_vector(myVector);

}