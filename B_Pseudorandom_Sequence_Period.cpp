#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

long long generateNext(long long prev, long long a, long long b, long long m) {
    return (a * prev + b) % m;
}

int findPeriod(long long a, long long b, long long m, long long r) {
    unordered_map<long long, int> seen;
    vector<long long> sequence;
    
    long long current = r;
    int index = 0;
    
    while (seen.find(current) == seen.end()) {
        seen[current] = index;
        
        current = generateNext(current, a, b, m);
        index++;
    }
    
    int cycleStart = seen[current];
    return index - cycleStart;
}

int main() {
    long long a, b, m, r;
    cin >> a >> b >> m >> r;
    
    int period = findPeriod(a, b, m, r);
    cout << period << endl;
    
    return 0;
}