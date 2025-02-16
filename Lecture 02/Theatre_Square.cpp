#include<iostream>
using  namespace std;

int main() {

	int n, m, a;
	cin >> n >> m >> a;

	long long int row = ((n + a - 1) / a);
	long long int col = ((m + a - 1) / a);


	long long int ans = row * col;

	cout << ans << endl;
}