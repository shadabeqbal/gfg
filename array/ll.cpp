/*  // //  
   // //        
   \\//       
    \>>      
    //\\    
   //  \\
Author: Shadab Eqbal 
Created on: "28-02-2021" 
Name: 
Link: 
*/

#include <bits/stdc++.h>

using namespace std;

#define MAX 1e18
#define MIN -1e18
#define MOD 1000000007
#define PI 3.141592653589793238

#define pb push_back
#define mp make_pair
#define ll long long int

#define all(x) x.begin(), x.end()

#define clr(x) memset(&x, 0, sizeof(x))

#define srt(x) sort(all(x))
#define search(x, y) binary_search(all(x), y)

#define fr(x, n) for (ll i = x; i < n; i++)
#define frk(x, n, k) for (ll i = x; i < n; i += k)
#define frit(x) for (auto i = x.begin(); i != x.end(); ++i)

typedef pair<int, int> pi;
typedef vector<pi> vpi;
typedef vector<vpi> vvpi;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<ll, ll> pll;
typedef vector<pll> vpl;
typedef vector<ll> vll;
typedef vector<vll> vvll;

// A simple C++ program for traversal of a linked list
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// This function prints contents of linked list
// starting from the given node
void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

void insert(Node **p, int data)
{
    Node *temp = *p;
    if (temp == NULL)
    {
        temp = new Node();
        temp->data = data;
        temp->next = NULL;
        *p = temp;
    }
    else
    {
        temp = *p;
        while (temp->next != NULL)
            temp = temp->next;

        Node *n1 = new Node();
        n1->data = data;
        n1->next = NULL;
        temp->next = n1;
    }
}
int compstr(string str)
{
    string temp = str;
    reverse(temp.begin(), temp.end());
    if (temp == str)
        return 1;
    else
        return 0;
}
int foo(Node *A)
{
    Node *temp = A, *left = A, *right = A;

    int count = 0;
    while (left != NULL)
    {
        string str = "";
        int len = 0;
        right = left;
        while (right != NULL)
        {
            str += (right->data);
            len++;
            if (compstr(str))
                count = max(count, len);

            right = right->next;
        }

        left = left->next;
    }

    return count;
}
int main()
{
    Node *head = NULL;

    insert(&head,2);
    insert(&head,1);
    insert(&head,2);
    insert(&head,1);
    insert(&head,2);
    insert(&head,2);
    insert(&head,1);
    insert(&head,3);
    insert(&head,2);
    insert(&head,2);

    // insert(&head, 2);
    // insert(&head, 3);
    // insert(&head, 3);
    // insert(&head, 3);

    cout << foo(head);
    printList(head);

    return 0;
}