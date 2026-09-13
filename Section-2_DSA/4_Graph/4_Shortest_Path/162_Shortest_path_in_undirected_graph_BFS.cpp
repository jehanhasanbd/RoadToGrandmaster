#include <algorithm>
#include<iostream>
#include "../Graph.h"

using namespace std;
using ADJLIST = unordered_map<int, list<int>>;
using BOOLMAP = unordered_map<int, bool>;
using INTMAP = unordered_map<int, int>;

vector<int> shortestPathUndirectedBFS(ADJLIST &adjList, int source, int destination) {
    BOOLMAP visited;
    INTMAP parent;

    queue<int> q;
    q.push(source);
    visited[source] = true;
    parent[source] = -1;

    while (!q.empty()) {
        int frontNode = q.front();
        q.pop();

        for (auto neighbour: adjList[frontNode]) {
            if (!visited[neighbour]) {
                q.push(neighbour);
                visited[neighbour] = true;
                parent[neighbour] = frontNode;
            }
        }
    }

    vector<int> visitedSeq;
    visitedSeq.push_back(destination);
    int prevNode = destination;
    do {
        prevNode = parent[prevNode];
        visitedSeq.push_back(prevNode);
    }while (prevNode != source);
    reverse(visitedSeq.begin(), visitedSeq.end());
    return visitedSeq;
}

int main() {
    Graph g;
    g.addEdge(1,2,false);
    g.addEdge(2,3,false);
    g.addEdge(2,4,false);
    g.addEdge(4,3,false);
    g.addEdge(3,7,false);
    g.addEdge(7,6,false);
    g.addEdge(6,5,false);
    g.addEdge(5,4,false);
    vector<int> ans = shortestPathUndirectedBFS(g.adjList,5,3);
    printSeq(ans);
}