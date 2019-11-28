#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

// ESTRATEGIA
// Ordenamos las personas y los esquis de menor a mayor
// y vamos asignando el menor esquí a la menor persona 
// hasta acabar.

// DEMOSTRACION
// Asignar a una persona un esquí mayor al dado:
	// La diferencia en ese caso puede ser menor, pero
	// alguna persona más adelante tendrá una diferencia
	// mayor que compensa o empeora el coste final.
// Asignar a una persona un esquí menor al dado:
	// Mismo caso que el anterior pero en la dirección
	// contraria.
/*
int diferencia(vector<int> personas, vector<int> esquis) {
	int sumaDiferencias = 0;
	for (int i = 0; i < personas.size(); i++) {
		sumaDiferencias += abs(personas[i] - esquis[i]);
	}
	return sumaDiferencias;
}

bool resuelveCaso() {
	int n;
	cin >> n;
	if (n == 0) return false;

	vector<int> personas;
	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		personas.push_back(p);
	}

	vector<int> esquis;
	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		esquis.push_back(p);
	}

	sort(personas.begin(), personas.end());
	sort(esquis.begin(), esquis.end());
	cout << diferencia(personas, esquis) << "\n";

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