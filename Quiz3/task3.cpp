
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void linearSearch(const vector<int>& array, const vector<int>& targets) {
    for (int target : targets) {
        auto it = find(array.begin(), array.end(), target);
        if (it != array.end()) {
            cout << "Found " << target << " at index " << distance(array.begin(), it) << endl;
        } else {
            cout << target << " not found." << endl;
        }
    }
}

vector<int> generateSequence(int base, int mod) {
    vector<int> sequence;
    int current = base;
    while (find(sequence.begin(), sequence.end(), current) == sequence.end()) {
        sequence.push_back(current);
        current = (current * base) % mod;
    }
    return sequence;
}

int main() {
    vector<int> b = generateSequence(3, 79);
    vector<int> searchTargets = {1, 5, 10, 30, 90, 78, 72, 0};
    cout << "Searching in array b..." << endl;
    linearSearch(b, searchTargets);
    return 0;
}
