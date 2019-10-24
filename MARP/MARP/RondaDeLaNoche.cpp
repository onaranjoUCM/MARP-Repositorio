using namespace std;

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include "Grafo.h"

using namespace std;
vector<vector<bool>> marked;
vector<vector<int>> distTo;
/*
void bfs(vector<vector<string>> const& m, pair<int, int> e) {
	queue<pair<int, int>> q;
	distTo[e.first][e.second] = 0;
	marked[e.first][e.second] = true;
	q.push(e);

	while (!q.empty()) {
		pair<int, int> v = q.front(); q.pop();

		if (v.first + 1 < m.size()) {
			if (!marked[v.first + 1][v.second] && m[v.first + 1][v.second] != "#") {
				distTo[v.first + 1][v.second] = distTo[v.first][v.second] + 1;
				marked[v.first + 1][v.second] = true;
				q.push({ v.first + 1, v.second });
			}
		}

		if (v.first - 1 > 0) {
			if (!marked[v.first - 1][v.second] && m[v.first + 1][v.second] != "#") {
				distTo[v.first - 1][v.second] = distTo[v.first][v.second] + 1;
				marked[v.first - 1][v.second] = true;
				q.push({ v.first - 1, v.second });
			}
		}

		if (v.second + 1 < m[0].size()) {
			if (!marked[v.first][v.second + 1] && m[v.first][v.second + 1] != "#") {
				distTo[v.first][v.second + 1] = distTo[v.first][v.second] + 1;
				marked[v.first][v.second + 1] = true;
				q.push({ v.first, v.second + 1 });
			}
		}

		if (v.second - 1 >= 0) {
			if (!marked[v.first][v.second - 1] && m[v.first][v.second - 1] != "#") {
				distTo[v.first][v.second - 1] = distTo[v.first][v.second] + 1;
				marked[v.first][v.second - 1] = true;
				q.push({ v.first, v.second - 1 });
			}
		}
	}
}

bool resuelveCaso() {
	int n, ancho, alto;
	cin >> n >> ancho >> alto;

	for (int i = 0; i < n; i++) {
		vector<vector<char>> m;

		// Carga la matriz
		for (int j = 0; j < alto; j++) {
			string s;
			cin >> s;
			for (int k = 0; k < s.length(); k++)
				m[j].push_back(s[k]);
		}

		// Introduce sensores, entrada y salida
		pair<int, int> e, p;
		for (int j = 0; j < alto; j++) {
			for (int k = 0; k < ancho; k++) {
				char c = m[j][k];
				if (c == 'E') { 
					e = { j, k };
				} else if (c == 'P') { 
					p = { j, k };
				} else if (c != '.' && c != '#') {
					m[j][k] = '#';
					for (int i = 0; i < (int)c; i++) {
						m[j+i][k] = '#';
						m[j-i][k] = '#';
						m[j][k+i] = '#';
						m[j][k-i] = '#';
					}
				}
			}
		}

		// Busca el camino
		bfs(m, e);
		int pathLenght = distTo[p.first][p.second];
		if (pathLenght == 0)
			cout << "NO" << "\n";
		else
			cout << pathLenght << "\n";
	}	

	return true;
}

int main() {
#ifndef DOMJUDGE
	std::ifstream in("casos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

	while (resuelveCaso());

#ifndef DOMJUDGE
	std::cin.rdbuf(cinbuf);
	system("PAUSE");
#endif

	return 0;
}*/