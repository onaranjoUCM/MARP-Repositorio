#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

// ESTRATEGIA
// Como no nos interesa el número de victorias, ordenamos
// los puntos rivales de menor a mayor y los de los Broncos
// al revés, maximizando las diferencias pero solo tomando
// las positivas.

// DEMOSTRACIÓN
// Usamos una puntuación mayor a la propuesta: Imposible,
	// la puntuación propuesta es siempre la mayor disponible

// Usamos una puntuación menor a la propuesta: La diferencia
	// de puntos es menor si la puntuación rival es menor,
	// o mayor si la puntuación rival es mayor, pero las
	// derrotas las ignoramos.
/*
int diferencia(vector<int> puntosRivales, vector<int> puntosBroncos) {
	int sumaDiferencias = 0;
	for (int i = 0; i < puntosRivales.size(); i++) {
		if (puntosBroncos[i] > puntosRivales[i])
			sumaDiferencias += puntosBroncos[i] - puntosRivales[i];
	}
	return sumaDiferencias;
}

bool resuelveCaso() {
	int n;
	cin >> n;
	if (n == 0) return false;

	vector<int> puntosRivales;
	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		puntosRivales.push_back(p);
	}

	vector<int> puntosBroncos;
	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		puntosBroncos.push_back(p);
	}

	sort(puntosRivales.begin(), puntosRivales.end());
	sort(puntosBroncos.begin(), puntosBroncos.end(), greater<int>());
	cout << diferencia(puntosRivales, puntosBroncos) << "\n";

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