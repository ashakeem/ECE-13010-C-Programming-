#include <iostream>
#include <vector>
#include <algorithm> 

std::vector<int> generateSequence(int start, int limit) {
    std::vector<int> sequence;
    int current = start;

    while (std::find(sequence.begin(), sequence.end(), current) == sequence.end()) {
        sequence.push_back(current);
        current = (current + 1) % limit;
    }

    return sequence;
}

int main() {
    int start = 0, limit = 10;
    std::vector<int> result = generateSequence(start, limit);

    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
