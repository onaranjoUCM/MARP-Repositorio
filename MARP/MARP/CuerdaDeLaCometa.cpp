#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int formas;
int min;
int costeMin;

void nFormas(vector<pair<int, int>> c, int maxLong, int l, int n) {
	int longitud = l;
	if (l + c[n].first < maxLong && n < c.size() - 1) {
		nFormas(c, maxLong, l + c[n].first, n + 1);
		nFormas(c, maxLong, l, n + 1);
	} else if (l + c[n].first > maxLong && n < c.size() - 1) {
		nFormas(c, maxLong, l, n + 1);
	} else if (l + c[n].first == maxLong) {
		formas++;
		if (n < c.size() - 1)
			nFormas(c, maxLong, l, n + 1);
	}
}

void nMinimo(vector<pair<int, int>> c, int maxLong, int l, int n, int nOperandos) {
	int longitud = l;
	if (l + c[n].first < maxLong && n < c.size() - 1) {
		nMinimo(c, maxLong, l + c[n].first, n + 1, nOperandos + 1);
		nMinimo(c, maxLong, l, n + 1, nOperandos);
	}
	else if (l + c[n].first > maxLong && n < c.size() - 1) {
		nMinimo(c, maxLong, l, n + 1, nOperandos);
	}
	else if (l + c[n].first == maxLong) {
		if (nOperandos + 1 < min)
			min = nOperandos + 1;
		
		if (n < c.size() - 1)
			nMinimo(c, maxLong, l, n + 1, nOperandos);
	}
}

void costeMinimo(vector<pair<int, int>> c, int maxLong, int l, int n, int nOperandos) {
	int longitud = l;
	if (l + c[n].first < maxLong && n < c.size() - 1) {
		nMinimo(c, maxLong, l + c[n].first, n + 1, nOperandos + 1);
		nMinimo(c, maxLong, l, n + 1, nOperandos);
	}
	else if (l + c[n].first > maxLong && n < c.size() - 1) {
		nMinimo(c, maxLong, l, n + 1, nOperandos);
	}
	else if (l + c[n].first == maxLong) {
		if (nOperandos + 1 < costeMin)
			costeMin = nOperandos + 1;

		if (n < c.size() - 1)
			nMinimo(c, maxLong, l, n + 1, nOperandos);
	}
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

  formas = 0;
  min = n;
  costeMin = 100000000;
  nFormas(cordeles, l, 0, 0);
  if (formas) {
	  nMinimo(cordeles, l, 0, 0, 0);
	  costeMinimo(cordeles, l, 0, 0, costeMin);
	  cout << "SI " << formas
	  << " " << min
	  << " " << costeMin
	  << "\n";
  } else {
	  cout << "NO" << "\n";
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
}