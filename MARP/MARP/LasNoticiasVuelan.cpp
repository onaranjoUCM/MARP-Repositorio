#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>
/*
using namespace std;
using Grafo = vector<vector<int>>;

class Noticias {
private:
	vector<bool> marcado;
	vector<int> componente;
	vector<int> tamanos;

	int dfs(Grafo const& g, int v) {
		marcado[v] = true;
		int tam = 1;
		componente[v] = tamanos.size();
		for (int w : g[v]) {
			if (!marcado[w])
				tam += dfs(g, w);
		}
		return tam;
	}

public:
	Noticias(Grafo const& g) : marcado(g.size(), false), componente(g.size()) {
		for (int i = 0; i < g.size(); i++) {
			if (!marcado[i]) {
				int tam = dfs(g, i);
				tamanos.push_back(tam);
			}
		}
	}

	int tamano_v(int v) {
		return tamanos[componente[v]];
	}
};

bool resuelveCaso() {
	int n, m;
	cin >> n >> m;

	if (!cin)
		return false;

	Grafo g(n);

	int tam, u, v;
	while (m--) {
		cin >> tam;
		if (tam > 0) {
			cin >> u;
			u--;
			for (int i = 1; i < tam; i++) {
				cin >> v;
				v--;
				g[u].push_back(v);
				g[v].push_back(u);
				u = v;
			}
		}
	}

	Noticias noticias = Noticias(g);
	for (int i = 0; i < n; i++) {
		cout << noticias.tamano_v(i) << " ";
	}

	cout << "\n";

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