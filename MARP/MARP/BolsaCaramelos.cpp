//************************************************
// IMPORTANTE:
// Nombre y apellidos del alumno
// Usuario del juez de clase
// Usuario de la prueba de hoy
//************************************************


// Comentar las librerias que no se usen
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <limits>
#include <queue>

using namespace std;

// *********************************
// Explicación de la solucion del problema: 
//
//
// Coste de la solucion:
//
//
// Poner comentarios en el codigo.
// **********************************



bool resuelveCaso() {
	int numBolsas, numDias, numMinimo;
	std::cin >> numBolsas;
	std::cin >> numDias >> numMinimo;
	if (!std::cin) return false;

	// Solucion del problema

	// Llena la cola de bolsas
	priority_queue<int> pq;
	for (int i = 0; i < numBolsas; i++) {
		int n;
		cin >> n;
		pq.push(n);
	}

	int diasMalos = 0;
	// Reparte los caramelos de cada dia
	for (int i = 0; i < numDias; i++) {
		int consumo;
		cin >> consumo;

		if (!pq.empty()) {
			// Saca la bolsa mas grande
			int bolsaMayor = pq.top();
			if (bolsaMayor >= numMinimo) {
				pq.pop();
				int diferencia = bolsaMayor - consumo;
				// Si ha habido suficientes caramelos
				if (diferencia >= 0) {
					// Si sobran mas del minimo los mete en una bolsa nueva
					if (diferencia >= numMinimo) {
						pq.push(diferencia);

					// Si sobran menos del minimo los añade a la bolsa mayor
					} else {
						if (!pq.empty()) {
							bolsaMayor = pq.top();
							pq.pop();
							pq.push(bolsaMayor + diferencia);
						} else {
							if (diferencia > 0)
								pq.push(diferencia);
						}
					}

				// Si NO ha habido sufifientes caramelos
				} else {
					diasMalos++;
				}
			} else {
				diasMalos++;
			}
		} else {
			diasMalos++;
		}
	}

	// Escribir los resultados
	cout << diasMalos << "\n";
	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << "\n";

	return true;
}

int main() {
	// Para la entrada por fichero.
#ifndef DOMJUDGE
	std::ifstream in("datos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

	while (resuelveCaso())
		;

	// Para restablecer entrada. Comentar para acepta el reto
#ifndef DOMJUDGE // para dejar todo como estaba al principio
	std::cin.rdbuf(cinbuf);
	system("PAUSE");
#endif

	return 0;
}
