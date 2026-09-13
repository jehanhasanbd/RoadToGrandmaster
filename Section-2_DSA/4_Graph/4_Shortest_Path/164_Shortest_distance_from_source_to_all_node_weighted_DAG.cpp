#include<iostream>
#include<stack>
#include<unordered_map>
#include "../WeightedGraph.h"

using namespace std;

using ADJLIST = unordered_map<int, list<pair<int,int>>>;
using BOOLMAP = unordered_map<int, bool>;
using INTMAP = unordered_map<int, int>;


void dfs(ADJLIST &adjList, BOOLMAP &visited, stack<int> &st, int source) {
    visited[source] = true;

    for (auto neighbour: adjList[source]) {
        if (!visited[neighbour.first]) {
            dfs(adjList,visited, st, neighbour.first);
        }
    }

    st.push(source);
}

void shortestPathDAG(ADJLIST &adjList, int source,INTMAP &distance,INTMAP &parent) {
    BOOLMAP visited;
    stack<int> st;

    for (auto node: adjList) {
        if (!visited[node.first]) {
            dfs(adjList,visited,st,node.first);
        }
    }

    for (auto node: adjList) {
        distance[node.first] = INT_MAX;
    }

    distance[source] = 0;
    parent[source] = -1;

    while (!st.empty()) {
        int topNode = st.top();
        st.pop();

        for (auto neighbour: adjList[topNode]) {
            if (distance[topNode] != INT_MAX) {
                if (distance[neighbour.first] > distance[topNode] + neighbour.second) {
                    distance[neighbour.first] =  distance[topNode] + neighbour.second;
                    parent[neighbour.first] = topNode;
                }
            }
        }
    }

}

int main() {
    WeightedGraph wg;
    wg.addEdge(0,1,5,true);
    wg.addEdge(0,2,3,true);
    wg.addEdge(1,2,2,true);
    wg.addEdge(1,3,6,true);
    wg.addEdge(2,3,7,true);
    wg.addEdge(2,4,4,true);
    wg.addEdge(2,5,2,true);
    wg.addEdge(3,4,-1,true);
    wg.addEdge(4,5,-2,true);

    INTMAP distance,parent;

    shortestPathDAG(wg.adjList,0,distance,parent);
    for (auto x: parent) {
        cout<<"Node:"<<x.first<<" Parent:"<<x.second<<" Distance:"<<distance[x.first]<<endl;
    }
}