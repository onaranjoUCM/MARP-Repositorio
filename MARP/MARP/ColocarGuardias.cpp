using namespace std;

#include <iostream>
#include <fstream>
#include "Grafo.h"
/*
bool bipartito(Grafo& g, int v, bool colorAnterior, vector<bool>& vis, vector<bool>& color, int & n1, int & n2) {
	if (!vis[v]) {
		vis[v] = true;
		color[v] = !colorAnterior;

		if (colorAnterior) n1++;
		else n2++;

		for (int e : g.ady(v)) {
			if (!bipartito(g, e, color[v], vis, color, n1, n2))
				return false;
		}

		return true;
	}
	else {
		return !(colorAnterior == color[v]);
	}
}

bool resuelveCaso() {
	int v, a;
	cin >> v >> a;

	if (!cin)
		return false;

	Grafo grafo = Grafo(v);
	for (int i = 0; i < a; i++) {
		int a1, a2;
		cin >> a1 >> a2;
		grafo.ponArista(a1 - 1, a2 - 1);
	}

	vector<bool> visitados;
	for (int i = 0; i < v; i++)
		visitados.push_back(false);

	vector<bool> color;
	for (int i = 0; i < v; i++)
		color.push_back(false);

	int min = 0;
	bool solucion = true;
	for (int i = 0; i < v; i++) {
		if (!visitados[i]) {
			int n1 = 0;
			int n2 = 0;
			if (!bipartito(grafo, i, false, visitados, color, n1, n2)) {
				solucion = false;
				break;
			}
			(n1 < n2) ? min += n1 : min += n2;
		}
	}

	if (solucion)
		cout << min << "\n";
	else
		cout << "IMPOSIBLE" << "\n";

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