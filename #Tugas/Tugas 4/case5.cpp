#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> lines;

    int sum = 0;
    for (int i = 10; i >= 2; i -= 2) {
        sum += i;
        string line = "10 + ";
        for (int j = 10; j > i; j -= 2) {
            line += to_string(j) + " + ";
        }
        line += to_string(i) + " = " + to_string(sum);
        lines.push_back(line);
    }

    for (int i = lines.size() - 1; i >= 0; --i) {
        cout << lines[i] << endl;
    }

    cout << "----------" << endl;
    cout << "110" << endl;

    return 0;
}
