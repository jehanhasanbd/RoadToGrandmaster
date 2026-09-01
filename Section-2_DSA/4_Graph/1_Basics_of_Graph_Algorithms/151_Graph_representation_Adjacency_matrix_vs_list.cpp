#include<iostream>
#include "../Graph.h"

using namespace std;



int main() {
    Graph g1;
    g1.addEdge(0, 1, false);
    g1.addEdge(2, 5, true);  // Matrix will resize to accommodate vertex 5
    g1.addEdge(10, 3, false); // Matrix will resize again
    g1.printAdjMatrix();

    // Using parameterized constructor - pre-allocated size
    Graph g2(5);
    g2.addEdge(0, 1, false);
    g2.addEdge(2, 3, true);
    g2.addEdge(4, 5, false); // Matrix will resize if vertex 5 doesn't exist
    g2.printAdjMatrix();
}