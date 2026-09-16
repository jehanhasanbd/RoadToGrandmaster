#include<iostream>
#include<stack>
#include<set>
#include<unordered_map>
#include "../WeightedGraph.h"

using namespace std;


using VECOFVEC = vector<vector<int>>;

void floydWarshalShortestPathAllPair(VECOFVEC adjMatrix) {
    int vertex = adjMatrix.size();


    for (int k = 0; k < vertex; ++k) {
        for (int i = 0; i < vertex; ++i) {
            for (int j = 0; j < vertex; ++j) {
                if (adjMatrix[i][k]!=INT_MAX && adjMatrix[k][j]!=INT_MAX) {
                    adjMatrix[i][j] = min(adjMatrix[i][j], adjMatrix[i][k] + adjMatrix[k][j]);
                }
            }
        }

    }
    for (int i = 0; i < vertex; ++i) {
        for (int j = 0; j < vertex; ++j) {
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    WeightedGraph wg;
    wg.addEdge(1,2,3,true);
    wg.addEdge(2,1,8,true);
    wg.addEdge(1,4,7,true);
    wg.addEdge(4,1,2,true);
    wg.addEdge(3,4,1,true);
    wg.addEdge(3,1,5,true);
    wg.addEdge(2,3,2,true);
    floydWarshalShortestPathAllPair(wg.adjMatrix);
}