#include<iostream>
#include<cstring>
using  namespace std;
#define int long long

/*
		Q. What is the maximum amount of hamburgers
		you can make irrespective of the tc or constraints?

		B
		100 100 100
		1  1 1
		10^12

		10^12+100
*/


int CheckB(int mid, int sb, int nb, int pb) {
	int Bread_Money = ((mid * sb) - nb) * pb;
	if (Bread_Money < 0) {
		Bread_Money = 0;
	}
	return Bread_Money;
}

int CheckS(int mid, int ss, int ns, int ps) {
	int Sausage_Money = ((mid * ss) - ns) * ps;
	if (Sausage_Money < 0) {
		Sausage_Money = 0;
	}
	return Sausage_Money;
}

int CheckC(int mid, int sc, int nc, int pc) {
	int Cheese_Money = ((mid * sc) - nc) * pc;
	if (Cheese_Money < 0) {
		Cheese_Money = 0;
	}
	return Cheese_Money;
}

int32_t main() {
	char ch[101];
	cin >> ch;

	int nb, ns, nc;
	cin >> nb >> ns >> nc;

	int pb, ps, pc;
	cin >> pb >> ps >> pc;

	int r;
	cin >> r;

	int sb = 0, ss = 0, sc = 0;

	for (int i = 0; i < strlen(ch); i++) {
		if (ch[i] == 'B') {
			sb++;
		} else if (ch[i] == 'S') {
			ss++;
		} else {
			sc++;
		}
	}

	int s = 0;
	int e = 1e12 + 100;

	int ans = -1;

	while (s <= e) {

		int mid = (s + e) / 2;

		int Total_Money = CheckB(mid, sb, nb, pb) +
		                  CheckS(mid, ss, ns, ps) +
		                  CheckC(mid, sc, nc, pc);

		if (Total_Money <= r) {
			ans = mid;
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}

	cout << ans << endl;
}


// int a[100001];
// int x;
// int i = 0;

// while (cin >> x) {
// 	a[i] = x;
// 	i++;
// }


















