#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;
int INF = 1000000000;

int maneras(vector<pair<int, int>> const& C, int L) {
  int n = C.size() - 1;
  vector<vector<int>> cordeles(n + 1, vector<int>(L + 1, 0));
  cordeles[0][0] = 0;

  for (int i = 1; i <= n; ++i) {
    cordeles[i][0] = 0;
    for (int j = 1; j <= L; ++j) {
      if (C[i].first > j)
        cordeles[i][j] = cordeles[i - 1][j];
      else if (C[i].first < j)
        cordeles[i][j] = max(cordeles[i - 1][j], cordeles[i - 1][j - C[i].first]);
      else
        cordeles[i][j]++;
    }
  }
  return cordeles[n][L];
}

int minimoNumero(vector<pair<int, int>> const& C, int L) {
  int n = C.size() - 1;
  vector<vector<int>> cordeles(n + 1, vector<int>(L + 1, INF));
  cordeles[0][0] = 0;
  
  for (int i = 1; i <= n; ++i) {
    cordeles[i][0] = 0;
    for (int j = 1; j <= L; ++j) {
      if (C[i].first > j)
        cordeles[i][j] = cordeles[i - 1][j];
      else
        cordeles[i][j] = min(cordeles[i - 1][j], cordeles[i][j - C[i].first] + 1);
    }
  }
  return cordeles[n][L];
}

int minimoCoste(vector<pair<int, int>> const& C, int L) {
  int n = C.size() - 1;
  vector<vector<int>> cordeles(n + 1, vector<int>(L + 1, INF));
  cordeles[0][0] = 0;

  for (int i = 1; i <= n; ++i) {
    cordeles[i][0] = 0;
    for (int j = 1; j <= L; ++j) {
      if (C[i].first > j)
        cordeles[i][j] = cordeles[i - 1][j];
      else
        cordeles[i][j] = min(cordeles[i - 1][j], cordeles[i][j - C[i].first] + C[i].second);
    }
  }
  return cordeles[n][L];
}

bool resuelveCaso() {
  int n, l;
  cin >> n >> l;
  if (!cin) return false;

  vector<pair<int, int>> cordeles;
  for (int i = 0; i < n; i++) {
	  int l, c;
	  cin >> l >> c;
	  cordeles.push_back({ l, c });
  }

  int m = maneras(cordeles, l);
  if (m != 0)
    cout << "SI " << m << " " 
    << minimoNumero(cordeles, l) << " " 
    << minimoCoste(cordeles, l) << "\n";
  else
    cout << "NO" << "\n";

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