#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
/*
int numeroCofres;
int oroMax;

void calcular(vector<pair<int, int>> c, int tiempoRestante, int n, int nCofres, int oro) {
	// Si no nos quedamos sin tiempo, calculamos el beneficio y añadimos el cofre
	if (tiempoRestante - (c[n].first * 3) >= 0) {
		if (oro + c[n].second > oroMax) {
			oroMax = oro + c[n].second;
			numeroCofres = nCofres + 1;
		}

		if(n < c.size() - 1)
			calcular(c, tiempoRestante - (c[n].first * 3), n + 1, nCofres + 1, oro + c[n].second);
	}

	// Prueba el resto de casos sin este cofre
	if (n < c.size() - 1)
		calcular(c, tiempoRestante, n + 1, nCofres, oro);
}

bool resuelveCaso() {
	int t, n;
	cin >> t >> n;
	if (!cin) return false;

	vector<pair<int, int>> cofres;
	for (int i = 0; i < n; i++) {
		int p, c;
		cin >> p >> c;
		cofres.push_back({ p, c });
	}
	oroMax = numeroCofres = 0;
	calcular(cofres, t, 0, 0, 0);
	cout << oroMax << "\n" << numeroCofres << "\n";
	cout << "----" << "\n";

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