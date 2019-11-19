#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;
/*
void maximoOro(vector<int> const & P, vector<int> const & V, 
	int T, int & valor, vector<bool> & cuales) {
  int n = P.size() - 1;
  vector<vector<int>> cofres(n + 1, vector<int>(T + 1, 0));
  // rellenar la matriz
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= T; ++j) {
      if (3*P[i] > j)
        cofres[i][j] = cofres[i - 1][j];
      else
        cofres[i][j] = max(cofres[i - 1][j], cofres[i - 1][j - 3*P[i]] + V[i]);
    }
  }
  valor = cofres[n][T];
  
  // cálculo de los objetos
  int resto = T;
  for (int i = n; i >= 1; --i) {
    if (cofres[i][resto] == cofres[i - 1][resto]) {
      // no cogemos objeto i
      cuales[i] = false;
    } else { // sí cogemos objeto i
      cuales[i] = true;
      resto = resto - 3*P[i];
    }
  }
}

bool resuelveCaso() {
  int t, n;
  cin >> t >> n;
  if (!cin) return false;

  // Lee datos
  vector<int> profundidades;
  vector<int> cantidadesOro;
  profundidades.push_back(0);
  cantidadesOro.push_back(0);
  for (int i = 0; i < n; i++) {
	  int p, o;
	  cin >> p >> o;
	  profundidades.push_back(p);
	  cantidadesOro.push_back(o);
  }
  
  // Calcula la solucion
  int v = 0;
  vector<bool> c(n+1, false);
  maximoOro(profundidades, cantidadesOro, t, v, c);

  // Escribe la solucion
  cout << v << "\n";
  int contador = 0;
  for (int i = 0; i <= n; i++)
	  if (c[i]) contador++;
  cout << contador << "\n";

  for (int i = 0; i <= n; i++) {
	  if (c[i]) {
		  cout << profundidades[i] << " ";
		  cout << cantidadesOro[i] << "\n";
	  }
  }
  cout << "----" << "\n";
  
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