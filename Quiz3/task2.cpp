
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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
    cout << "Array b: ";
    for (int num : b) {
        cout << num << " ";
    }
    cout << "\nSize of array b: " << b.size() << endl;
    return 0;
}
