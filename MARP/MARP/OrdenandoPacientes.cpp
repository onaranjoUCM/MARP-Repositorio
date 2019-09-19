using namespace std;
#include <iostream>
#include <fstream>
#include <queue>
#include <string>
/*
struct paciente {
  string nombre;
  int prioridad;
  int ordenLlegada;
};

bool operator<(paciente const& a, paciente const& b) {
  return a.prioridad < b.prioridad ||
    (a.prioridad == b.prioridad && a.ordenLlegada > b.ordenLlegada);
}

bool resuelveCaso() {
  // Lee el numero de casos
  int N;
  cin >> N;
  if (N == 0)
    return false;

  // Lee los eventos
  priority_queue<paciente, vector<paciente>, less<paciente>> cola;
  for (int i = 0; i < N; ++i) {
    // Lee el tipo de evento
    string op;
    cin >> op;
    
    // Ingreso
    if (op == "I") {
      string nombre;
      cin >> nombre;
      int prioridad;
      cin >> prioridad;
      cola.push({ nombre, prioridad, i });
    }

    // Atiende
    if (op == "A") {
      cout << cola.top().nombre << "\n";
      cola.pop();
    }
  }
  cout << "---" << "\n";

  return true;
}int main() {
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