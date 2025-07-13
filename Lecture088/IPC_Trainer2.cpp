#include<iostream>
#include<queue>
#include<set>
#include<algorithm>

using namespace std;
const int N = 1e5 + 3;
int t;
int n, d;
int sadness[N] {0}, Lectures[N] {0}, Arrival_Day[N] {0};


int main() {

	cin >> t;

	while (t--) {

		cin >> n >> d;
		priority_queue<pair<int, int>>pq;
		for (int i = 0; i < n; i++) {
			cin >> Arrival_Day[i] >> Lectures[i] >> sadness[i];
			pq.push({sadness[i], i});
		}

		set<int>Available_Days;
		for (int i = 1; i <= d; i++) {
			Available_Days.insert(i);
		}

		int Lectures_Taken[N] {0};
		while (!pq.empty()) {

			pair<int, int >Sabse_Dukhi = pq.top();
			pq.pop();

			int sdi = Sabse_Dukhi.second;
			int S = Sabse_Dukhi.first;

			int ILKLH = Lectures[sdi];

			int Ideal_Starting_Day = Arrival_Day[sdi];
			int Ideal_Ending_Day = Ideal_Starting_Day + ILKLH - 1;

			for (int i = Ideal_Starting_Day; i <= Ideal_Ending_Day; i++) {
				set<int>::iterator it = Available_Days.lower_bound(i);

				if (it == Available_Days.end()) {
					break;
				} else {

					Lectures_Taken[sdi]++;
					Available_Days.erase(it);
				}
			}

		}


		int total = 0;

		for (int i = 0; i < n; i++) {
			total += (Lectures[i] - Lectures_Taken[i]) *
			         sadness[i];
		}

		cout << total << endl;
	}
}