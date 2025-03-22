#include <iostream>
#include<climits>
using namespace std;

/*
  Original array elements can be positive or 0.
*/

int main() {
  int n;
  cin >> n;

  int a[n] {0};
  int maxi = INT_MIN;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (maxi < a[i]) {
      maxi = a[i];
    }
  }

  int freq[maxi + 1] {0};

  for (int i = 0; i < n; i++) {
    int ce = a[i];
    freq[ce] += 1;
  }

  for (int i = 0; i <= maxi; i++) {
    if (freq[i] > 0) {
      cout << i << " ---> " << freq[i] << endl;
    }
  }

}
