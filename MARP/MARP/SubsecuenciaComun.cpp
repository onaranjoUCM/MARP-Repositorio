#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
/*
int subsecuencia(string A, string B) {
  int n = P.size() - 1;
  int size = max(A.length(), B.length());
  vector<vector<int>> subsec(n + 1, vector<int>(size + 1, 0));
  // rellenar la matriz
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= T; ++j) {
      if (3*P[i] > j)
        subsec[i][j] = subsec[i - 1][j];
      else
        subsec[i][j] = max(cofres[i - 1][j], cofres[i - 1][j - 3*P[i]] + V[i]);
    }
  }
  valor = cofres[n][T];
  return 0;
}

bool resuelveCaso() {
  string A, B;
  cin >> A >> B;
  if (!cin) return false;

  cout << subsecuencia(A, B) << "\n";

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