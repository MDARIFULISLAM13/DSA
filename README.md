# DSA Roadmap (Interview + CP Merged) — 5 Phases (Detailed, English)

Each topic below is broken down into the exact techniques/variants you need to practice — for both interviews and competitive programming.

---

## Phase 1: Foundation

### Two Pointers
* Opposite direction (sorted array, pair sum)
* Same direction (fast-slow, in-place partition)
* Two pointers on two different arrays (merge-style)
* Two pointers + sorting combo

### Sliding Window
* Fixed size window
* Variable size window
* At most K (distinct elements / condition)
* Exactly K (derive from "at most K" − "at most K-1")
* Frequency-based window (character/element count matching)
* Window + HashMap (track counts inside window)
* Window + Deque (max/min inside window)
* Shrinkable vs non-shrinkable window

### Prefix Sum
* 1D prefix sum (range sum query O(1))
* 2D prefix sum (submatrix sum query)
* Difference array (O(1) range update)
* Prefix sum + HashMap (subarray sum equals K pattern)
* Prefix XOR (subarray XOR queries)

### Kadane's Algorithm
* Basic max subarray sum
* Max subarray with at least one element constraint
* Max circular subarray sum
* Min subarray sum (flip logic)
* 2D Kadane (max sum submatrix)

### Hashing
* Frequency counting
* Complement lookup (Two Sum style)
* Grouping by key (Group Anagrams style)
* Hashing with custom key (tuple/string encoding)
* Rolling hash basics (intro, used later in string matching)

### Recursion
* Identifying base case vs recursive case
* Recursion tree visualization (draw by hand)
* Divide and conquer structure (split, solve, combine)
* Memoization (top-down caching) — bridge to DP
* Recursion with backtracking state (preview)

### Sorting
* Merge Sort (stable, O(n log n), O(n) space)
* Quick Sort (Lomuto vs Hoare partition, pivot selection)
* Insertion Sort (when useful: small/nearly sorted input)
* Counting Sort (non-comparison, O(n+k))
* When to use which sort (stability, space, input size)

### Binary Search
* Classic binary search (boundary handling: `left <= right` vs `left < right`)
* First/last occurrence (lower_bound / upper_bound)
* Search in rotated sorted array
* Binary search on 2D matrix
* Binary search on answer (introduced fully in Phase 2)

