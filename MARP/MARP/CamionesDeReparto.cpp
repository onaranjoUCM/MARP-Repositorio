#include <iostream>
#include <fstream>
#include "GrafoValorado.h"
#include "IndexPQ.h"

using namespace std;
const int INF = 1000000000;
/*
class DijkstraSP {
private:
  vector<int> distTo;
  IndexPQ<int> pq;
  int a;

  void relax(Arista<int> const& e) {
    int w = e.uno(), v = e.otro(w);
    if (distTo[w] > distTo[v] + e.valor() && e.valor() >= a) {
      distTo[w] = distTo[v] + e.valor();
      pq.update(w, distTo[w]);
    }
  }

public:
  DijkstraSP(GrafoValorado<int> const& G, int s, int a_)
    : distTo(G.V(), INF), pq(G.V()), a(a_) {
    distTo[s] = 0;
    pq.push(s, 0);
    while (!pq.empty()) {
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

		DijkstraSP dij(g, w - 1, a);

		if (dij.hayCamino(v-1)) {
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
}*/