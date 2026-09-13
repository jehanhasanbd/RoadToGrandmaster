#include<iostream>
#include "../Graph.h"

using namespace std;
using ADJLIST = unordered_map<int, list<int>>;
using BOOLMAP = unordered_map<int, bool>;
using INTMAP = unordered_map<int, int>;

bool dfs(ADJLIST &adjList, BOOLMAP &visited, int parent, int source) {
    visited[source] = true;

    for (auto neighbour: adjList[source]) {
        if (!visited[neighbour]) {
            bool isCycle = dfs(adjList, visited, source, neighbour);
            if (isCycle) {
                return true;
            }
        }
        else if (neighbour != parent) {
            return true;
        }
    }

    return false;
}

bool checkCycleDFS(ADJLIST &adjList) {
    BOOLMAP visited;
    BOOLMAP dfsVisited;
    for (auto node: adjList) {
        if (!visited[node.first]) {
            if(dfs(adjList, visited, -1, node.first)) {
                return true;
            }

        }
    }
    return false;
}

int main() {
    Graph g;
    g.addEdge(0,1,false);
    g.addEdge(0,2,false);
    g.addEdge(0,7,false);
    g.addEdge(1,4,false);
    g.addEdge(2,4,false);
    g.addEdge(2,3,false);
    g.addEdge(3,5,false);
    g.addEdge(3,6,false);
    g.addEdge(7,6,false);
    cout<< checkCycleDFS(g.adjList);

}