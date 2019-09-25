using namespace std;

#include <iostream>
#include <fstream>
#include <queue>

bool resuelveCaso() {
  int p, n;
  cin >> p;

  if (!cin)
    return false;

  cin >> n;

  // Creamos la cola de grupos con 1 atril
  priority_queue<int> pq;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    pq.push(c);
    p--;
  }

  // Repartimos los atriles restantes a los grupos mas grandes
  while (p--) {
    // Eliminamos el grupo grande
    int n = pq.top();
    pq.pop();

    // Reintroducimos dos grupos cada uno con la mitad del 
    // tamaño del grupo original, con 1 atril cada uno
    pq.push(n / 2);
    if (n % 2) {
      pq.push(n / 2 + 1);
    } else {
      pq.push(n / 2);
    }
  }
  
  cout << pq.top() << "\n";

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