#include <algorithm>
#include<iostream>
#include<stack>
#include<set>
#include<unordered_map>
#include "../WeightedGraph.h"

using namespace std;

using ADJLIST = unordered_map<int, list<pair<int, int> > >;
using BOOLMAP = unordered_map<int, bool>;
using INTMAP = unordered_map<int, int>;
using VECTOR = vector<int>;
using VEC_OF_VEC = vector<vector<int>>;
using VEC_OF_PAIR_OF_PAIR = vector<pair<pair<int,int>, int>>;

void makeSet(VECTOR &parent, VECTOR &rank, int vertex) {
    for (int ver = 0; ver <= vertex; ++ver) {
        parent[ver] = ver;
        rank[ver] = 0;
    }
}

int findParent(VECTOR &parent, int node) {
    if (parent[node] == node) {
        return node;
    }
    return parent[node] = findParent(parent, parent[node]);
}

void unionSet(VECTOR &parent, VECTOR &rank, int fromNode, int toNode) {
    fromNode = findParent(parent, fromNode);
    toNode = findParent(parent, toNode);

    if (rank[fromNode] > rank[toNode]) {
        parent[toNode] = fromNode;
    }
    else if (rank[fromNode] < rank[toNode]) {
        parent[fromNode] = toNode;
    }
    else {
        parent[toNode] = fromNode;
        rank[fromNode]++;
    }
}

bool cmp(VECTOR &edge1, VECTOR &edge2) {
    return edge1[2] < edge2[2];
}


VEC_OF_PAIR_OF_PAIR minimumSpanningTreeKruskalAlgo(VEC_OF_VEC &edges, int vertex) {
    VECTOR parent(vertex+1);
    VECTOR rank(vertex+1);
    makeSet(parent, rank, vertex);
    sort(edges.begin(), edges.end(), cmp);

    VEC_OF_PAIR_OF_PAIR ans;
    for (auto edge: edges) {
        int fromNode = edge[0];
        int toNode = edge[1];
        int edgeWeight = edge[2];

        if (findParent(parent,fromNode) != findParent(parent,toNode)) {
            unionSet(parent,rank,fromNode,toNode);
            ans.push_back({{fromNode,toNode},edgeWeight});
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

    VEC_OF_PAIR_OF_PAIR ans = minimumSpanningTreeKruskalAlgo(wg.edges, 6);
    for (auto x: ans) {
        cout<<x.first.first<<" "<<x.first.second<<" "<<x.second<<endl;
    }
}
