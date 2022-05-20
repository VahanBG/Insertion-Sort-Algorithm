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

void sort(std::vector<int>::iterator it_first,std::vector<int>::iterator it_last) //սա դասավորում է զանգվածի ելեմենտները աճման կարգով
{

    for(int i = 1 ; i < std::distance(it_first , it_last) ; i++){
    int count = *( it_first+ i );
        for(int j = i - 1 ; j >= 0  &&  *(it_first+j) > count ; j--){
           * (it_first+j+1) = *(it_first+j);
            *(it_first+j) = count ;
        }  
        
    }
}


int main ()
{
  std::list<int > mylist={ 19,15,8,3,47};
  std::list<int>::iterator it_first = mylist.begin();
  auto it_last = mylist.end();
  
  std::cout << "mylist contains:";
  for (auto it=mylist.begin(); it!=mylist.end(); ++it)
    std::cout << ' ' << *it;
  //std::cout << std::endl;
  sort(it_first,it_last);

 for (it_first=mylist.begin(); it_first!=mylist.end(); ++it_first)
    std::cout << ' ' << *it_first;
  std::cout << std::endl;

  return 0;
}