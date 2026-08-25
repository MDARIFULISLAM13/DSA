# Complete DSA Roadmap — Interview + Competitive Programming (Topic-wise, Easy → Hard)

Every topic lists all its important subtopics/variants together in one place. Ordered roughly from easy to hard overall.

---

### Arrays & Strings — Basics
* Static vs dynamic arrays (resizing, amortized O(1) append)
* In-place manipulation (reverse, rotate, partition)
* 2D arrays / matrix traversal (row-major, spiral, transpose, in-place rotation)
* String basics (mutability, StringBuilder/list-join tricks, ASCII/Unicode basics)

### Two Pointers
* Opposite direction (sorted array pair sum, container with most water)
* Same direction / fast-slow (remove duplicates, in-place partition)
* Two pointers across two arrays (merge-style)
* Two pointers + sorting combo (3Sum, 4Sum)

### Sliding Window
* Fixed size window
* Variable size window
* At most K distinct/condition
* Exactly K (derive via "at most K" − "at most K−1")
* Frequency-based window (character/element count matching)
* Window + HashMap (track counts inside window)
* Window + Deque (max/min inside window)
* Shrinkable vs non-shrinkable window

### Prefix Sum
* 1D prefix sum (range sum query O(1))
* 2D prefix sum (submatrix sum query)
* Difference array (O(1) range update)
* Prefix sum + HashMap (subarray sum equals K)
* Prefix XOR (subarray XOR queries)

### Kadane's Algorithm
* Basic max subarray sum
* Max subarray with at-least-one-element constraint
* Max circular subarray sum
* Min subarray sum (flipped logic)
* 2D Kadane (max sum submatrix)

### Hashing
* Frequency counting
* Complement lookup (Two Sum pattern)
* Grouping by key (Group Anagrams pattern)
* Custom key hashing (tuple/string encoding)
* Rolling hash basics (bridge to string algorithms)
* String hashing with double hashing (collision-safe, CP-important)

### Recursion
* Base case vs recursive case
* Recursion tree visualization
* Divide and conquer structure (split, solve, combine)
* Memoization (top-down caching)

