#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>
#include <stdexcept>

using namespace std;

int main() {
    int numRelations;
    cin >> numRelations;
    cin.ignore(); // Consume newline character

    unordered_map<string, string> relations;

    // Input handling and error checking
    try {
        for (int i = 0; i < numRelations; ++i) {
            string line;
            getline(cin, line);

            stringstream ss(line);
            string child, father;
            getline(ss, child, ',');
            getline(ss, father);

            transform(child.begin(), child.end(), child.begin(), ::tolower);
            transform(father.begin(), father.end(), father.begin(), ::tolower);

            if (ss.eof() && !child.empty() && !father.empty()) {
                relations[child] = father;
            } else {
                throw invalid_argument("Invalid relation format: " + line);
            }
        }

        string name;
        cout << "Enter name: ";
        getline(cin, name);
        transform(name.begin(), name.end(), name.begin(), ::tolower);

        if (relations.count(name)) {
            int childCount = 0;
            for (const auto& [child, father] : relations) {
                if (father == name) {
                    childCount++;
                }
            }
            cout << "Children: " << childCount << endl;
        } else {
            int grandchildCount = 0;
            for (const auto& [child, father] : relations) {
                if (relations.count(father) && relations[father] == name) {
                    grandchildCount++;
                }
            }
            cout << "Grandchildren: " << grandchildCount << endl;
        }
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
