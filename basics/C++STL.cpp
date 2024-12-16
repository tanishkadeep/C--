#include <bits/stdc++.h>
using namespace std;

void typePair()
{
    pair<int, int> p = {1, 5};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].second;
}

void typeVector()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(53);
    v.emplace_back(7);
    v.emplace_back(45);
    v.emplace_back(-6);

    cout << v[0] << endl;
    // cout << v[1];

    vector<pair<int, int>> p;
    p.push_back({1, 2});
    p.emplace_back(3, 4);
    // cout << p[1].second << endl;

    vector<int> v1(5, 100);
    // cout << v1[4] << endl;
    //  cout << v1.back();

    vector<int> v2(5);
    // cout << v2[2] << endl;

    vector<int> v3(v1);
    // cout << v3[4] << endl;

    //------iterators---------
    vector<int>::iterator it = v1.begin();
    // cout << *(it);

    // end() points at one location after the end.
    vector<int>::iterator it1 = v.end();
    it1--;
    cout << *(it1) << endl;

    // for(vector<int>::iterator it = v.begin(); it!= v.end(); it++)
    //     cout << *(it) << " ";
    // cout << endl;

    // for(auto it = v.begin(); it!= v.end(); it++)
    //     cout << *(it) << " ";
    // cout << endl;

    for (auto ele : v)
        cout << ele << " ";
}

void vector_deletion()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(53);
    v.emplace_back(7);
    v.emplace_back(45);
    v.emplace_back(-6);

    for (auto element : v)
        cout << element << " ";
    cout << endl;

    //--------deletion---------
    // v.erase(v.begin() + 1); // deletes element at position 1 i.e. 53

    // v = {5, 53, 7, 45, -6} -> erase 53 to 45
    v.erase(v.begin() + 1, v.begin() + 4);
    // point to one after that needs to be deleted i.e. here v[3] os the end so point to v.begin() + 4 (not 3)

    for (auto element : v)
        cout << element << " ";
    cout << endl;
}

void vector_insertion()
{
    vector<int> v(3, 100);
    for (auto ele : v)
        cout << ele << " ";
    cout << endl;

    v.insert(v.begin(), 300);
    for (auto ele : v)
        cout << ele << " ";
    cout << endl;

    v.insert(v.begin() + 2, 2, 23); // inserts at v[2] after v[1]
    for (auto ele : v)
        cout << ele << " ";
    cout << endl;

    vector<int> copy(6, 50);
    v.insert(v.begin(), copy.begin() + 3, copy.end());
    for (auto ele : v)
        cout << ele << " ";
}

void vector_others()
{
    vector<int> v(2, 100);
    v.size(); // 2

    v.push_back(56); // {100,100,56}

    v.pop_back(); // {100,100}

    vector<int> v1(2, 23);
    vector<int> v2(4, 78);
    v2.swap(v1); // v1 = {78,78,78,78}, v2={23,23}

    v.clear();         // v={}
    cout << v.empty(); // returns 0 or 1
}

void typeList()
{
    list<int> ls;        //{}
    ls.push_back(8);     // {8}
    ls.emplace_back(10); //{8, 10}
    ls.push_front(1);    //{1, 8, 10}
    ls.emplace_front(23);

    for (auto e : ls)
        cout << e << " ";

    // rest functions same as vector - size, end, rend, begin, rbegin, clear, insert, swap
}

void typeDeque()
{
    deque<int> dq;
    dq.push_back(9);
    dq.push_front(3);
    dq.emplace_back(7);
    dq.emplace_front(1);

    for (auto e : dq)
        cout << e << " ";

    dq.pop_back();
    dq.pop_front();
}

void typeStack()
{
    stack<int> st;
    st.push(5);
    st.push(3);
    st.push(7);
    st.emplace(8);

    cout << st.top();
    st.pop();

    // size, empty, swap - same
}

void typeQueue()
{
    queue<int> q;
    q.push(8);     // 8
    q.push(9);     // 8,9
    q.emplace(10); // 8,9,10

    q.back() += 5; // 8,9,15
    cout << q.back() << endl;

    q.pop(); // 9,15
    cout << q.front();

    // size, empty, swap - same
}

void typePriorityQueue()
{
    // largest element stays on top
    // uses maximum heap
    // push, pop = log(n), top = O(1)

    priority_queue<int> pq;
    pq.push(8);    // 8
    pq.push(4);    // 8,4
    pq.push(23);   // 23,8,4
    pq.emplace(5); // 23,8,5,4

    cout << pq.top() << endl;
    pq.pop(); // pops 23
    cout << pq.top() << endl;

    // minimum heap - smallest element on top
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(8);
    pq1.push(4);
    pq1.push(23);

    cout << pq1.top();
    // size, empty, swap - same
}

