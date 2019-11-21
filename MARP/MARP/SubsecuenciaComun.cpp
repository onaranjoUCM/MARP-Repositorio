#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
/*
int subsecuencia(string A, string B) {
  vector<vector<int>> subsec(A.length() + 1, vector<int>(B.length() + 1, 0));
  for (int i = 1; i <= A.length(); i++) {
    for (int j = 1; j <= B.length(); j++) {
	  if (A[i] == B[j])
		subsec[i][j] = subsec[i - 1][j - 1] + 1;
	  else
        subsec[i][j] = max(subsec[i - 1][j], subsec[i][j - 1]);
    }
  }
  return subsec[A.length()][B.length()] - 1;
}

bool resuelveCaso() {
  string A, B;
  cin >> A >> B;
  if (!cin) return false;

  A = " " + A;
  B = " " + B;
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