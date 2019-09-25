using namespace std;
#include <iostream>
#include <fstream>
#include <queue>
/*
bool resuelveCaso() {
  int edadCentral;
  cin >> edadCentral;
  int nParejas;
  cin >> nParejas;

  if (edadCentral == nParejas && nParejas == 0)
    return false;

  priority_queue<int, vector<int>, less<int>> menores;
  priority_queue<int, vector<int>, greater<int>> mayores;
  
  for (int i = 0; i < nParejas; i++) {
    int n1, n2;
    cin >> n1;
    cin >> n2;

    // Los dos nuevos son menores que el central
    if (n1 < edadCentral && n2 < edadCentral) {
      menores.push(n1);
      menores.push(n2);
      mayores.push(edadCentral);
      edadCentral = menores.top();
      menores.pop();

    // Los dos nuevos son menores que el central
    } else if (n1 > edadCentral && n2 > edadCentral) {
      mayores.push(n1);
      mayores.push(n2);
      menores.push(edadCentral);
      edadCentral = mayores.top();
      mayores.pop();

    // Uno es mayor y otro es menor que el central
    } else {
      if (n1 < edadCentral) {
        menores.push(n1);
        mayores.push(n2);
      } else {
        menores.push(n2);
        mayores.push(n1);
      }
    }
    cout << edadCentral << "\n";
  }

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