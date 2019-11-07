#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
/*
int formas;
int numeroMin;
int costeMin;

void calcular(vector<pair<int, int>> c, int maxLong, int l, int n, int nOperandos, int coste) {
	int longitud = l;
	if (l + c[n].first < maxLong && n < c.size() - 1) {
		calcular(c, maxLong, l + c[n].first, n + 1, nOperandos + 1, coste + c[n].second);
		calcular(c, maxLong, l, n + 1, nOperandos, coste);
	} else if (l + c[n].first > maxLong && n < c.size() - 1) {
		calcular(c, maxLong, l, n + 1, nOperandos, coste);
	} else if (l + c[n].first == maxLong) {
		// Calcula numero de formas de resolverlo
		formas++;

		// Calcula el numero minimo de cordeles usados
		if (nOperandos + 1 < numeroMin)
			numeroMin = nOperandos + 1;

		// Calcula el coste minimo
		if (coste + c[n].second < costeMin) {
			costeMin = coste + c[n].second;
		}

		// Prueba los siguientes casos
		if (n < c.size() - 1)
			calcular(c, maxLong, l, n + 1, nOperandos, coste);

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
  numeroMin = n;
  costeMin = 100000000;
  calcular(cordeles, l, 0, 0, 0, 0);

  if (formas) {
	  cout << "SI " << formas
	  << " " << numeroMin
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
}*/