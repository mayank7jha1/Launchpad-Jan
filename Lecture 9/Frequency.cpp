#include <iostream>
#include<climits>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n] {0};

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  /*
    Approach: For Every Element we are traversing over the entire array
    to find out how many times that current element is occuring.
  */

  for (int i = 0; i < n; i++) {

    int ce = a[i];//This stores my current element
    int count = 0;//This variable stores the frequency of ce.

    if (ce != INT_MAX) {

      for (int j = 0; j < n; j++) {
        if (a[j] == ce) {
          count++;
          a[j] = INT_MAX;
        }
      }
      cout << ce << " ---> " << count << endl;
    }
  }


}
