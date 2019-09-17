using namespace std;
#include <iostream>
#include <fstream>
#include <queue>
/*
struct usuario {
  int id;
  int periodo;
  int siguienteEntrega;
};

bool operator>(usuario const& a, usuario const& b) {
  return a.siguienteEntrega > b.siguienteEntrega || 
    (a.siguienteEntrega == b.siguienteEntrega && a.id > b.id);
}

bool resuelveCaso() {
  // Lee el numero de usuarios
	int n;
	cin >> n;
	if (n == 0)
		return false;

  // Llena la cola con los usuarios
  priority_queue<usuario, vector<usuario>, greater<usuario>> pq;
  for (int i = 0; i < n; i++) {
    int id;
    int periodo;
    cin >> id;
    cin >> periodo;
    pq.push({ id, periodo, periodo });
  }

  // Lee el numero de envios
  int nEnvios;
  cin >> nEnvios;

  // Calcula y devuelve la solucion
  while (nEnvios--) {
    usuario u = pq.top();
    cout << u.id << "\n";
    u.siguienteEntrega += u.periodo;
    pq.pop();
    pq.push(u);
  }
  cout << "---" << "\n";

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