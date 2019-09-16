/*
using namespace std;
#include <iostream>
#include <fstream>
#include "PriorityQueue.h"

long long int resolver(PriorityQueue<long long int>& pq) {
	long long int esfuerzo = 0;
	long long int num1;
	long long int num2;

	while (pq.size() > 1) {
		num1 = pq.top();
		pq.pop();
		num2 = pq.top();
		pq.pop();

		long long int suma = num1 + num2;
		pq.push(suma);
		esfuerzo += suma;
	}

	return esfuerzo;
}

bool resuelveCaso() {
	int n;
	cin >> n;
	if (n == 0)
		return false;

	PriorityQueue<long long int> pq;
	for (int i = 0; i < n; i++) {
		int e;
		cin >> e;
		pq.push(e);
	}

	long long int sol = resolver(pq);
	cout << sol << endl;
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
}*/