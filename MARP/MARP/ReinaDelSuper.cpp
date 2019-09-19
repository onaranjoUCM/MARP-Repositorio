using namespace std;
#include <iostream>
#include <fstream>
#include <queue>
/*
struct caja {
	int id;
	int tiempoOcupada;
};

bool operator>(caja const& a, caja const& b) {
  return a.tiempoOcupada > b.tiempoOcupada ||
	(a.tiempoOcupada == b.tiempoOcupada && a.id > b.id);
}

bool resuelveCaso() {
  // Lee el numero de usuarios
	int n;
	cin >> n;
	int c;
	cin >> c;
	if (n == c && c == 0)
		return false;

  // Llena la cola con los usuarios
  priority_queue<caja, vector<caja>, greater<caja>> pq;
  for (int i = 1; i <= n; i++) {
	  pq.push({ i, 0 });
  }

  for (int i = 0; i < c; i++) {
	int tiempo;
	cin >> tiempo;
	caja caja = pq.top();
	pq.pop();
	pq.push({ caja.id, caja.tiempoOcupada + tiempo });
  }

  cout << pq.top().id << "\n";

	return true;
}

int main() {
	// ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
	std::ifstream in("casos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

	while (resuelveCaso());

	// para dejar todo como estaba al principio
#ifndef DOMJUDGE
	std::cin.rdbuf(cinbuf);
	system("PAUSE");
#endif
	return 0;
}*/