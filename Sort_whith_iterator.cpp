#include <iostream>
#include <list>
#include <vector>
#include <iterator>
template < typename T >
void sort( T it_first , T it_last )// this sorts the elements of the array in ascending order
{
   
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
template < typename T>
void Print( T my_contener)
{
    for (auto it_first = my_contener.begin(); it_first != my_contener.end(); ++it_first)
	std::cout << ' ' << *it_first;
	std::cout << std::endl;
}
int main()
{
	std::list<int> mylist = { 19, 15, 8, 3, 47 };
	std::cout << "mylist contains:";
    std::list< int >::iterator it_first = mylist.begin();
    std::list< int >::iterator it_last = mylist.end();
	it_last -- ;    
	Print(mylist);    
	sort(it_first , it_last);
	std::cout << "mylist contains:";
	Print(mylist);
    std::vector<int> myVector = { 19, 15, 8, 3, 47 };
    std::vector< int >::iterator it_vec_first = myVector.begin();
    auto it_vec_last = myVector.end() -1;    
    sort(it_vec_first , it_vec_last);
    std::cout << "myvector contains:";
    Print(myVector);

	
	return 0;
}