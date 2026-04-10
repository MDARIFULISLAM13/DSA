#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <random>
#include <ctime>

using namespace std;

void generate_random_tree(int n)
{
    if (n <= 0)
        return;

    // The number of edges in a tree is always n - 1
    int m = n - 1;
    cout << m << endl;

    // To make the tree truly random, we shuffle the node labels
    vector<int> nodes(n);
    iota(nodes.begin(), nodes.end(), 1); // Fills 1, 2, ..., n

    srand(time(0));
    random_shuffle(nodes.begin(), nodes.end());

    // Connect node i to a random node from the already "connected" set {0...i-1}
    for (int i = 1; i < n; i++)
    {
        int remote_idx = rand() % i;
        // Output the edge between the new node and a random existing node
        cout << nodes[i] << " " << nodes[remote_idx] << endl;
    }
}

int main()
{
    int n;
    // For example, if you want a tree with 100 nodes
    if (!(cin >> n))
        n = 100;

    generate_random_tree(n);

    return 0;
}