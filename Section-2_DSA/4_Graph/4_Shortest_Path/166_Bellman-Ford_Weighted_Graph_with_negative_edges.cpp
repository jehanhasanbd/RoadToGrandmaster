#include<iostream>
#include<stack>
#include<set>
#include<unordered_map>
#include "../WeightedGraph.h"

using namespace std;

using ADJLIST = unordered_map<int, list<pair<int,int>>>;
using BOOLMAP = unordered_map<int, bool>;
using INTMAP = unordered_map<int, int>;
using VECOFVEC = vector<vector<int>>;

void bellmonFordAlgorithmShortestPath(ADJLIST &adjlist,VECOFVEC edges, int source, INTMAP &parent,INTMAP &distance) {

    for (auto node: adjlist) {
        distance[node.first] = INT_MAX;
    }
    distance[source] = 0;
    parent[source] = -1;

    for (int i = 0; i < adjlist.size()-1; ++i) {
        for (auto edge: edges) {
            int fromNode = edge[0];
            int toNode = edge[1];
            int weightNode = edge[2];

            if (distance[fromNode]!=INT_MAX && distance[toNode] > distance[fromNode] + weightNode) {
                distance[toNode] = distance[fromNode] + weightNode;
                parent[toNode] = fromNode;
            }
        }
    }
    for (auto edge: edges) {
        int fromNode = edge[0];
        int toNode = edge[1];
        int weightNode = edge[2];

        if (distance[fromNode]!=INT_MAX && distance[toNode] > distance[fromNode] + weightNode) {
            parent.clear();
            distance.clear();
        }
    }

}

int main() {
    WeightedGraph wg;
    wg.addEdge(1,2,4,true);
    wg.addEdge(1,3,3,true);
    wg.addEdge(2,4,7,true);
    wg.addEdge(3,4,-2,true);

    INTMAP distance,parent;

    bellmonFordAlgorithmShortestPath(wg.adjList,wg.edges,1,parent, distance);
    if (parent.empty()) {
        cout<< "Negative Cycle detect"<<endl;
    }
    for (auto x: parent) {
        cout<<"Node:"<<x.first<<" Parent:"<<x.second<<" Distance:"<<distance[x.first]<<endl;
    }
    distance.clear();
    parent.clear();


    WeightedGraph wg_negCyc;
    wg_negCyc.addEdge(1,0,4,true);
    wg_negCyc.addEdge(0,2,-2,true);
    wg_negCyc.addEdge(2,3,2,true);
    wg_negCyc.addEdge(3,1,-1,true);
    wg_negCyc.addEdge(1,2,-3,true);
    bellmonFordAlgorithmShortestPath(wg_negCyc.adjList,wg_negCyc.edges,1,parent, distance);
    if (parent.empty()) {
        cout<< "Negative Cycle detect"<<endl;
    }
    for (auto x: parent) {
        cout<<"Node:"<<x.first<<" Parent:"<<x.second<<" Distance:"<<distance[x.first]<<endl;
    }

}