void typeSet()
{
    // unique and sorted
    set<int> s;
    s.insert(1);  // 1
    s.emplace(2); // 1,2
    s.insert(2);  // 1,2
    s.insert(4);  // 1,2,4
    s.insert(3);  // 1,2,3,4
    s.insert(5);  // 1,2,3,4,5

    auto it = s.find(3);  // returns location of 3
    auto it1 = s.find(6); // if not in set, returns location of s.end(), one position after last element

    s.erase(2); //---- takes logarithmic time
    // we can also use iterator to erase
    s.erase(it); //----takes constant time

    /*
    delete range
    --> {1,2,3,4,5}
    auto it1 = s.find(2);
    auto it2 = s.find(4);
    s.erase(it1, it2); ----> {1,4,5}
    */

    int c = s.count(1); // returns 0 or 1 since unique

    // lower and upper bound function works
}

void lowerAndUpperBound()
{
    int a[] = {1, 4, 5, 6, 9, 9, 9};

    int n = sizeof(a) / sizeof(a[0]);
    int ind = lower_bound(a, a + n, 0) - a; // returns first occurrence
    cout << ind << endl;

    int ind1 = upper_bound(a, a + n, 10) - a; // returns one after last occurrence
    cout << ind1 << endl;
}

void typeMultiset()
{
    // sorted but not unique

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2); // 1 1 2
    ms.insert(1); // 1 1 1 2

    int c = ms.count(1);
    cout << c << endl;

    ms.erase(1); // all 1s are erased

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.erase(ms.find(1)); // just deletes first occurrence
    // ms.erase(ms.find(1), ms.find(1) + 2); //start - end

    for (auto it : ms)
        cout << it << " ";
}

void typeUnorderedset()
{
    // unique but not sorted

    unordered_set<int> us;

    // time complexity is better - O(1) compared to O(log(n)) for rest set
    //  in worst case it goes to log(n) but very rare
    // lower and upper bound function dont work
    // rest all same
}

void typeMap()
{
    map<int, int> m;
    map<pair<int, int>, int> m1;
    map<int, pair<int, int>> m2;

    m[1] = 2;
    m.emplace(6, 9);
    m.insert({2, 4});

    for (auto it : m)
        cout << it.first << " " << it.second << endl; // stores in sorted order

    cout << m[1] << endl;
    cout << m[3] << endl; // if not in map returns 0

    // auto it1 = m.find(1);
    auto it1 = m.find(78);       // not in map, returns 1
    cout << it1->second << endl; // it1.second gives error

    cout << endl;

    // auto it2 = m.lower_bound(1);
    auto it2 = m.upper_bound(1);
    cout << it2->second << endl;

    // erase, swap, size, empty - same
}

void typeMultimap()
{
    // duplicate keys, sorted order
}

void typeUnorderedmap()
{
    // unique but not sorted
    //  same as set and unordered set
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    else if (p1.second > p2.second)
        return false;

    if (p1.first > p2.first)
        return true;
    return false;
}

void sorting()
{
    int a[] = {1, 5, 6, 2, 3, 7, 1};
    int n = sizeof(a) / sizeof(a[0]);

    // sort(a, a + n);
    // sort(a + 2, a + 4);
    sort(a, a + n, greater<int>()); // desc order

    for (int i : a)
        cout << i << " ";
    cout << endl;
    cout << endl;

    pair<int, int> p[] = {{1, 2}, {3, 2}, {6, 9}, {6, 4}};
    int n1 = sizeof(p) / sizeof(p[0]);

    // sort acc to second element, if same, then acc to first element but in desc order

    sort(p, p + n1, comp);
    for (auto it : p)
        cout << it.first << " " << it.second << endl;
    cout << endl;
}

void typeOtherFunctions()
{
    int a = 7;
    int c = __builtin_popcount(a);
    cout << c << endl;

    long long num = 9223372036854775807;
    cout << __builtin_popcountll(num) << endl;
    cout << endl;

    string s = "cab";
    // always started from sorted string
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int arr[] = {1, 8, 3, 4, 6, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = *max_element(arr, arr + n);
    int min = *min_element(arr, arr + n);
    cout << max << endl;
    cout << min << endl;
}

int main()
{
    // typePair();
    // typeVector();
    // vector_deletion();
    // vector_insertion();
    // vector_others();
    // typeList();
    // typeDeque();
    // typeStack();
    // typeQueue();
    // typePriorityQueue();
    // typeSet();
    // lowerAndUpperBound();
    // typeMultiset();
    // typeUnorderedset();
    // typeMap();
    // typeMultimap();
    // typeUnorderedmap();
    // sorting();
    // typeOtherFunctions();
    return 0;
}