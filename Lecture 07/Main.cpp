#include <iostream>
#include<climits>
using namespace std;

//Given an array you need to find out the smallest element present in array.

int main() 
{
    
    int n;
    cin>>n;
    
    int a[n];//Defining the array.
    
    // int ans=INT_MAX;
    
    //Take the input of the array.
    for(int i=0;i<n;i++){
      cin>>a[i];
      // if(a[i]<ans){
      //   ans=a[i];
      // }
    }
    
    
    //Finding the Smallest:
    //Idea: Go to every index and compare each element with the current Smallest
    //element and if you have found out a new smaller element update the current
    //smallest element.
    
    
    int ans=INT_MAX;//I have initialised my current smallest element with INT_MAX.
    
    for(int i=0;i<n;i++){
      if(a[i]<ans){
        ans=a[i];
      }
    }
    
    
    //Now you have your smallest element.
    
    cout<<ans<<endl;
    
    
    
    
    
    
    
    return 0;
}