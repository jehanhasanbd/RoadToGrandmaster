#include<iostream>
#include<stack>
#include<unordered_map>
#include "../Graph.h"

using namespace std;



vector<int> topologicalSortKhansAlgo(unordered_map<int, list<int>> &adjList) {
    unordered_map<int,int> indegrees;
    for (auto node: adjList) {
        indegrees[node.first];
        for (auto neighbour: node.second) {
            indegrees[neighbour]++;
        }
    }

    queue<int> q;
    for (auto node: indegrees) {
        if (node.second == 0) {
            q.push(node.first);
        }
    }

    vector<int> topologicalSeq;
    while (!q.empty()) {
        int frontNode = q.front();
        q.pop();

        topologicalSeq.push_back(frontNode);
        for (auto neighbour: adjList[frontNode]) {
            indegrees[neighbour]--;
            if (indegrees[neighbour] == 0) {
                q.push(neighbour);
            }
        }
    }
    return topologicalSeq;
}

int main() {
    Graph g;
    g.addEdge(1,2, true);
    g.addEdge(1,3, true);
    g.addEdge(2,4, true);
    g.addEdge(2,5, true);
    g.addEdge(3,6, true);
    g.addEdge(4,7, true);
    g.addEdge(5,7, true);
    g.addEdge(6,5, true);
    g.addEdge(6,7, true);

    vector<int> topoSortSeq = topologicalSortKhansAlgo(g.adjList);
    printSeq(topoSortSeq);
}