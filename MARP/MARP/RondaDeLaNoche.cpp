using namespace std;

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include "Grafo.h"

using namespace std;

/*
vector<vector<bool>> marked;
vector<vector<int>> distTo;

void bfs(vector<vector<bool>> const& m, pair<int, int> s) {
  queue<pair<int, int>> q;
  marked = vector<vector<bool>>(m.size(), vector<bool>(m[0].size(), false));
  distTo = vector<vector<int>>(m.size(), vector<int>(m[0].size(), 0));

	marked[s.first][s.second] = true;
  distTo[s.first][s.second] = 0;
	q.push(s);

	while (!q.empty()) {
		pair<int, int> v = q.front(); q.pop();

    // Abajo
		if (v.first + 1 < m.size()) {
			if (!marked[v.first + 1][v.second] && m[v.first + 1][v.second]) {
				distTo[v.first + 1][v.second] = distTo[v.first][v.second] + 1;
				marked[v.first + 1][v.second] = true;
				q.push({ v.first + 1, v.second });
			}
		}

    // Arriba
		if (v.first - 1 > 0) {
			if (!marked[v.first - 1][v.second] && m[v.first - 1][v.second]) {
				distTo[v.first - 1][v.second] = distTo[v.first][v.second] + 1;
				marked[v.first - 1][v.second] = true;
				q.push({ v.first - 1, v.second });
			}
		}

    // Derecha
		if (v.second + 1 < m[0].size()) {
			if (!marked[v.first][v.second + 1] && m[v.first][v.second + 1]) {
				distTo[v.first][v.second + 1] = distTo[v.first][v.second] + 1;
				marked[v.first][v.second + 1] = true;
				q.push({ v.first, v.second + 1 });
			}
		}

    // Izquierda
		if (v.second - 1 >= 0) {
			if (!marked[v.first][v.second - 1] && m[v.first][v.second - 1]) {
				distTo[v.first][v.second - 1] = distTo[v.first][v.second] + 1;
				marked[v.first][v.second - 1] = true;
				q.push({ v.first, v.second - 1 });
			}
		}
	}
}

bool resuelveCaso() {
  int n;
  cin >> n;

	for (int i = 0; i < n; i++) {
    int ancho, alto;
    cin >> ancho >> alto;
		vector<vector<bool>> mapa(alto, vector<bool>(ancho, true));

		// Introduce muros, entrada y salida
    string line;
    vector<string> lines;
		pair<int, int> e, p;

		for (int al = 0; al < alto; al++) {
      cin >> line;
      lines.push_back(line);
			for (int an = 0; an < ancho; an++) {
        char c = line[an];

        // Entrada
				if (c == 'E') {           
					e = { al, an };
          
        // Salida
				} else if (c == 'P') {    
					p = { al, an };

        // Muro
				} else if (c == '#') {    
          mapa[al][an] = false;
				}
			}
		}

    // Introduce sensores
    for (int al = 0; al < alto; al++) {
      for (int an = 0; an < ancho; an++) {
        char c = lines[al][an];

        if (c != '.' && c != 'E' && c != 'P' && c != '#') {
          int n = c - 48;
          bool arr, aba, izq, der;
          arr = aba = izq = der = true;
          mapa[al][an] = false;

          for (int i = 1; i <= n; i++) {
            if (al + i < alto) {
              if (mapa[al + i][an] && aba)
                mapa[al + i][an] = false;
              else
                aba = false;
            }

            if (al - i >= 0) {
              if (mapa[al - i][an] && arr)
                mapa[al - i][an] = false;
              else
                arr = false;
            }

            if (an + i < ancho) {
              if (mapa[al][an + i] && der)
                mapa[al][an + i] = false;
              else
                der = false;
            }

            if (an - i >= 0) {
              if (mapa[al][an - i] && izq)
                mapa[al][an - i] = false;
              else
                izq = false;
            }
          }
        }
      }
    }

    for (int al = 0; al < alto; al++) {
      for (int an = 0; an < ancho; an++) {
        cout << mapa[al][an];
      }
      cout << "\n";
    }

		// Busca el camino
		bfs(mapa, e);
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