### Linked List
* Singly linked list (insert/delete/traverse from scratch)
* Doubly linked list
* Reversal — iterative
* Reversal — recursive
* Reversal of sub-range / groups of K
* Fast-slow pointer — find middle
* Fast-slow pointer — cycle detection (Floyd's)
* Cycle start point derivation
* Dummy head node technique (edge case safety)

### Math Basics
* GCD/LCM (Euclidean algorithm)
* Modular arithmetic ((a+b)%m, (a*b)%m, negative mod handling)
* Sieve of Eratosthenes (all primes up to n)
* Fast exponentiation (binary exponentiation, a^b % m)

---

## Phase 2: Core Structures

### Stack
* Array-based implementation
* Linked-list-based implementation
* Min Stack (O(1) min retrieval design)
* Expression evaluation (valid parentheses)
* Expression evaluation (calculator I/II)
* Expression evaluation (Reverse Polish Notation)

### Monotonic Stack
* Next greater element
* Next smaller element
* Previous greater/smaller element
* Largest rectangle in histogram
* Stock span / daily temperatures pattern

### Queue & Deque
* Array-based circular queue
* Queue using two stacks (and vice versa)
* Monotonic deque — sliding window maximum
* Monotonic deque — sliding window minimum

### Trees — Traversal
* Preorder (recursive + iterative with stack)
* Inorder (recursive + iterative with stack)
* Postorder (recursive + iterative with stack)
* Level order (BFS with queue)
* Zigzag level order
* Vertical order traversal
* Boundary traversal

### Trees — Core Patterns
* Height/depth of tree
* Diameter of tree
* Balanced tree check
* Path sum (root-to-leaf, any-to-any)
* Lowest Common Ancestor — binary tree version
* Lowest Common Ancestor — BST version
* Validate BST (range-based, not just immediate children)
* Kth smallest/largest in BST
* Construct tree from traversal arrays
* Serialize/deserialize tree
* Invert/mirror tree

### Trie (Prefix Tree)
* Insert
* Search (exact word)
* StartsWith (prefix check)
* Delete
* Trie + DFS (word search on grid with multiple words)
* Trie for autocomplete-style problems

### Heap / Priority Queue
* Heapify up (insert)
* Heapify down (extract)
* Build heap in O(n)
* Top-K elements pattern (fixed-size heap)
* Two-heap pattern (running median)
* K-way merge pattern (merge K sorted lists/arrays)
* Heap + greedy combo (task scheduling)

### Binary Search — Advanced
* Binary search on answer (monotonic predicate framing)
* Minimize the maximum pattern
* Maximize the minimum pattern
* Binary search on floating point answers

### Number Theory
* Modular inverse (via Fermat's little theorem)
* Extended Euclidean algorithm (ax + by = gcd(a,b))
* Modular division

---

## Phase 3: Graph + Backtracking + Greedy

### Graph — Representation & Traversal
* Adjacency list
* Adjacency matrix
* BFS (shortest path in unweighted graph)
* DFS — recursive
* DFS — iterative (explicit stack)
* Connected components (undirected graph)

### Topological Sort
* DFS-based (postorder + reverse)
* Kahn's algorithm (BFS + in-degree)
* Cycle detection in directed graph (white-gray-black coloring)

### Union-Find (DSU)
* Find operation
* Union operation
* Path compression
* Union by rank / union by size
* Cycle detection in undirected graph
* Connected components via DSU

### Shortest Path
* Dijkstra's algorithm (min-heap based)
* Bellman-Ford (handles negative weights, detects negative cycle)
* Floyd-Warshall (all-pairs shortest path)
* 0-1 BFS (deque-based shortcut)

### Minimum Spanning Tree
* Kruskal's algorithm (edge sort + DSU)
* Prim's algorithm (heap-based)

### Advanced Graph Patterns
* Bipartite check (2-coloring via BFS/DFS)
* Multi-source BFS
* Grid as graph (flood fill, number of islands style)
* Word ladder style (BFS on implicit graph)

### Backtracking
* General template (choose → recurse → un-choose)
* Pruning for efficiency
* Subsets (without duplicates)
* Subsets (with duplicates — sort + skip logic)
* Permutations (without duplicates)
* Permutations (with duplicates)
* Combinations
* Combination sum (reuse allowed)
* Combination sum (no reuse, skip duplicates)
* N-Queens
* Sudoku solver
* Word search on grid (DFS + backtrack + visited marking)
* Palindrome partitioning

### Greedy
* Greedy-choice property (identifying when greedy works)
* Exchange argument (informal proof technique)
* Interval scheduling
* Merge intervals
* Activity selection
* Jump game pattern
* Gas station pattern

### Combinatorics
* nCr with modulo (factorial + modular inverse)
* Pascal's triangle
* Inclusion-exclusion principle
* Permutation/combination counting basics

---

## Phase 4: DP + Range Query Structures (Interview-complete zone)

### DP Foundations
* Identifying optimal substructure
* Identifying overlapping subproblems
* Top-down (memoization)
* Bottom-up (tabulation)
* Defining the DP state precisely (write in one sentence before coding)
* Deriving the recurrence relation
* Space optimization (2D to 1D rolling array)

### 1D DP
* Climbing stairs
* House robber (linear)
* House robber (circular)
* Decode ways
* Longest Increasing Subsequence — O(n²) approach
* Longest Increasing Subsequence — O(n log n) approach (patience sorting)
* Word break

### 2D DP
* Unique paths / minimum path sum (grid DP)
* Longest Common Subsequence (LCS)
* Edit distance (Levenshtein)
* Longest palindromic subsequence
* Longest palindromic substring (DP version)
* Distinct subsequences
* Interleaving string

### Knapsack Family
* 0/1 Knapsack (include vs exclude)
* 0/1 Knapsack — space optimized
* Unbounded knapsack (unlimited reuse)
* Coin change — minimum coins
* Coin change — count combinations
* Subset sum
* Partition equal subset sum
* Target sum

### Interval DP
* Matrix chain multiplication (teaching example)
* Burst balloons
* Palindrome partitioning — minimum cuts
* General dp[i][j] pattern (build from smaller intervals)

### Tree DP
* Postorder-based tree DP (children first, then combine at parent)
* Diameter via tree DP
* House robber on tree

### Bitmask DP
* Subset-state DP (n ≤ ~20 signal)
* Traveling salesman style problems
* Assignment problems with bitmask state

### Digit DP
* State = position + tight constraint (concept-level understanding)

### Segment Tree
* Build from array
* Point update
* Range query (sum/min/max)
* Lazy propagation (range update)
* Merge sort tree (advanced variant, CP-focused)

### Fenwick Tree (BIT)
* Point update, range sum query
* Range update, point query (using difference trick)
* 2D BIT (matrix range query)

### Bit Manipulation
* AND/OR/XOR/shift basics
* Check/set/clear/toggle a bit
* XOR trick (find single non-duplicate number)
* Bit counting (Brian Kernighan's algorithm)
* Bitmasking for subset representation
* Power of two/three/four checks

### Design Problems
* LRU Cache (HashMap + Doubly Linked List)
* LFU Cache (frequency tracking extension)
* O(1) Insert/Delete/GetRandom (array + hashmap)
* Design a rate limiter (concept level)

### String Algorithms
* KMP (failure function / partial match table)
* Z-algorithm (Z-array construction)
* Rabin-Karp (rolling hash for substring search)

---

## Phase 5: CP-Advanced

### Advanced Graph
* Strongly Connected Components — Tarjan's algorithm
* Strongly Connected Components — Kosaraju's algorithm
* Bridges (Tarjan's low-link technique)
* Articulation points
* Euler path / Euler circuit
* 2-SAT (boolean satisfiability as graph problem)
* Max Flow — Ford-Fulkerson
* Max Flow — Dinic's algorithm
* Bipartite matching — Hopcroft-Karp

### Advanced String
* Suffix array construction
* Aho-Corasick (multi-pattern matching)
* Manacher's algorithm (O(n) longest palindromic substring)

### Advanced DP
* Rerooting technique (tree DP with changing root)
* Convex hull trick (DP optimization)
* Divide and conquer optimization (for recurrences)

### Tree Techniques
* Heavy-Light Decomposition (path queries on tree)
* Centroid Decomposition (tree divide & conquer)

### Game Theory
* Nim game (XOR-based winner detection)
* Sprague-Grundy theorem (reducing games to Nim)

### Others
* Sparse Table (O(1) static range min/max/gcd query)
* Mo's Algorithm (offline query reordering)
* Persistent Segment Tree (version history of updates)
* Meet in the middle (split brute force for large n)
* Computational geometry basics (convex hull, line intersection, closest pair of points)

---

## Strategy for You (Job-ready in 4–5 months, while continuing CP)

1. **Phase 1–3** — Since you already do CP, most of this should feel familiar. Use it as a checklist and fill in any gaps rather than starting from zero.
2. **Phase 4** — This is your top priority. DP + Segment/Fenwick Tree + Design Problems are what interviews test most heavily.
3. **Phase 5** — Valuable for CP, optional for interviews. If time is short, skip this and go deeper on Phase 1–4 instead. Just keep the CP topics you're already comfortable with (SCC, Max Flow, etc.) fresh.

**Weekly habit:** After learning each subtopic, solve 15–20 problems on it. After every problem, write 3 lines: (1) what pattern it was, (2) where your first instinct went wrong, (3) the key insight.
