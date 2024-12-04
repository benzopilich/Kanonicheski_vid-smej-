#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int n;
    in >> n;

    vector<vector<int>> graph(n, vector<int>(n));
    vector<int> otec(n, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            in >> graph[i][j];
            if (graph[i][j] == 1) {
                otec[j] = i + 1;
            }
        }
    }

    for (int p : otec) {
        out << p << " ";
    }

    in.close();
    out.close();

    return 0;
}
