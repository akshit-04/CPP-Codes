#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define For(i, n) for (int i = 0; i < n; i++)
#define VI vector<int>
#define VL vector<ll>
//int dp[2005][2005], n;
const int MOD = 1e9 + 7;
struct node
{
    int minimum;
    pair<int, int> maximum;
};

// A utility function to get the middle index from corner indexes.
int getMid(int s, int e) { return s + (e - s) / 2; }

/*  A recursive function to get the minimum and maximum value in
     a given range of array indexes. The following are parameters
     for this function.
  
    st    --> Pointer to segment tree
    index --> Index of current node in the segment tree. Initially
              0 is passed as root is always at index 0
    ss & se  --> Starting and ending indexes of the segment
                  represented  by current node, i.e., st[index]
    qs & qe  --> Starting and ending indexes of query range */
struct node MaxMinUntill(struct node *st, int ss, int se, int qs,
                         int qe, int index)
{
    // If segment of this node is a part of given range, then return
    //  the minimum and maximum node of the segment
    struct node tmp, left, right;
    if (qs <= ss && qe >= se)
        return st[index];

    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
    {
        tmp.minimum = INT_MAX;
        tmp.maximum = {INT_MIN, 0};
        return tmp;
    }

    // If a part of this segment overlaps with the given range
    int mid = getMid(ss, se);
    left = MaxMinUntill(st, ss, mid, qs, qe, 2 * index + 1);
    right = MaxMinUntill(st, mid + 1, se, qs, qe, 2 * index + 2);
    tmp.minimum = min(left.minimum, right.minimum);
    tmp.maximum = max(left.maximum, right.maximum);
    return tmp;
}

// Return minimum and maximum of elements in range from index
// qs (quey start) to qe (query end).  It mainly uses
// MaxMinUtill()
struct node MaxMin(struct node *st, int n, int qs, int qe)
{
    struct node tmp;

    // Check for erroneous input values
    if (qs < 0 || qe > n - 1 || qs > qe)
    {
        printf("Invalid Input");
        tmp.minimum = INT_MIN;
        tmp.minimum = INT_MAX;
        return tmp;
    }

    return MaxMinUntill(st, 0, n - 1, qs, qe, 0);
}

// A recursive function that constructs Segment Tree for array[ss..se].
// si is index of current node in segment tree st
void constructSTUtil(int arr[], int ss, int se, struct node *st,
                     int si)
{
    // If there is one element in array, store it in current node of
    // segment tree and return
    if (ss == se)
    {
        st[si].minimum = arr[ss];
        st[si].maximum = {arr[ss], ss};
        return;
    }

    // If there are more than one elements, then recur for left and
    // right subtrees and store the minimum and maximum of two values
    // in this node
    int mid = getMid(ss, se);
    constructSTUtil(arr, ss, mid, st, si * 2 + 1);
    constructSTUtil(arr, mid + 1, se, st, si * 2 + 2);

    st[si].minimum = min(st[si * 2 + 1].minimum, st[si * 2 + 2].minimum);
    st[si].maximum = max(st[si * 2 + 1].maximum, st[si * 2 + 2].maximum);
}

/* Function to construct segment tree from given array. This function
   allocates memory for segment tree and calls constructSTUtil() to
   fill the allocated memory */
struct node *constructST(int arr[], int n)
{
    // Allocate memory for segment tree

    // Height of segment tree
    int x = (int)(ceil(log2(n)));

    // Maximum size of segment tree
    int max_size = 2 * (int)pow(2, x) - 1;

    struct node *st = new struct node[max_size];

    // Fill the allocated memory st
    constructSTUtil(arr, 0, n - 1, st, 0);

    // Return the constructed segment tree
    return st;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, Q;
        cin >> n >> Q;
        ll q[n], qt[n];
        For(i, n)
                cin >>
            q[i];
        For(i, n)
                cin >>
            qt[i];
        while (Q--)
        {
            ll type;
            cin >> type;
            if (type == 1)
            {
                int l, r, ind;
                ll qtn, temp = 0;
                cin >> l >> r >> qtn;
                l--, r--;
                struct node *st = constructST(q, n);
                struct node result = MaxMin(st, n, l, r);
                qt[result.maximum.second] += qtn;
            }
            else
            {
                int v, ind, index;
                ll qtn, thr, temp = 0;
                cin >> v >> ind >> qtn >> thr;
                int l = ind - v - 1, r = ind + v - 1;
                if (l < 0)
                    l = 0;
                if (r >= n)
                    r = n - 1;
                struct node *st = constructST(q, n);
                struct node result = MaxMin(st, n, l, r);

                index = result.maximum.second;
                if (qt[index] >= qtn && q[index] >= thr)
                {
                    cout << index + 1 << "\n";
                    qt[index] -= qtn;
                }
                else
                    cout << "No purchase\n";
            }
        }
    }
}
