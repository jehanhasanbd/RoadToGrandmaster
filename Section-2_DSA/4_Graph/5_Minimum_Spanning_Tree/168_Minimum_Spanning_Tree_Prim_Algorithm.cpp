#include<iostream>
#include<stack>
#include<set>
#include<unordered_map>
#include "../WeightedGraph.h"

using namespace std;

using ADJLIST = unordered_map<int, list<pair<int, int> > >;
using BOOLMAP = unordered_map<int, bool>;
using INTMAP = unordered_map<int, int>;
using SETOFPAIR = set<pair<int, int>>;
using VEC_OF_PAIR_OF_PAIR = vector<pair<pair<int,int>, int>>;

VEC_OF_PAIR_OF_PAIR minimumSpanningTreePrimsAlgo(ADJLIST &adjlist, int startNode, INTMAP &parent, INTMAP &weightOfMST) {
    BOOLMAP mstVisited;
    for (auto node: adjlist) {
        mstVisited[node.first] = false;
        parent[node.first] = -1;
        weightOfMST[node.first] = INT_MAX;
    }
    int vertex = adjlist.size();
    weightOfMST[startNode] = 0;

    for (int i = 0; i < vertex; ++i) {
        int fromNode = -1,  minWeight=INT_MAX;
        for (auto node: adjlist) {
            if (!mstVisited[node.first] && weightOfMST[node.first] < minWeight) {
                minWeight = weightOfMST[node.first];
                fromNode = node.first;
            }
        }
        mstVisited[fromNode] = true;

        for (auto neighbour: adjlist[fromNode]) {
            int toNode = neighbour.first;
            int weightToNode = neighbour.second;
            if (!mstVisited[toNode] && weightToNode<weightOfMST[toNode]) {
                weightOfMST[toNode] = weightToNode;
                parent[toNode] = fromNode;
            }
        }
    }
    VEC_OF_PAIR_OF_PAIR ans;
    for (auto node: adjlist) {
        if (parent[node.first] != -1) {
            ans.push_back({{parent[node.first],node.first},weightOfMST[node.first]});
        }
    }
    return ans;

}


int main() {
    WeightedGraph wg;
    wg.addEdge(5,4,9,false);
    wg.addEdge(5,1,4,false);
    wg.addEdge(4,1,1,false);
    wg.addEdge(4,3,5,false);
    wg.addEdge(4,2,3,false);
    wg.addEdge(1,2,2,false);
    wg.addEdge(3,2,3,false);
    wg.addEdge(3,6,8,false);
    wg.addEdge(2,6,7,false);

    INTMAP weightOfMST, parent;

    VEC_OF_PAIR_OF_PAIR ans = minimumSpanningTreePrimsAlgo(wg.adjList, 1, parent, weightOfMST);
    for (auto x: ans) {
        cout<<x.first.first<<" "<<x.first.second<<" "<<x.second<<endl;
    }
}
