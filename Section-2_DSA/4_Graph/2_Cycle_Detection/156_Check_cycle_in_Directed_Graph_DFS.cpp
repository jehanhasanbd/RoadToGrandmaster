#include<iostream>
#include "../Graph.h"

using namespace std;

bool dfs(unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsVisited, int source) {

}

bool checkCycleDirectedDFS(unordered_map<int, list<int>> &adjList) {
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsVisited;
    vector<vector<int>> visitedSeq;
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
    g.addEdge(0,1,false);
    g.addEdge(0,2,false);
    g.addEdge(0,7,false);
    g.addEdge(1,4,false);
    g.addEdge(2,4,false);
    g.addEdge(2,3,false);
    g.addEdge(3,5,false);
    g.addEdge(3,6,false);
    g.addEdge(7,6,false);
    cout<< checkCycleDirectedDFS(g.adjList);

}