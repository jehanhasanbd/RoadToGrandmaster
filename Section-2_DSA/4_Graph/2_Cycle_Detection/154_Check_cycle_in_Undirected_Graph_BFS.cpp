#include<iostream>
#include "../Graph.h"

using namespace std;

bool bfs(unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited, unordered_map<int,int> &parent, int source) {
    visited[source] = true;
    parent[source] = -1;

    queue<int> q;
    q.push(source);

    while (!q.empty()) {
        int frontNode = q.front();
        q.pop();

        for (auto neighbour: adjList[frontNode]) {
            if (!visited[neighbour]) {
                q.push(neighbour);
                visited[neighbour] = true;
                parent[neighbour] = frontNode;
            }
            else if (visited[neighbour] && neighbour != parent[frontNode]) {
                return true;
            }
        }
    }
    return false;

}

bool checkCycleBFS(unordered_map<int, list<int>> &adjList) {
    unordered_map<int, bool> visited;
    unordered_map<int, int> parent;
    vector<vector<int>> visitedSeq;
    for (auto node: adjList) {
        if (!visited[node.first]) {
            vector<int> component;
            if(bfs(adjList, visited, parent, node.first)) {
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
    cout<< checkCycleBFS(g.adjList);

}