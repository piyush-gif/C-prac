// graphs
//🧩 Project 1 — Edge - First: “Find the Cheapest Connection”
//
//Goal :
//Given a weighted edge list, find the minimum total cost to connect all vertices(using Kruskal’s MST).
//
//What you’ll learn :
//
//Edge - first thinking — process edges, not nodes.
//
//Sorting and condition - based processing.
//
//Basic use of Disjoint Set(Union - Find).
//
//Key steps :
//
//Input n(vertices) and m(edges).
//
//Store edges as(u, v, w) in an array.
//
//Sort by weight.
//
//Add edges one by one if they connect different components.
//
//Output total cost.
//
//✅ Concept mastered : Edge - first algorithms(Kruskal’s).
// 

//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//void dfs(std::vector<bool>& visited, std::vector<std::vector<int>>& graph, int node) {
//	visited[node] = true;
//	std::cout << char('A' + node) << " ";
//
//	for (int next : graph[node]) {
//		if (!visited[next]) {
//			dfs(visited, graph, next);
//		}
//	}
//}
//
//int main() {
//	int n = 6;
//	std::vector<std::vector<int>> graph(n);
//
//	graph[0].push_back(1);
//	graph[0].push_back(3);
//
//	graph[1].push_back(0);
//	graph[1].push_back(2);
//	graph[1].push_back(4);
//
//	graph[2].push_back(1);
//	graph[2].push_back(3);
//	graph[2].push_back(5);
//
//	graph[3].push_back(2);
//	graph[3].push_back(0);
//
//	std::vector<bool> visited(n, false);
//
//	dfs(visited, graph, 0);
//}
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//
//struct Graph {
//	int vertices;
//	std::vector<std::vector<int>> adlist     ;
//
//	Graph(int v) {
//		vertices = v;
//		adlist.resize(v);
//	}
//};
//
//void dfs(int node,std::vector<std::vector<int>>& g,std::vector<bool>& visited) {
//	visited[node] = true;
//	std::cout << node << " ";
//	for (int v : g[node]) {
//		if (!visited[v]) {
//			dfs(v, g, visited);
//		}
//	}
//}
//
//void bfs(int start, std::vector<std::vector<int>>& g, std::vector<bool>& visited) {
//	std::queue<int> q;
//	visited[start] = true;
//
//	q.push(start);
//	while (!q.empty()) {
//		int node = q.front();
//		std::cout << node << " ";
//		q.pop();
//		for (int v : g[node]) {
//			if (!visited[v]) {
//				visited[v] = true;
//				q.push(v);
//			}
//		}
//	}
//}
//
//int main() {
//	Graph g(4);
//
//	g.adlist[0].push_back(1);
//	g.adlist[0].push_back(2);
//
//	g.adlist[1].push_back(0);
//	g.adlist[1].push_back(3);
//
//	g.adlist[2].push_back(3);
//	g.adlist[2].push_back(0);
//
//	g.adlist[3].push_back(2);
//	g.adlist[3].push_back(1);
//
//	std::cout << "DFS: ";
//	std::vector<bool> visited(g.vertices, false);
//	dfs(0, g.adlist, visited);
//
//	std::cout << "\nBFS: ";
//	std::vector<bool> visited2(g.vertices, false);
//	bfs(0, g.adlist, visited2);
//	return 0;
//}















































//
//🧩 Project 2 — Adjacency Matrix : “Check Connectivity”
//
//Goal :
//Represent a graph with an adjacency matrix and check whether it’s fully connected(every vertex reachable from every other).
//
//What you’ll learn :
//
//Building a matrix manually.
//
//Traversing it using DFS or BFS.
//
//Understanding the cost of dense storage(O(V²)).
//
//Key steps :
//
//Input the number of vertices n.
//
//Fill adj[n][n] with 1s and 0s.
//
//Use DFS starting from node 0.
//
//If all vertices are visited → connected.
//
//✅ Concept mastered : Matrix representation and vertex - first traversal.
//
//🧩 Project 3 — Adjacency List : “Shortest Path in Unweighted Graph”
//
//Goal :
//Find the shortest path(in edges) between two vertices using BFS.
//
//What you’ll learn :
//
//Representing a graph efficiently with adjacency lists.
//
//Using queues for BFS.
//
//Understanding how adjacency lists save memory.
//
//Key steps :
//
//Build an array of linked lists(or dynamic arrays) to store neighbors.
//
//Implement BFS from a start vertex.
//
//Track distance using an array.
//
//Output the shortest path length.
//
//✅ Concept mastered : Adjacency list representation + BFS traversal