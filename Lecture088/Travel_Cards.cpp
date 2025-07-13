#include<iostream>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;
int n, a, b, k, f;

bool compare(int a, int b) {

	if (a < b) {
		return false;
	} else {
		return true;
	}
}


int main() {
	cin >> n >> a >> b >> k >> f;


	//n: 10^5 :map
	//I am creating a map of route and cost of that route.
	map<pair<string, string>, int>mp;

	// vector < pair<pair<string, string>, int>>trip;
	// pair<pair<string, string>, int>t[3001];

	// mp[key] = value;

	//vector<pair<key, value>>v;
	// v[key]=value??(X)

	// vector

	//This is to check if my current trip is transhipment or not.
	string Last_Point = "";

	for (int i = 0; i < n; i++) {

		string CSP, CEP;
		cin >> CSP >> CEP;

		int price = 0;//This store current trip cost.

		if (CSP == Last_Point) {
			price = b;
		} else {
			price = a;
		}

		Last_Point = CEP;

		//Now insert map me route ka data.

		if (CSP > CEP) {
			swap(CSP, CEP);
		}

		mp[ {CSP, CEP}] += price;
	}


	vector<int>RouteCost;
	int Total_Cost = 0;

	for (pair<pair<string, string>, int> x : mp) {
		RouteCost.push_back(x.second);
		Total_Cost += x.second;
	}


	// sort(RouteCost.begin(), RouteCost.end(), greater<int>());
	sort(RouteCost.begin(), RouteCost.end(), compare);

	for (int i = 0; i < RouteCost.size() and i < k; i++) {
		if (RouteCost[i] > f) {
			Total_Cost = Total_Cost - RouteCost[i] + f;
		} else {
			break;
		}
	}


	cout << Total_Cost << endl;

}















