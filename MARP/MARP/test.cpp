using namespace std;
#include <iostream>
#include <fstream>
#include "PriorityQueue.h"
/*
struct registro {
  int momento; // cuándo le toca
  int id; // identificador (se utiliza en caso de empate)
  int periodo; // tiempo entre consultas
};

bool operator<(registro const& a, registro const& b) {
  return a.momento < b.momento ||
    (a.momento == b.momento && a.id < b.id);
}

bool resuelveCaso() {
  int N;
  cin >> N; // número de usuarios registrados
  if (N == 0) // no hay más casos
    return false;

  // leemos los registros
  PriorityQueue<registro> cola;
  for (int i = 0; i < N; ++i) {
    int id_usu, periodo;
    cin >> id_usu >> periodo;
    cola.push({ periodo, id_usu, periodo });
  }

  int envios; // número de envíos a mostrar
  cin >> envios;
  while (envios--) {
    registro e = cola.top(); cola.pop();
    cout << e.id << '\n';
    e.momento += e.periodo;
    cola.push(e);
  }
  return true;
}int main() {
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
}*/