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
    
    int index1,index2;
    cin>>index1>>index2;
    
    int temp=a[index1];//temp=2
    a[index1]=a[index2];//index1=4 and index2=4
    a[index2]=temp;
    
     for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
   
    
    return 0;
}









