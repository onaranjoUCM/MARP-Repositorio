#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;
int INF = 1000000000;

long long int posible(vector<int> const& P, int V) {
  int n = P.size() - 1;
  vector<vector<bool>> puntuaciones(n + 1, vector<bool>(V + 1, false));
  puntuaciones[0][0] = true;

  for (int i = 1; i <= n; ++i) {
    puntuaciones[i][0] = true;
    for (int j = 1; j <= V; ++j) {
      if (P[i] > j)
        puntuaciones[i][j] = puntuaciones[i - 1][j];
      else
        puntuaciones[i][j] = puntuaciones[i - 1][j]
        || puntuaciones[i][j - P[i]]
        || puntuaciones[i - 1][j - P[i]];
    }
  }

  return puntuaciones[n][V];
}

int minimoNumero(vector<int> const& P, int V, vector<bool>& cuales) {
  int n = P.size() - 1;
  vector<vector<int>> puntuaciones(n + 1, vector<int>(V + 1, INF));
  puntuaciones[0][0] = 0;

  for (int i = 1; i <= n; ++i) {
    puntuaciones[i][0] = 0;
    for (int j = 1; j <= V; ++j) {
      if (P[i] > j)
        puntuaciones[i][j] = puntuaciones[i - 1][j];
      else
        puntuaciones[i][j] = min(puntuaciones[i][j - P[i]] + 1,
          min(puntuaciones[i - 1][j], puntuaciones[i - 1][j - P[i]] + 1));
    }
  }

  return puntuaciones[n][V];
}

bool resuelveCaso() {
  int v, n;
  cin >> v >> n;
  if (!cin) return false;

  vector<int> puntuaciones;
  puntuaciones.push_back(0);
  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;
    puntuaciones.push_back(p);
  }

  if (posible(puntuaciones, v)) {
    vector<bool> cuales(n + 1, false);
    cout << minimoNumero(puntuaciones, v, cuales) << ": ";
    for (int i = 0; i <= n; i++) {
      if (cuales[i]) {
        cout << puntuaciones[i] << " ";
      }
    }
    cout << "\n";
  } else
    cout << "Imposible" << "\n";

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
}