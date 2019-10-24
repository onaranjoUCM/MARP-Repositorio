#include <iostream>
#include <fstream>
#include "GrafoDirigidoValorado.h"
#include "IndexPQ.h"

using namespace std;
/*
const int INF = 1000000000;

class DijkstraSP {
private:
	vector<int> distTo;
	IndexPQ<int> pq;

	void relax(AristaDirigida<int> const& e) {
		int v = e.from(), w = e.to();
		if (distTo[w] > distTo[v] + e.valor()) {
			distTo[w] = distTo[v] + e.valor();
			pq.update(w, distTo[w]);
		}
	}
public:
	DijkstraSP(GrafoDirigidoValorado<int> const& G, int s) 
		: distTo(G.V(), INF), pq(G.V()) {
		distTo[s] = 0;
		pq.push(s, 0);
		while (!pq.empty())	{
			int v = pq.top().elem;
			pq.pop();
			for (auto e : G.ady(v))
				relax(e);
		}
	}

	bool hayCamino(int v) const {
		return distTo[v] != INF;
	}

	int valor(int v) const {
		return distTo[v];
	}
};

bool resuelveCaso() {
	int n, s, t, p;
	cin >> n >> s >> t >> p;
	if (!cin) return false;

	GrafoDirigidoValorado<int> g(n);
	for (int i = 0; i < p; i++) {
		int v, w, c;
		cin >> v >> w >> c;
		g.ponArista({ w - 1, v - 1, c });
	}

	int contador = 0;
	DijkstraSP dij(g, s - 1);
	for (int i = 0; i < n; i++) {
		if (dij.hayCamino(i) && i != s-1)
			if (dij.valor(i) <= t)
				contador++;
	}

	cout << contador << "\n";

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