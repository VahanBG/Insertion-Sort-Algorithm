#include <iostream>
#include <string>
#include <list>
#include <iterator>
template < typename T>
void sort(std::list< T >& mylist)// this sorts the elements of the array in ascending order
{
    typename std::list< T >::iterator it_first = mylist.begin();
    typename std::list< T >::iterator it_last = mylist.end();
	it_last -- ;
	while (it_first != it_last)
	{
		int i = 0;
		while (it_last != it_first)
		{

			if (*it_first > *it_last)
				std::iter_swap(it_first, it_last);
			it_last--;
			i++;
		}
		std::advance(it_last, i);
		it_first++;
	}
}
void Print_list(std::list<int> mylist)
{
    for (auto it_first = mylist.begin(); it_first != mylist.end(); ++it_first)
	std::cout << ' ' << *it_first;
	std::cout << std::endl;
}
int main()
{
	std::list<int> mylist = { 19, 15, 8, 3, 47 };
	std::cout << "mylist contains:";
	Print_list(mylist);
	sort(mylist);
	std::cout << "mylist contains:";
	Print_list(mylist);
	
	return 0;
}