using namespace std;
#include <iostream>
#include <fstream>
#include <queue>
#include <vector>
/*
bool resuelveCaso() {
	int n, a, b;
	cin >> n >> a >> b;

  if (!std::cin)
    return false;

	// Rellena la cola de pilas de 9V
	priority_queue<int> pilasGrandes;
	for (int i = 0; i < a; i++) {
		int carga;
		cin >> carga;
		pilasGrandes.push(carga);
	}

	// Rellena la cola de pilas de 1.5V
	priority_queue<int> pilasPequenas;
	for (int i = 0; i < b; i++) {
		int carga;
		cin >> carga;
		pilasPequenas.push(carga);
	}

  // Mientras haya pilas para ese sabado seguimos saliendo
	while (!pilasGrandes.empty() && !pilasPequenas.empty()) {
		int horasDeVuelo = 0;
    vector<int> grandesPendientes;
    vector<int> pequenasPendientes;

    // Cargamos cada dron
		for (int i = 0; i < n; i++) {
			if (!pilasGrandes.empty() && !pilasPequenas.empty()) {
				int pilaGrande = pilasGrandes.top();
				int pilaPequena = pilasPequenas.top();
				pilasGrandes.pop();
				pilasPequenas.pop();

				// La pila grande ha durado mas
        if (pilaGrande > pilaPequena) {
          horasDeVuelo += pilaPequena;
          //pilasGrandes.push(pilaGrande - pilaPequena);
          grandesPendientes.push_back(pilaGrande - pilaPequena);

        // La pila pequeña ha durado mas
        } else {
					horasDeVuelo += pilaGrande;
          if (pilaPequena - pilaGrande != 0)
            //pilasPequenas.push(pilaPequena - pilaGrande);
            pequenasPendientes.push_back(pilaPequena - pilaGrande);
				}
			}
		}

    // Devolvemos las pilas a la caja
    for (int i = 0; i < grandesPendientes.size(); i++)
      pilasGrandes.push(grandesPendientes[i]);

    for (int i = 0; i < pequenasPendientes.size(); i++)
      pilasPequenas.push(pequenasPendientes[i]);

    // Mostramos la solucion
		cout << horasDeVuelo << " ";
	}

	cout << "\n";

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