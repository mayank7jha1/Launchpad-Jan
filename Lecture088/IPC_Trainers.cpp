#include<iostream>
#include<queue>
#include<set>
#include<algorithm>

using namespace std;
const int N = 1e5 + 3;
int t;
int n, d;
int sadness[N] {0}, Lectures[N] {0}, Arrival_Day[N] {0};

/*
	Information about ith Professor:

	i. th Professor
	iski sadness is sadness[i]
	isko lectures lene hai lectures[i]
	ye aata hain camp me on arrival_day[i]
*/



int main() {

	cin >> t;

	while (t--) {

		cin >> n >> d;

		/*
			Now I want to sort the professors on
			the basis of their sadness.

			Because I want to give professors with
			maximum sadness first try in taking
			lectures.
		*/

		//{Sadness,i}
		//Why I have taken sadness first then i
		//because by default jo bhi kaam hota hain
		//containers me vo first ke according hota hain
		// then vo aage jaata hain.

		priority_queue<pair<int, int>>pq;
		for (int i = 0; i < n; i++) {
			cin >> Arrival_Day[i] >> Lectures[i] >> sadness[i];
			pq.push({sadness[i], i});
		}


		//Mujhe searching for the available days
		//fastest rakhni hain that's why.
		set<int>Available_Days;
		for (int i = 1; i <= d; i++) {
			Available_Days.insert(i);
		}

		int Lectures_Taken[N] {0};
		//Konse professor ne kitne lectures leliye.

		while (!pq.empty()) {

			pair<int, int >Sabse_Dukhi = pq.top();
			pq.pop();

			int sdi = Sabse_Dukhi.second;
			int S = Sabse_Dukhi.first;

			//Isko lectures kitne lene hain
			int ILKLH = Lectures[sdi];

			int Ideal_Starting_Day = Arrival_Day[sdi];
			int Ideal_Ending_Day = Ideal_Starting_Day + ILKLH - 1;


			//Give lectures to this professor from the
			//available days.

			for (int i = Ideal_Starting_Day; i <= Ideal_Ending_Day; i++) {

				//Mujhe i ka available day set me dhundna hain.
				set<int>::iterator it = Available_Days.lower_bound(i);

				if (it == Available_Days.end()) {
					break;
				} else {

					Lectures_Taken[sdi]++;
					//Erase function will only have address.
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