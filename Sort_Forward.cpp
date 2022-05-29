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

/*void sort(std::forward_list<int> arr ,std::forward_list<int>::iterator it_ferst) //սա դասավորում է զանգվածի ելեմենտները աճման կարգով
{
    while (it_ferst!= arr.end()){
    auto it_count = it_ferst;
    it_ferst ++;
        if(*it_count > it_ferst){
        std::iter_swap( it_count , it_ferst);
        }
        
    } 
}
*/
int main ()
{
  std::forward_list<int > my_flist={ 19,15,8,3,47};
  std::forward_list<int>::iterator it_first = my_flist.begin();
  std::cout<<*it_first<<std::endl;
    sort(my_flist, it_first);


  /*auto it_last = mylist.end();
  it_last --;
  
  std::cout << "mylist contains:";
  for (auto it=mylist.begin(); it!=mylist.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;
 sort(it_first,it_last);
std::cout << "mylist contains:";
 for (it_first=mylist.begin(); it_first!=mylist.end(); ++it_first)
    std::cout << ' ' << *it_first;
std::cout << std::endl;*/

  return 0;
}