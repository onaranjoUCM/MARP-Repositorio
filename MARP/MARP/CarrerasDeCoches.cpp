#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

// ESTRATEGIA
  // Ordenamos las pilas de mayor a menor y tomamos siempre la primera
  // y vamos probando a emparejarla con las más pequeñas hasta que encuentre
  // una que sume lo suficiente. Se marcan como usadas y se repite el proceso.

// DEMOSTRACIÓN
  // Si la pila está emparejada con una pila más grande, cambiarla
    // por la propuesta no cambia nada ya que hemos demostrado que siguen
    // sumando. Además, se libera una pila más grande que usar mas tarde.
  // Si la pila está emparejada con una pila más pequeña, no sumaría lo
    // suficiente ya que proponemos emparejar con la más pequeña posible,
    // por lo que nunca se va a dar el caso.

/*
int repartePilas(vector<int>& pilas, int v) {
  int contador = 0;
  vector<int>::iterator i = pilas.begin();
  vector<int>::iterator j = pilas.end() - 1;
  while (pilas.size() > 1 && *i != *j) {
    if (*i + *j >= v) {
      contador++;
      pilas.erase(j);
      pilas.erase(i);
      if (pilas.size() > 1) {
        i = pilas.begin();
        j = pilas.end() - 1;
      }
    } else {
      j--;
    }
  }

  return contador;
}

bool resuelveCaso() {
  int n, v;
  cin >> n >> v;
  if (n == 0) return false;

  vector<int> pilas;
  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;
    pilas.push_back(p);
  }

  sort(pilas.begin(), pilas.end(), greater<int>());
  cout << repartePilas(pilas, v) << "\n";

  return true;
}

int main() {
#ifndef DOMJUDGE
  std::ifstream in("casos.txt");
  auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

  int n;
  cin >> n;
  while (n--)
    resuelveCaso();

#ifndef DOMJUDGE
  std::cin.rdbuf(cinbuf);
  system("PAUSE");
#endif

  return 0;
}*/