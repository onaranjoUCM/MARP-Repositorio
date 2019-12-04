#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

// ESTRATEGIA


// DEMOSTRACIÓN

struct Pelicula {
  int hora;
  int duracion;
};

int numPasadizos(vector<Edificio>& edificios) {
  int p = 0;
  vector<bool> conectados(edificios.size(), false);
  for (int i = 0; i < edificios.size(); i++) {

  }

  return p;
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

  //sort(edificios.begin(), less<Edificio>());
  cout << numPasadizos(edificios) << "\n";

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