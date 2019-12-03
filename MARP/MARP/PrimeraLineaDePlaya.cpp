#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

// ESTRATEGIA


// DEMOSTRACIÓN
/*
struct Edificio {
  int ini;
  int fin;
};

int numPasadizos(vector<int> edificios) {
  int c = 0;
  vector<bool> conectados(edificios.size(), false);
  for (int i = 0; i < edificios.size(); i++) {

  }
  
  return c;
}

bool resuelveCaso() {
  int n;
  cin >> n;
  if (n == 0) return false;

  vector<Edificio> edificios;
  for (int i = 0; i < n; i++) {
    int c, f;
    cin >> c >> f;
    edificios.push_back({ c, f });
  }

  sort(edificios.begin(), less<int>(Edificio::ini));
  cout << numPasadizos(edificios, puntosBroncos) << "\n";

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