### Sorting
* Merge Sort (stable, O(n log n), O(n) space)
* Quick Sort (Lomuto vs Hoare partition, pivot choice)
* Insertion Sort (small/nearly-sorted input use case)
* Counting Sort (non-comparison, O(n+k))
* Radix Sort / Bucket Sort
* Comparison-sort lower bound (why O(n log n) can't be beaten by comparisons)

### Binary Search
* Classic binary search (boundary handling: `left<=right` vs `left<right`)
* First/last occurrence (lower_bound / upper_bound)
* Search in rotated sorted array
* Binary search on 2D matrix
* Binary search on answer (monotonic predicate framing — minimize max / maximize min)
* Binary search on floating-point answers
* Ternary search (unimodal functions, CP-specific)

### Linked List
* Singly linked list (insert/delete/traverse from scratch)
* Doubly linked list
* Reversal — iterative and recursive
* Reversal of sub-range / groups of K
* Fast-slow pointer — find middle
* Fast-slow pointer — cycle detection (Floyd's) + cycle start derivation
* Dummy head node technique
* Merge K sorted linked lists

### Math Basics
* GCD/LCM (Euclidean algorithm)
* Modular arithmetic (handling negative mod, (a+b)%m, (a*b)%m)
* Sieve of Eratosthenes
* Fast exponentiation (binary exponentiation)
* Prime factorization (trial division, smallest prime factor sieve)

### Stack
* Array-based and linked-list-based implementation
* Min Stack (O(1) min retrieval)
* Expression evaluation (valid parentheses, calculator, RPN)

### Monotonic Stack
* Next greater / smaller element
* Previous greater / smaller element
* Largest rectangle in histogram
* Stock span / daily temperatures pattern

### Queue & Deque
* Array-based circular queue
* Queue using two stacks (and vice versa)
* Monotonic deque — sliding window max/min

### Number Theory
* Modular inverse (via Fermat's little theorem)
* Extended Euclidean algorithm (ax + by = gcd(a,b))
* Modular division
* Euler's totient function
* Chinese Remainder Theorem

### Trees — Traversal
* Preorder / Inorder / Postorder (recursive + iterative with explicit stack)
* Level order (BFS)
* Zigzag level order
* Vertical order traversal
* Boundary traversal

### Trees — Core Patterns
* Height/depth, diameter
* Balanced tree check
* Path sum (root-to-leaf, any-to-any)
* Lowest Common Ancestor — binary tree and BST versions
* Validate BST (range-based)
* Kth smallest/largest in BST
* Construct tree from traversal arrays
* Serialize/deserialize tree
* Invert/mirror tree

### Trie (Prefix Tree)
* Insert / Search / StartsWith / Delete
* Trie + DFS (word search with multiple words on grid)
* Trie for autocomplete-style problems

### Heap / Priority Queue
* Heapify up/down, build heap in O(n)
* Top-K elements pattern (fixed-size heap)
* Two-heap pattern (running median)
* K-way merge pattern
* Heap + greedy combo (task scheduling)

### Combinatorics
* nCr with modulo (factorial + modular inverse)
* Pascal's triangle
* Inclusion-exclusion principle
* Catalan numbers (bracket matching, tree counting problems)

### Backtracking
* General template (choose → recurse → un-choose)
* Pruning for efficiency
* Subsets (with/without duplicates)
* Permutations (with/without duplicates)
* Combinations, combination sum (with/without reuse)
* N-Queens, Sudoku solver
* Word search on grid
* Palindrome partitioning

### Greedy
* Greedy-choice property (recognizing when greedy works)
* Exchange argument (informal correctness proof)
* Interval scheduling / merge intervals
* Activity selection
* Jump game pattern, gas station pattern
* Huffman coding (greedy + heap combo)

### Graph — Representation & Traversal
* Adjacency list vs adjacency matrix
* BFS (shortest path, unweighted graph)
* DFS (recursive and iterative)
* Connected components (undirected graph)

### Topological Sort
* DFS-based (postorder + reverse)
* Kahn's algorithm (BFS + in-degree)
* Cycle detection in directed graph (white-gray-black coloring)

### Union-Find (DSU)
* Find, Union
* Path compression, union by rank/size
* Cycle detection (undirected graph)
* DSU on tree / small-to-large merging (CP-important)

### Shortest Path
* Dijkstra's algorithm (min-heap based)
* Bellman-Ford (negative weights, negative cycle detection)
* Floyd-Warshall (all-pairs shortest path)
* 0-1 BFS (deque-based)

### Minimum Spanning Tree
* Kruskal's algorithm (edge sort + DSU)
* Prim's algorithm (heap-based)

### Advanced Graph Patterns
* Bipartite check (2-coloring)
* Multi-source BFS
* Grid as graph (flood fill, islands, word ladder style)
* Binary Lifting (LCA in O(log n) per query, ancestor jumping)
* Euler Tour technique (subtree queries via flattening)

### Dynamic Programming — Foundations
* Optimal substructure, overlapping subproblems
* Top-down (memoization) vs bottom-up (tabulation)
* Defining DP state precisely, deriving recurrence
* Space optimization (2D → 1D rolling array)

### Dynamic Programming — 1D
* Climbing stairs, house robber (linear + circular)
* Decode ways
* Longest Increasing Subsequence — O(n²) and O(n log n)
* Word break

### Dynamic Programming — 2D
* Unique paths / minimum path sum (grid DP)
* Longest Common Subsequence (LCS)
* Edit distance (Levenshtein)
* Longest palindromic subsequence/substring
* Distinct subsequences, interleaving string

### Dynamic Programming — Knapsack Family
* 0/1 Knapsack (+ space optimized)
* Unbounded knapsack
* Coin change (minimum coins, count combinations)
* Subset sum, partition equal subset sum, target sum

### Dynamic Programming — Interval DP
* Matrix chain multiplication
* Burst balloons
* Palindrome partitioning (minimum cuts)
* General dp[i][j] interval-building pattern

### Dynamic Programming — Tree DP
* Postorder-based tree DP
* Diameter via tree DP
* House robber on tree
* Rerooting technique (changing root efficiently)

### Dynamic Programming — Bitmask & Digit DP
* Subset-state bitmask DP (n ≤ ~20 signal), TSP-style problems
* Digit DP (position + tight constraint state)
* Probability/expectation DP (concept level)

### Dynamic Programming — Optimizations (CP-focused)
* Convex hull trick
* Divide and conquer optimization
* Matrix exponentiation (linear recurrence speed-up)

### Segment Tree
* Build, point update, range query (sum/min/max)
* Lazy propagation (range update)
* Merge sort tree (advanced variant)
* Persistent segment tree (version history)

### Fenwick Tree (BIT)
* Point update, range sum query
* Range update, point query (difference trick)
* 2D BIT
* BIT for counting inversions

### Sqrt Decomposition & Offline Techniques
* Sqrt decomposition (block-based range query/update)
* Mo's Algorithm (offline query reordering)

### Bit Manipulation
* AND/OR/XOR/shift basics, check/set/clear/toggle a bit
* XOR trick (single non-duplicate number)
* Bit counting (Brian Kernighan's algorithm)
* Bitmasking for subset representation
* Power of two/three/four checks
* Bitset optimization (speeding up DP/graph with bitsets, CP-specific)

### Design Problems
* LRU Cache (HashMap + Doubly Linked List)
* LFU Cache (frequency tracking extension)
* O(1) Insert/Delete/GetRandom (array + hashmap)
* Ordered Set / Policy-based Data Structure (order statistics — find kth element, count less-than, CP-specific)
* Design a rate limiter (concept level)

### String Algorithms
* KMP (failure function / partial match table)
* Z-algorithm (Z-array construction)
* Rabin-Karp (rolling hash substring search)
* Manacher's algorithm (O(n) longest palindromic substring)

### Advanced String (CP-focused)
* Suffix array construction (+ LCP array)
* Suffix automaton
* Aho-Corasick (multi-pattern matching)

### Advanced Graph (CP-focused)
* Strongly Connected Components — Tarjan's and Kosaraju's
* Bridges and articulation points (Tarjan's low-link technique)
* Euler path / Euler circuit
* 2-SAT (boolean satisfiability as graph problem)
* Max Flow — Ford-Fulkerson and Dinic's algorithm
* Bipartite matching — Hopcroft-Karp
* Min-cost max-flow (advanced, know it exists)

### Tree Techniques (CP-focused)
* Heavy-Light Decomposition (path queries on tree)
* Centroid Decomposition (tree divide & conquer)

### Game Theory
* Nim game (XOR-based winner detection)
* Sprague-Grundy theorem (reducing games to Nim)

### Computational Geometry
* Convex hull
* Line intersection
* Closest pair of points

### Meet in the Middle
* Splitting brute force search space into two halves for large n

---

## How to Use This List (Easy → Hard Overall Order)

Study roughly in the order the topics appear above — it naturally moves from basic building blocks (arrays, two pointers, sliding window, hashing) through core structures (trees, heaps, graphs), into algorithmic reasoning (DP, backtracking, greedy), and finally into CP-heavy advanced structures (segment tree variants, advanced graph, advanced string, tree techniques, game theory, geometry).

**Priority note:** everything up through "Dynamic Programming — Knapsack Family" is essential for both interviews and CP — don't skip or rush these. Everything from "Segment Tree" onward leans more CP-specific; still useful for interviews at Google-level occasionally, but if you're short on time, these are the ones to trim first.

**Weekly habit:** after learning each topic, solve 15–20 problems on it. After every problem, write 3 lines: (1) what pattern it was, (2) where your first instinct went wrong, (3) the key insight.
