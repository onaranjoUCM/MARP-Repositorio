#include <iostream>
#include <fstream>
#include <queue>
#include "GrafoValorado.h"
#include "IndexPQ.h"

using namespace std;

/*
const int INF = 1000000000;

class PrimMST {
private:
  vector<Arista<int>> edgeTo; // shortest edge from tree vertex
  vector<double> distTo; // distTo[w] = edgeTo[w].weight()
  vector<bool> marked; // true if v on tree
  IndexPQ<double> pq; // eligible crossing edges

public:
  PrimMST(GrafoValorado<int> G) 
    : edgeTo(G.V()), distTo(G.V(), INF), marked(G.V(), false), pq(G.V()) {
    distTo[0] = 0.0;
    pq.push(0, 0.0); // Initialize pq with 0, weight 0.

    while (!pq.empty()) {
      visit(G, pq.top().elem); 
      pq.pop(); // Add closest vertex to tree.
    }
  }

  // Add v to tree; update data structures.
  void visit(GrafoValorado<int> G, int v) { 
    marked[v] = true;
    for (Arista<int> e : G.ady(v)) {
      int w = e.otro(v);
      if (marked[w]) continue; // v-w is ineligible.
      if (e.valor() < distTo[w]) { // Edge e is new best connection from tree to w.
        edgeTo[w] = e;
        distTo[w] = e.valor();
        pq.update(w, distTo[w]);
      }
    }
  }

  int valorArbol() {
    int contador = 0;
    for (double e : distTo) {
        contador += e;
    }
    if (contador >= INF)
      return 0;
    else
      return contador;
  }
};

bool resuelveCaso() {
  int i, p;
  cin >> i >> p;
  if (!cin) return false;

  GrafoValorado<int> g(i);
  for (int i = 0; i < p; i++) {
    int v, w, c;
    cin >> v >> w >> c;
    g.ponArista({ v - 1, w - 1, c });
  }

  PrimMST prim(g);
  
  int v = prim.valorArbol();
  if (!v)
    cout << "No hay puentes suficientes" << "\n";
  else
    cout << v << "\n";
  
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