#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

// ESTRATEGIA


// DEMOSTRACIÓN

/*
int repartePilas(vector<int> pilas, int v) {
  int contador = 0;
  
  return contador;
}

bool resuelveCaso() {
  int n, v;
  cin >> n >> v;
  if (n == 0) return false;

  vector<int> pilas;
  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;
    pilas.push_back(p);
  }

  sort(pilas.begin(), pilas.end());
  cout << repartePilas(pilas, v) << "\n";

  return true;
}

int main() {
#ifndef DOMJUDGE
  std::ifstream in("casos.txt");
  auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

  int n;
  cin >> n;
  while (n--)
    resuelveCaso();

#ifndef DOMJUDGE
  std::cin.rdbuf(cinbuf);
  system("PAUSE");
#endif

  return 0;
}*/