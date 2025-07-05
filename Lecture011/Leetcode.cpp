#include<iostream>
using namespace std;



class Solution {
public:
    string frequencySort(string t) {

        // unordered_map<char, int> freq;

        // Step 1: Count frequencies
        // for (char c : s) {
        //     freq[c]++;
        // }

        // Step 2: Create buckets where index = frequency
        //int maxFreq = s.length();
        // vector<vector<char>> buckets(maxFreq + 1);

        // for (auto& [ch, f] : freq) {
        //     buckets[f].push_back(ch);
        // }

        // Step 3: Build result string from high to low frequency
        string res;
        // for (int i = maxFreq; i >= 1; --i) {
        //     for (char c : buckets[i]) {
        //         res.append(i, c);  // Append 'c' i times
        //     }
        // }

        return res;
    }
};


int main() {
    string st;
    cin >> st;
    Solution s;
    cout << s.frequencySort(st) << endl;
}



