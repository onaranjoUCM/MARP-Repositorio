using namespace std;

#include <iostream>
#include <fstream>
#include <queue>
#include <cmath>
/*
struct grupo {
  int id;
  float musicos;
  float atriles;
};

bool operator> (grupo const& a, grupo const& b) {
  float ratioA = a.musicos / a.atriles;
  float ratioB = b.musicos / b.atriles;
  return ratioA < ratioB || (ratioA == ratioB && a.id < b.id);
}

bool resuelveCaso() {
  int p, n;
  cin >> p >> n;

  if (!cin)
    return false;

  // Creamos la cola de grupos con 1 atril cada uno
  priority_queue<grupo, vector<grupo>, greater<grupo>> pq;
  for (int i = 0; i < n; i++) {
    float c;
    cin >> c;
    pq.push({ i, c, 1.0 });
    p--;
  }

  // Repartimos los atriles restantes a los grupos con peor ratio
  while (p--) {
    grupo g = pq.top();
    pq.pop();
    pq.push({ g.id, g.musicos, g.atriles + 1 });
  }
  
  // Escribimos la solucion
  grupo g = pq.top();
  float r = g.musicos / g.atriles;

  int mayorGrupo;
  if (std::floor(r) == r)
    mayorGrupo = r;
  else {
    mayorGrupo = r + 1;
  }
  cout << mayorGrupo << "\n";

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