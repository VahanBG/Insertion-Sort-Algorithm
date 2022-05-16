#include <iostream>
#include <algorithm>

void sort(int*arr,int size_arr)
{
    for(int i = 0 ; i < size_arr - 1 ; i++){
        for(int j = i + 1 ; j < size_arr ; j++){
            if(arr[i]>arr[j]){
               std::swap(arr[i],arr[j]);
            }  
        }

        
    }

}
void print_arr(int *arr,int size_arr){
  for(int i = 0 ; i < size_arr; i++ ){
        std::cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[10]={5,84,16,17,46,23,19,56,32,14};
    int size = sizeof(arr) / sizeof(arr[0]);
    //print_arr( arr , size );
    //std::swap(arr[0],arr[1]);
    sort(arr,size);
    print_arr( arr , size );
  
   //std::cout<<size;

    
}