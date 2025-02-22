#include<iostream>
using  namespace std;

int main() {
	int n, m, t, w, th, f, sa, s;
	cin >> n;
	cin >> m >> t >> w >> th >> f >> sa >> s;

	int cd = m;
	int count = 1;

	int sum = m + t + w + th + f + sa + s;
	n = n % sum;
  if(n==0){
    n=sum;
  }

	while (n >= 0) {
		  n = n - cd;
			if(n<=0){
			  cout<<count<<endl;
			  return 0;
			}
			count = count + 1;
			if (count == 1) {
				cd = m;
			} else if (count == 2) {
				cd = t;
			} else if (count == 3) {
				cd = w;
			} else if (count == 4) {
				cd = th;
			} else if (count == 5) {
				cd = f;
			} else if (count == 6) {
				cd = sa;
			} else {
				cd = s;
			}
	}

	cout << count << endl;

}
