#include<iostream>
#include<climits>
#include<algorithm>
using  namespace std;
const int N = 1e7 + 5;//1*10^7+5

// N = 89;Not Allowed.

//There cannot be any loop/condition in global scope.


/*
	You Cannot create a variable with the name
	as N in the global scope now.

	Constant variables are those variable whose
	values cannot be changed but within the scope,
	hence you always need to initialise a const
	variable at the time of its definition.
*/

int freq[N] {0};

/*
	For Global Freq array you are able to
	storre the freq of the original element
	till 10^7 or in some cased 10^8 but
	you will not be able to store beyond this,
	hence for arrays containing element greater
	than this you cannot use freq array to store/
	calculate its freq.
*/

int main() {

	/*
		Inside the main scope or any other function
		scope the maximum size of the array you can
		create locally is 10^5 and in an online judge
		i.e. wheen you submit your code on platforms
		like codeforces/leetcode you can create an
		array upto 10^6.

		Hence For a functional scope (array) frequency can't
		be calculated if the original array
		contains element greater than 10^7.
	*/

	int n;
	cin >> n;
	int a[n];

	// if (true) {
	// 	const int N = 56;
	// 	cout << N << endl;
	// }

	int maxi = INT_MIN;
	int mini = INT_MAX;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		maxi = max(maxi, a[i]);
		mini = min(mini, a[i]);
	}

	int freq[maxi - mini + 1] {0};

	for (int i = 0; i < n; i++) {
		int ele = a[i];
		freq[ele - mini]++;
	}

	for (int i = 0; i < maxi - mini + 1; i++) {
		if (freq[i] > 0) {

			int ele = i + mini;
			int fr = freq[i];

			cout << ele << " " << fr << endl;
		}
	}
}