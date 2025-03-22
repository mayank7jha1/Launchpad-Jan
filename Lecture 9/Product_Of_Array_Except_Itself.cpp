#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n] {0};

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }


  int pre[n + 1] {0};

  pre[0] = 1;

  for (int i = 1; i < n; i++) {
    pre[i] = pre[i - 1] * a[i - 1];
  }

  int suffix[n + 1] {0};

  suffix[n - 1] = 1;

  for (int i = n - 2; i >= 0; i--) {
    suffix[i] = suffix[i + 1] * a[i + 1];
  }

  int ans[n] {0};
  for (int i = 0; i < n; i++) {
    ans[i] = pre[i] * suffix[i];
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }

}