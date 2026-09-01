#pragma once

#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
#include <queue>

using namespace std;

class Graph {
public:
    unordered_map<int, list<int>> adjList;
    vector<vector<int>> edges;
    vector<vector<int>> adjMatrix;
    int maxVertex = 0;

    Graph() {

    }

    Graph(int vertex) {
        adjMatrix = vector<vector<int>>(vertex+1, vector<int>(vertex+1,0));
        maxVertex = vertex;
    }

    void addEdge(int from, int to, bool direction) {
        int maxNeeded = max(from, to);
        if (maxNeeded >= adjList.size()) {
            int oldSize = adjList.size();
            int newSize = maxNeeded + 1;

            // Resize existing rows
            adjMatrix.resize(newSize);
            for (int i = 0; i < newSize; ++i) {
                adjMatrix[i].resize(newSize, 0);
            }

            // Initialize new rows with zeros
            for (int i = oldSize; i < newSize; ++i) {
                adjMatrix[i] = vector<int>(newSize, 0);
            }
        }


        adjList[from].push_back(to);
        adjMatrix[from][to] = 1;
        adjList[to];
        if (!direction) {
            adjList[to].push_back(from);
            adjMatrix[to][from] = 1;
        }


        edges.push_back({from,to});
        maxVertex = max(maxVertex, max(from,to));
    }

    void printAdjList() {
        for (auto node: adjList) {
            cout<<node.first<<" --> ";
            for (auto neighbour: node.second) {
                cout<< neighbour << " ";
            }
            cout<<endl;
        }
    }

    void printAdjMatrix() {
        if (adjMatrix.empty()) {
            cout << "Adjacency Matrix is empty" << endl;
            return;
        }
        int n = adjMatrix.size();

        // Print header
        cout << "   ";
        for (int i = 0; i < n; i++) {
            cout << i << " ";
        }
        cout << endl;

        // Print matrix
        for (int i = 0; i < n; i++) {
            cout << i << "  ";
            for (int j = 0; j < n; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    static unordered_map<int, list<int>> makeReverseAdjList(unordered_map<int, list<int>> &adjList) {
        unordered_map<int, list<int>> reverseAdjList;
        for (auto node: adjList) {
            reverseAdjList[node.first];
            for (auto neighbour: node.second) {
                reverseAdjList[neighbour].push_back(node.first);
            }
        }
        return reverseAdjList;
    }
};

inline void printVisitedSeq(vector<vector<int>> &visitedSeq) {
    for (auto x: visitedSeq) {
        for (auto y: x) {
            cout<<y<<" ";
        }
        cout<<endl;
    }
}

inline void printSeq(vector<int> &Seq) {
    for (auto x: Seq) {
        cout<< x << " ";
    }
}