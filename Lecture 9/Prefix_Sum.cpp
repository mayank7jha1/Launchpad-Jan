#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n] {0};

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int q;
  cin >> q;

  for (int i = 1; i <= q; i++) {

    int l, r;
    cin >> l >> r;

    int sum = 0;

    for (int j = l; j <= r; j++) {
      sum += a[j];//Work
    }

    cout << sum << endl;
  }




  // int l[q] {0}, r[q] {0};

  // for (int i = 0; i < q; i++) {
  //   cin >> l[i] >> r[i];
  // }

  // for (int i = 0; i < q; i++) {

  //   int sum = 0;

  //   for (int j = l[i]; j <= r[i]; j++) {
  //     sum += a[j];
  //   }

  //   cout << sum << endl;

  // }


  return 0;
}