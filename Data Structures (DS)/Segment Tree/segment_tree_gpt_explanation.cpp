/**
 *
 * Author : Md.Ariful Islam
 * Topic  : Segment Tree (Point Update + Range Sum Query)
 *
 * এই কোডে আমরা:
 * 1) array input নিব
 * 2) segment tree build করব
 * 3) range sum query করব
 * 4) point update করব
 * 5) build/query/update এর ভিতরে কী হচ্ছে সব print করব
 *
 **/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// ------------------------------
// Global constant
// ------------------------------
const int N = 2e5 + 5;

// ------------------------------
// মূল array
// a[i] তে আসল value থাকবে
// ------------------------------
ll a[N];

// ------------------------------
// segment tree array
// tree[node] = ওই node যেই range represent করে তার sum
// সাধারণত 4*N নিলেই safe
// ------------------------------
ll tree[4 * N];

// ------------------------------
// build function
// node  = tree এর current node নাম্বার
// start = current segment এর শুরু index
// end   = current segment এর শেষ index
//
// এই function পুরো segment tree build করে
// ------------------------------
void build(int node, int start, int end)
{
    cout << "\n[BUILD CALL] node = " << node
         << ", range = [" << start << ", " << end << "]\n";

    // যদি start == end হয়,
    // তাহলে এটা single element range
    // অর্থাৎ leaf node
    if (start == end)
    {
        tree[node] = a[start];

        cout << "  -> Leaf node found\n";
        cout << "  -> tree[" << node << "] = a[" << start << "] = " << a[start] << "\n";
        return;
    }

    // current segment কে দুই ভাগে ভাগ করব
    int mid = (start + end) / 2;

    cout << "  -> mid = " << mid << "\n";
    cout << "  -> Left child will handle range [" << start << ", " << mid << "]\n";
    cout << "  -> Right child will handle range [" << mid + 1 << ", " << end << "]\n";

    // left subtree build
    build(node * 2, start, mid);

    // right subtree build
    build(node * 2 + 1, mid + 1, end);

    // দুই child এর sum যোগ করে parent node এর value set করব
    tree[node] = tree[node * 2] + tree[node * 2 + 1];

    cout << "  -> tree[" << node << "] = tree[" << node * 2 << "] + tree[" << node * 2 + 1 << "] = "
         << tree[node * 2] << " + " << tree[node * 2 + 1] << " = " << tree[node] << "\n";
}

// ------------------------------
// query function
// node  = current tree node
// start = current segment start
// end   = current segment end
// l, r  = user এর query range
//
// return করবে sum(l...r)
// ------------------------------
ll query(int node, int start, int end, int l, int r)
{
    cout << "\n[QUERY CALL] node = " << node
         << ", current range = [" << start << ", " << end << "]"
         << ", query range = [" << l << ", " << r << "]\n";

    // Case 1: No overlap
    // current segment পুরোপুরি query range এর বাইরে
    if (end < l || start > r)
    {
        cout << "  -> No Overlap\n";
        cout << "  -> return 0\n";
        return 0;
    }

    // Case 2: Complete overlap
    // current segment পুরোপুরি query range এর ভিতরে
    if (l <= start && end <= r)
    {
        cout << "  -> Complete Overlap\n";
        cout << "  -> Directly return tree[" << node << "] = " << tree[node] << "\n";
        return tree[node];
    }

    // Case 3: Partial overlap
    // তাহলে দুই পাশে ভাগ হয়ে query হবে
    int mid = (start + end) / 2;

    cout << "  -> Partial Overlap\n";
    cout << "  -> mid = " << mid << "\n";

    ll leftSum = query(node * 2, start, mid, l, r);
    ll rightSum = query(node * 2 + 1, mid + 1, end, l, r);

    cout << "  -> leftSum = " << leftSum << ", rightSum = " << rightSum << "\n";
    cout << "  -> return " << leftSum + rightSum << "\n";

    return leftSum + rightSum;
}

