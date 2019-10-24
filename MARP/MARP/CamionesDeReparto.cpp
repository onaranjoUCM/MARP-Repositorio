#include <iostream>
#include <fstream>
#include "GrafoValorado.h"
#include "IndexPQ.h"

using namespace std;

class DijkstraSP {
private:
	vector<int> distTo;
	IndexPQ<int> pq;
	
	void stress(Arista<int> const& e) {
		int v = e.uno(), w = e.otro(e.uno());
		if (distTo[w] < distTo[v] + e.valor()) {
			distTo[w] = distTo[v] + e.valor();
			pq.update(w, distTo[w]);
		}
	}

public:
	DijkstraSP(GrafoValorado<int> const& G, int s)
		: distTo(G.V(), 0), pq(G.V()) {
		distTo[s] = 0;
		pq.push(s, 0);
		while (!pq.empty()) {
			int v = pq.top().elem;
			pq.pop();
			for (auto e : G.ady(v))
				stress(e);
		}
	}

	bool hayCamino(int v) const {
		return distTo[v] != 0;
	}

	int valor(int v) const {
		return distTo[v];
	}
};

bool resuelveCaso() {
	int v, e;
	cin >> v >> e;
	if (!cin) return false;

	GrafoValorado<int> g(v);
	for (int i = 0; i < e; i++) {
		int v, w, a;
		cin >> v >> w >> a;
		g.ponArista({ v - 1, w - 1, a });
	}

	int k; 
	cin >> k;
	for (int i = 0; i < k; i++) {
		int v, w, a;
		cin >> v >> w >> a;

		DijkstraSP dij(g, w - 1);

		if (dij.hayCamino(v-1) && dij.valor(v-1) >= a) {
			cout << "SI" << "\n";
		} else {
			cout << "NO" << "\n";
		}
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