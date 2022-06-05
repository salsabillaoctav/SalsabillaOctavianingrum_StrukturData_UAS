//undirected graph menggunakan representasi adjacency list dengan input vertex dan edge
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//function untuk menambahkan edge
void addEdge(vector <pair<int, int> > adj[], int u, int v, int wt) {
	adj[u].push_back(make_pair(v, wt));
	adj[v].push_back(make_pair(u, wt));
}

//function untuk merubah graph menjadi adjacency list
void printGraph(vector<pair<int,int> > adj[], int V) {
	int v, w;
	for (int u = 1; u < V; u++) {
		cout << u;
		for (auto it = adj[u].begin(); it!=adj[u].end(); it++) {
			v = it->first;
			w = it->second;
			cout  << " -> " << "[" << v << "," << w << "]";
		}
		cout << "\n";
	}
}

int main() {
	int V = 5;
	vector<pair<int, int> > adj[V];
	//menambahkan nilai edge
	addEdge(adj, 1, 2, 5);
	addEdge(adj, 2, 3, 1);
	addEdge(adj, 4, 1, 3);
	addEdge(adj, 2, 4, 1);
	addEdge(adj, 3, 1, 1);

	//cetak graph
	printGraph(adj, V);
	return 0;
}
