#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    string phrase;

    cout << "[IN]";
    getline(cin, phrase); 

    unordered_map<char, int> symbolCounts;

    
    for (char symbol : phrase) {
        symbolCounts[symbol]++;
    }

    cout << "[Out]" << endl;

    vector<pair<char, int>> sortedCounts(symbolCounts.begin(), symbolCounts.end());
    sort(sortedCounts.begin(), sortedCounts.end(),
        [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second < b.second;
        });

    for (auto const& pair : sortedCounts) {
        cout << pair.first << " = " << pair.second << endl;
    }

    return 0;
}