#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// ESTRATEGIA
// Colocamos un parche al comienzo del primer agujero.
// Despues buscamos el primer agujero que ya no tape
// ese parche y repetimos el proceso.

// DEMOSTRACION
// Casos posibles:
	// Colocar después del nuestro: Imposible, el
		// agujero anterior queda destapado
	// Colocar en el mismo lugar: Solucion propuesta
	// Colocar antes del nuestro: Equivalente a la
		// propuesta ya que el número de parches no cambia
/*
int numeroParches(vector<int> agujeros, int l) {
	int nParches = 1;
	int parcheAnterior = agujeros[0];
	for (int i = 1; i < agujeros.size(); i++) {
		if (agujeros[i] > parcheAnterior + l) {
			nParches++;
			parcheAnterior = agujeros[i];
		}
	}
	return nParches;
}

bool resuelveCaso() {
	int n, l;
	cin >> n >> l;
	if (!cin) return false;

	vector<int> agujeros;
	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		agujeros.push_back(p);
	}

	cout << numeroParches(agujeros, l) << "\n";

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