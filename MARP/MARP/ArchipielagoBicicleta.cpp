#include <iostream>
#include <fstream>
#include <queue>
#include "GrafoValorado.h"
#include "IndexPQ.h"

using namespace std;

class QuickFindUF {
  vector<int> id;

public:
  QuickFindUF(int n) {
    id = vector<int>(n);
    for (int i = 0; i < n; i++)
      id[i] = i;
  }

  int find(int p) {
    return id[p];
  }

  void union_(int p, int q) {
    int pid = id[p];
    int qid = id[q];
    for (int i = 0; i < id.size(); i++)
      if (id[i] == pid) id[i] = qid;
  }
};

class KruskalMST {
  queue<Arista<int>> mst = queue<Arista<int>>();

  KruskalMST(GrafoValorado<int> G) {
    IndexPQ<Arista<int>> pq = IndexPQ<Arista<int>>(G.E());
    QuickFindUF uf = QuickFindUF(G.V());

    while (!pq.empty() && mst.size() < G.V() - 1) {
      Arista<int> e = pq.top(); pq.pop();
      int v = e.either(), w = e.other(v);
      if (!uf.find(v, w)) {
        uf.union_(v, w);
        mst.push(e);
      }
    }
  }
  public Iterable<Edge> edges()
  {
    return mst;
  }
}

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

  if (dij.hayCamino(v-1)) {
    cout << "SI" << "\n";
  } else {
    cout << "NO" << "\n";
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