// ------------------------------
// update function
// node  = current tree node
// start = current segment start
// end   = current segment end
// idx   = যে index update হবে
// val   = নতুন value
//
// point update করবে
// অর্থাৎ a[idx] = val
// ------------------------------
void update(int node, int start, int end, int idx, ll val)
{
    cout << "\n[UPDATE CALL] node = " << node
         << ", current range = [" << start << ", " << end << "]"
         << ", target idx = " << idx
         << ", new value = " << val << "\n";

    // যদি leaf node এ চলে আসি
    // অর্থাৎ start == end
    if (start == end)
    {
        cout << "  -> Leaf node found\n";
        cout << "  -> Previous a[" << idx << "] = " << a[idx] << "\n";

        a[idx] = val;
        tree[node] = val;

        cout << "  -> New a[" << idx << "] = " << a[idx] << "\n";
        cout << "  -> tree[" << node << "] = " << tree[node] << "\n";
        return;
    }

    int mid = (start + end) / 2;

    cout << "  -> mid = " << mid << "\n";

    // idx যদি mid এর বাম পাশে হয়
    // তাহলে left child এ নামব
    if (idx <= mid)
    {
        cout << "  -> idx <= mid, going to left child\n";
        update(node * 2, start, mid, idx, val);
    }
    else
    {
        // না হলে right child এ নামব
        cout << "  -> idx > mid, going to right child\n";
        update(node * 2 + 1, mid + 1, end, idx, val);
    }

    // child update হয়ে গেলে parent node নতুন করে calculate হবে
    tree[node] = tree[node * 2] + tree[node * 2 + 1];

    cout << "  -> After update, tree[" << node << "] = tree[" << node * 2 << "] + tree[" << node * 2 + 1 << "] = "
         << tree[node * 2] << " + " << tree[node * 2 + 1] << " = " << tree[node] << "\n";
}

// ------------------------------
// সুন্দর করে মূল array print করার function
// ------------------------------
void printArray(int n)
{
    cout << "\n========== CURRENT ARRAY ==========\n";
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << a[i] << "\n";
    }
    cout << "===================================\n";
}

// ------------------------------
// tree array এর প্রথম কিছু value print করার function
// ------------------------------
void printTree(int n)
{
    cout << "\n========== SEGMENT TREE ARRAY ==========\n";

    // segment tree এর usable অংশ roughly 4*n পর্যন্ত
    for (int i = 1; i <= 4 * n; i++)
    {
        // সব print করলে অনেক 0 আসবে
        // তাও শেখার জন্য print করছি
        cout << "tree[" << i << "] = " << tree[i] << "\n";
    }

    cout << "========================================\n";
}

// ------------------------------
// main function
// ------------------------------
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // array print
    printArray(n);

    cout << "\n=========== BUILD START ===========\n";
    build(1, 0, n - 1);
    cout << "\n=========== BUILD END =============\n";

    while (true)
    {
        cout << "\n\nChoose operation:\n";
        cout << "1 -> Range Sum Query\n";
        cout << "2 -> Point Update\n";
        cout << "3 -> Print Segment Tree\n";
        cout << "4 -> Print Array\n";
        cout << "5 -> Exit\n";
        cout << "Enter type: ";

        int type;
        cin >> type;

        if (type == 1)
        {
            int l, r;
            cout << "Enter l and r: ";
            cin >> l >> r;

            // basic validation
            if (l < 0 || r >= n || l > r)
            {
                cout << "Invalid range!\n";
                continue;
            }

            cout << "\n======= QUERY PROCESS START =======\n";
            ll ans = query(1, 0, n - 1, l, r);
            cout << "\nFinal Answer: sum[" << l << "..." << r << "] = " << ans << "\n";
            cout << "======= QUERY PROCESS END =========\n";
        }
        else if (type == 2)
        {
            int idx;
            ll val;
            cout << "Enter idx and new value: ";
            cin >> idx >> val;

            if (idx < 0 || idx >= n)
            {
                cout << "Invalid index!\n";
                continue;
            }

            cout << "\n======= UPDATE PROCESS START =======\n";
            update(1, 0, n - 1, idx, val);
            cout << "\nUpdate complete.\n";
            cout << "======= UPDATE PROCESS END =========\n";
        }
        else if (type == 3)
        {
            printTree(n);
        }
        else if (type == 4)
        {
            printArray(n);
        }
        else if (type == 5)
        {
            cout << "Program finished.\n";
            break;
        }
        else
        {
            cout << "Invalid operation type!\n";
        }
    }

    return 0;
}