#include<iostream>
#include "../Graph.h"

using namespace std;

bool dfs(unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited, int parent, int source) {
    visited[source] = true;

    for (auto neighbour: adjList[source]) {
        if (!visited[neighbour]) {
            bool checkCycle = dfs(adjList, visited,source,neighbour);
            if (checkCycle) {
                return true;
            }
        }
        else if (neighbour != parent) {
            return true;
        }
    }
    return false;
}

bool checkCycleDFS(unordered_map<int, list<int>> &adjList) {
    unordered_map<int, bool> visited;
    for (auto node: adjList) {
        if (!visited[node.first]) {
            vector<int> component;
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
    cout<<checkCycleDFS(g.adjList);
}