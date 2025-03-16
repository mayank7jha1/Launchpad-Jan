#include <iostream>
#include<climits>//This is for INT_MAX and INT_MIN.
using namespace std;

//Given an array you need to find out the smallest element and
//second smallest present in array elements cannot be same.
//It is given that there exists atleast 2 different elements.

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
    
    
    //Finding the Smallest:
    //Idea: Go to every index and compare each element with the current Smallest
    //element and if you have found out a new smaller element update the current
    //smallest element.
    
    
    //You have assumed this is the smallest element present till now.(ans)
    int smallest=INT_MAX;//I have initialised my current smallest element with INT_MAX.
    int second_smallest=INT_MAX; //This stores the second smallest till now.
    
    for(int i=0;i<n;i++){
      
      if(a[i]<smallest){
        smallest=a[i];
      }
      
      if(a[i]>smallest and a[i]<second_smallest){
        second_smallest=a[i];
      }
    }
    
    //Now you have your smallest element.
    cout<<smallest<<endl;
    
    //Now you have found the second smallest value.
    cout<<second_smallest<<endl;
    
    return 0;
}