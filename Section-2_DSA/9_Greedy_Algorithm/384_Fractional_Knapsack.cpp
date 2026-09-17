#include <algorithm>
#include<iostream>
#include <vector>
using namespace std;


struct Item {
    int value;
    int weight;
};

using VECTOR = vector<int>;
using VECTOR_OF_ITEM = vector<Item>;


bool cmp(Item item1, Item item2) {
    return ((float)item1.value / item1.weight) > ((float)item2.value / item2.weight);
}

int fractional_knapsack(VECTOR values, VECTOR weights, int capacity) {
    VECTOR_OF_ITEM items;
    for (int i = 0; i < values.size(); ++i) {
        items.push_back({values[i],weights[i]});
    }
    sort(items.begin(), items.end(), cmp);

    int total_value=0;
    for (auto item: items) {
        if (item.weight <= capacity) {
            capacity -= item.weight;
            total_value += item.value;
        }
        else {
            total_value += (float)item.value / (item.weight * capacity);
        }
    }
    return total_value;
}

int main() {
    int capacity = 50;
    VECTOR values = { 60, 100, 120};
    VECTOR weights = {10, 20, 30};
    cout<<fractional_knapsack(values, weights, capacity);

}