#include<iostream>
#include<string>
#include<iterator>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<forward_list>
#include<set>
#include<map>
#include<stack>

void sort(std::list<int>::iterator it_first,std::list<int>::iterator it_last) //սա դասավորում է զանգվածի ելեմենտները աճման կարգով
{
  
 while( it_first != it_last)
 {
     int i = 0 ;
    while ( it_last != it_first){
   
     if(*it_first > *it_last)
     std::iter_swap(it_first , it_last);
     it_last -- ;
     i++;
    }
     std::advance(it_last , i);
     it_first++ ;
     

}

    
}


int main ()
{
  std::list<int > mylist={ 19,15,8,3,47};
  std::list<int>::iterator it_first = mylist.begin();
  auto it_last = mylist.end();
  it_last --;
  
  std::cout << "mylist contains:";
  for (auto it=mylist.begin(); it!=mylist.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;
 sort(it_first,it_last);
std::cout << "mylist contains:";
 for (it_first=mylist.begin(); it_first!=mylist.end(); ++it_first)
    std::cout << ' ' << *it_first;
std::cout << std::endl;

  return 0;
}