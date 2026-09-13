#include<iostream>
#include "../Graph.h"

using namespace std;
using ADJLIST = unordered_map<int, list<int>>;
using BOOLMAP = unordered_map<int, bool>;
using INTMAP = unordered_map<int, int>;

void bfs(ADJLIST &adjList, BOOLMAP &visited, vector<int> &component, int source) {
    visited[source] = true;
    component.push_back(source);

    queue<int> q;
    q.push(source);

    while (!q.empty()) {
        int frontNode = q.front();
        q.pop();

        for (auto neighbour: adjList[frontNode]) {
            if (!visited[neighbour]) {
                q.push(neighbour);
                visited[neighbour] = true;
                component.push_back(neighbour);
            }
        }
    }
}

vector<vector<int>> BFS(ADJLIST &adjList) {
    BOOLMAP visited;
    vector<vector<int>> visitedSeq;
    for (auto node: adjList) {
        if (!visited[node.first]) {
            vector<int> component;
            bfs(adjList, visited, component, node.first);
            visitedSeq.push_back(component);
        }
    }
    return visitedSeq;
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
    vector<vector<int>> visitedSeq = BFS(g.adjList);
    printVisitedSeq(visitedSeq);
}