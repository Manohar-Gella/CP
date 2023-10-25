/*
Question 5: Depth-First Search (DFS)
Implement a Depth-First Search algorithm to traverse a graph in C++.
*/

#include <iostream>
#include <vector>
#include <stack>

class Graph {
public:
    Graph(int vertices);
    void addEdge(int v, int w);
    void DFS(int startVertex);

private:
    int vertices;
    std::vector<std::vector<int>> adjacencyList;
};

Graph::Graph(int vertices) : vertices(vertices) {
    adjacencyList.resize(vertices);
}

void Graph::addEdge(int v, int w) {
    adjacencyList[v].push_back(w);
}

void Graph::DFS(int startVertex) {
    std::vector<bool> visited(vertices, false);
    std::stack<int> stack;

    visited[startVertex] = true;
    stack.push(startVertex);

    while (!stack.empty()) {
        int currentVertex = stack.top();
        std::cout << currentVertex << " ";
        stack.pop();

        for (int neighbor : adjacencyList[currentVertex]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                stack.push(neighbor);
            }
        }
    }
}
