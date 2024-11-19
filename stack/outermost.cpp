#include <iostream>
#include <vector>
#include <unordered_set>
#include<bits/stdc++.h>
using namespace std;

std::vector<int> generateSequence(int N) {
    std::vector<int> sequence;
    sequence.push_back(0);  // Initializing the sequence with the first term

    for (int n = 1; n <= N; ++n) {
        if (sequence[n - 1] - n > 0 && 
            find(sequence.begin(), sequence.end(), sequence[n - 1] - n) == sequence.end()) {
            sequence.push_back(sequence[n - 1] - n);
        } else {
            sequence.push_back(sequence[n - 1] + n);
        }
    }

    return sequence;
}

int main() {
    int N;
    std::cout << "Enter the value of N: ";
    std::cin >> N;

    std::vector<int> resultSequence = generateSequence(N);

    // Printing the generated sequence
    std::cout << "Generated Sequence:" << std::endl;
    for (int num : resultSequence) {
        std::cout << num << " ";
    }

    return 0;
}
