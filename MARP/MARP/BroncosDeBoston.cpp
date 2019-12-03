#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

// ESTRATEGIA
// Como no nos interesa el n�mero de victorias, ordenamos
// los puntos rivales de menor a mayor y los de los Broncos
// al rev�s, maximizando las diferencias pero solo tomando
// las positivas.

// DEMOSTRACI�N
// Usamos una puntuaci�n mayor a la propuesta: Imposible,
	// la puntuaci�n propuesta es siempre la mayor disponible

// Usamos una puntuaci�n menor a la propuesta: La diferencia
	// de puntos es menor si la puntuaci�n rival es menor,
	// o mayor si la puntuaci�n rival es mayor, pero las
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