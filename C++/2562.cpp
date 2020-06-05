//2562	Tipos Analógimôn	Accepted	C++17	0.920	23/05/2020 20:59:28
#include <bits/stdc++.h>

using namespace std;

int main() {

    int m, n;
    while (cin >> m >> n) {
        vector<int> v[m];   

        while(n--) {
            int a, b;
            cin >> a >> b;

            v[a - 1].push_back(b - 1);
        }

        int e;
        cin >> e;

        int actual = e - 1;
        queue<int> Q;
        Q.push(actual);
        int contador = 0;
        vector<bool> visited (m, false);

        while (!Q.empty()) {
            actual = Q.front();
            Q.pop();

            if (visited[actual])
                continue;

            contador++;
            visited[actual] = true;

            for (auto neigh : v[actual]) {
                Q.push(neigh);
            }
        }
        
        cout << contador << endl;

    }

    return 0;
}