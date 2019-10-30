using namespace std;

#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
using Grafo = vector<vector<bool>>;

class Petroleo {
private:
  vector<bool> marcado;
  vector<int> componente;
  vector<int> tamanos;

  int dfs(Grafo const& g, int v) {
    marcado[v] = true;
    int tam = 1;
    componente[v] = tamanos.size();
    for (int w : g[v]) {
      if (!marcado[w])
        tam += dfs(g, w);
    }
    return tam;
  }

public:
  Petroleo(Grafo const& g) : marcado(g.size(), false), componente(g.size()) {
    for (int i = 0; i < g.size(); i++) {
      if (!marcado[i]) {
        int tam = dfs(g, i);
        tamanos.push_back(tam);
      }
    }
  }

  int tamano_v(int v) {
    return tamanos[componente[v]];
  }

  int tamano_max() {
    int max = 0;
    for (int i = 0; i < tamanos.size(); i++) {
      int t = tamano_v(i);
      if (t > max) max = t;
    }
    return max;
  }
};

bool resuelveCaso() {
  int f, c;
  cin >> f >> c;

  if (!cin)
    return false;

  Grafo mapa;
  for (int i = 0; i < f; i++) {
    cin.get();
    mapa.push_back(vector<bool>());
    for (int j = 0; j < c; j++) {
      char c = cin.get();
      if (c == '#') 
        mapa[i].push_back(true);
      else
        mapa[i].push_back(false);
    }
  }

  Petroleo p = Petroleo(mapa);
  cout << p.tamano_max() << " ";

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int fil, col;
    cin >> fil >> col;
    mapa[fil - 1][col - 1] = true;
    p = Petroleo(mapa);
    cout << p.tamano_max() << " ";
  }

  cout << "\n";

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