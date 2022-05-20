#include<iostream>
#include<string>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<forward_list>
#include<set>
#include<map>
#include<stack>

void sort(std::vector<int>::iterator arr,int size_arr) //սա դասավորում է զանգվածի ելեմենտները աճման կարգով
{
    for(int i = 1 ; i < size_arr  ; i++){
    int count = *(arr+i);
        for(int j = i - 1 ; j >= 0  &&  *(arr+j) > count ; j--){
           * (arr+j+1) = *(arr+j);
            *(arr+j) = count ;
        }  
        
    }
}
void print_arr(std::vector<int>::iterator  arr,int size_arr){ //տպում է զանգվածը
  for(int i = 0 ; i < size_arr; i++ ){
        std::cout<<*(arr + i)<<" ";
    }
    std::cout<<std::endl;
}

int main()
{
     int size_of_array ;
     std::cout<<"please enter size of numbers in your array"<<std::endl;
     std::cin >> size_of_array ;
     std::cout<<"please enter numbers of your array"<<std::endl;
     std::vector <int> myVector;
     int numbers ;
     for(int i = 0 ; i < size_of_array ; i++){
         std::cout<<"enter value of "<< i << " index " <<std::endl ;
         std::cin>> numbers;
         myVector.push_back(numbers);
         numbers = 0 ;
     }
     std::vector<int>::iterator my_iterator = myVector.begin();
     std::cout<<"your array is : " << std ::endl ;
     print_arr( my_iterator , size_of_array);
     sort( my_iterator,size_of_array);
     std::cout<<"your array after sorting" << std::endl;
     print_arr( my_iterator , size_of_array );
   
}