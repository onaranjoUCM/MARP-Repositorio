using namespace std;
#include <iostream>
#include <fstream>
#include <queue>

struct usuario {
	int id;
	int periodo;
	int siguienteEntrega;

	usuario(int i, int p, int s) {
		id = i;
		periodo = p;
		siguienteEntrega = s;
	};
};

bool operator <(usuario const& a, usuario const& b) {
  return a.siguienteEntrega < b.siguienteEntrega || 
    (a.siguienteEntrega == b.siguienteEntrega && a.id < b.id);
}

void resolver(priority_queue<usuario, vector<usuario>, less<vector<usuario>::value_type>>& pq, int nEnvios) {
  int contador = 0;

  while (contador < nEnvios) {
    usuario u = pq.top();
    cout << u.id << "\n";
    u.siguienteEntrega += u.periodo;
    pq.pop();
    pq.push(u);
    contador++;
  }
}

bool resuelveCaso() {
  // Lee el numero de usuarios
	int n;
	cin >> n;
	if (n == 0)
		return false;

  // Llena la cola con los usuarios
  priority_queue<usuario, vector<usuario>, less<vector<usuario>::value_type>> pq;
  for (int i = 0; i < n; i++) {
    int id;
    int periodo;
    cin >> id;
    cin >> periodo;
    pq.push(usuario(id, periodo, 0));
  }

  int nEnvios;
  cin >> nEnvios;

  // Calcula y devuelve la solucion
	resolver(pq, nEnvios);
	return true;
}

int main() {
	// ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
	std::ifstream in("casos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

	while (resuelveCaso());
	return 0;
  
	// para dejar todo como estaba al principio
#ifndef DOMJUDGE
	std::cin.rdbuf(cinbuf);
	system("PAUSE");
#endif
	return 0;
}