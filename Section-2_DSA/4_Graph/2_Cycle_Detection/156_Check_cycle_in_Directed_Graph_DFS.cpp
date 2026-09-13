#include<iostream>
#include "../Graph.h"

using namespace std;
using ADJLIST = unordered_map<int, list<int>>;
using BOOLMAP = unordered_map<int, bool>;
using INTMAP = unordered_map<int, int>;

bool dfs(ADJLIST &adjList, BOOLMAP &visited, BOOLMAP &dfsVisited, int source) {
    visited[source] = true;
    dfsVisited[source] = true;

    for (auto neighbour: adjList[source]) {
        if (!visited[neighbour]) {
            bool isCycle = dfs(adjList, visited, dfsVisited, neighbour);
            if (isCycle) {
                return true;
            }
        }
        else if (dfsVisited[neighbour]) {
            return true;
        }
    }
    dfsVisited[source] = false;
    return false;
}

bool checkCycleDFS(ADJLIST &adjList) {
    BOOLMAP visited;
    BOOLMAP dfsVisited;
    for (auto node: adjList) {
        if (!visited[node.first]) {
            if(dfs(adjList, visited, dfsVisited, node.first)) {
                return true;
            }

        }
    }
    return false;
}

int main() {
    Graph g;
    g.addEdge(1,2,true);
    g.addEdge(2,3,true);
    g.addEdge(3,8,true);
    g.addEdge(8,7,true);
    g.addEdge(3,7,true);
    g.addEdge(2,4,true);
    g.addEdge(4,5,true);
    g.addEdge(5,6,true);
    g.addEdge(6,5,true);
    cout<< checkCycleDFS(g.adjList);

}