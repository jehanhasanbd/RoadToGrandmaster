#include<iostream>
#include<stack>
#include<set>
#include<unordered_map>
#include "../WeightedGraph.h"

using namespace std;

using ADJLIST = unordered_map<int, list<pair<int,int>>>;
using BOOLMAP = unordered_map<int, bool>;
using INTMAP = unordered_map<int, int>;
using SETOFPAIR = set<pair<int,int>>;

void dijkstraAlgorithmShortestPath(ADJLIST &adjlist, int source, INTMAP &parent,INTMAP &distance) {

    for (auto node: adjlist) {
        distance[node.first] = INT_MAX;
    }
    distance[source] = 0;
    parent[source] = -1;

    SETOFPAIR setOfPair;
    setOfPair.insert({0,source});

    while (!setOfPair.empty()) {
        auto topNode = *(setOfPair.begin());
        setOfPair.erase(topNode);

        int distanceOfTopNode = topNode.first;
        int valueOfTopNode = topNode.second;

        for (auto neighbour: adjlist[valueOfTopNode]) {
            if (distance[neighbour.first] > distanceOfTopNode + neighbour.second) {

                auto prevNeighbour = setOfPair.find({distance[neighbour.first], neighbour.first});
                if (prevNeighbour != setOfPair.end()) {
                    setOfPair.erase(prevNeighbour);
                }

                distance[neighbour.first] = distanceOfTopNode + neighbour.second;
                setOfPair.insert({distance[neighbour.first] , neighbour.first});

                parent[neighbour.first] = valueOfTopNode;
            }
        }
    }

}


int main() {
    WeightedGraph wg;
    wg.addEdge(2,1,3,false);
    wg.addEdge(2,0,1,false);
    wg.addEdge(1,0,7,false);
    wg.addEdge(1,4,1,false);
    wg.addEdge(4,3,7,false);
    wg.addEdge(3,1,5,false);
    wg.addEdge(3,0,2,false);

    INTMAP distance,parent;

    dijkstraAlgorithmShortestPath(wg.adjList,0,parent, distance);
    for (auto x: parent) {
        cout<<"Node:"<<x.first<<" Parent:"<<x.second<<" Distance:"<<distance[x.first]<<endl;
    }
}