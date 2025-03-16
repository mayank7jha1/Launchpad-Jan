#include <iostream>
#include<climits>//This is for INT_MAX and INT_MIN.
using namespace std;

//Given an array you need to find out the smallest element and
//second smallest present in array elements cannot be same.
//It is given that there exists atleast 2 different elements.

//Computations: Amount of time that algorithm is doing a task.

//Find out the amount of Computations your Selection sort algorithm is doing when
//size of array is n.

//It is n*(n-1)/2; where n=size of array.

int main() 
{
    
    int n;
    cin>>n;
    
    int a[n];//Defining the array.
    
    // int ans=INT_MAX;
    
    //Take the input of the array.
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    
    //Selection Sort Code:
    
    //Idea: Put the smallest at the front or at its correct postion and
    //repeat till the array gets sorted.
    
    for(int i=0;i<n-1;i++){
      //We are trying to find the ith smallest element through its index.
      //We have preassumed that the ith element is at index i only.
      //which maybe/may not be true and will be updated in the loop
      //later on.
      int smallest=i;
      
      for(int j=i+1;j<n;j++){
        if(a[smallest]>a[j]){
          smallest=j;
        }
      }
      
      //We need to put the smallest element at its correct position 
      //which is ith index.
      //Hence swap a[i] and a[smallest]
      int temp=a[i];
      a[i]=a[smallest];
      a[smallest]=temp;
    }
    
    //Now we have the sorted array in increasing order.
    //Print the array.
    
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
   
    
    return 0;
}









