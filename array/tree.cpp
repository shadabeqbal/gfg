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
#include <fstream>
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
typedef vector<vi> vvi;
typedef pair<ll, ll> pll;
typedef vector<pll> vpl;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

void insert(struct node **p, int data)
{
	struct node *t = *p;
	if (t == NULL)
	{
		t = new node();
		t->data = data;
		t->left = NULL;
		t->right = NULL;
		*p = t;
	}
	else
	{
		t = *p;
		if (t->data >= data)
			insert(&t->left, data);
		else
			insert(&t->right, data);

		*p = t;
	}
}

void preorder(struct node *p)
{
	if (p == NULL)
		return;
	else
	{
		cout << p->data << " ";
		preorder(p->left);
		preorder(p->right);
	}
}
void inorder(struct node *p)
{
	if (p == NULL)
		return;
	else
	{

		inorder(p->left);
		cout << p->data << " ";
		inorder(p->right);
	}
}
void postorder(struct node *p)
{
	if (p == NULL)
		return;
	else
	{
		postorder(p->left);
		postorder(p->right);
		cout << p->data << " ";
	}
}
int findMin(struct node *p)
{
	if (p->left == NULL)
		return p->data;
	else
		findMin(p->left);
}

int height(struct node *p)
{
	if (p == NULL)
		return -1;
	else
		return 1 + max(height(p->left), height(p->right));
}
int isBST(struct node *p, struct node *l, struct node *r)
{

	if (p == NULL)
		return 1;

	if (l != NULL && p->data < l->data)
		return 0;

	if (r != NULL && p->data > r->data)
		return 0;

	return isBST(p->left, l, p) && isBST(p->right, p, r);
}
void levelorder(struct node *p)
{
	queue<struct node *> q;
	q.push(p);
	while (!q.empty())
	{

		if (q.front()->left != NULL)
		{
			q.push(q.front()->left);
		}

		if (q.front()->right != NULL)
		{
			q.push(q.front()->right);
		}

		cout << q.front()->data << " ";
		q.pop();
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	struct node *p = NULL;
	insert(&p, 5);
	insert(&p, 2);
	insert(&p, 1);
	insert(&p, 3);
	insert(&p, 15);
	insert(&p, 4);
	insert(&p, 17);
	insert(&p, 20);

	cout << "Preorder: ";
	preorder(p);

	cout << "\nInorder: ";
	inorder(p);

	cout << "\nPostorder: ";
	postorder(p);

	cout << "\nLevelorder: ";
	levelorder(p);

	cout << "\nMinElement: ";
	cout << findMin(p);

	cout << "\nHeight: ";
	cout << height(p);

	cout << "\nisBST: ";
	cout << isBST(p, NULL, NULL);

	return 0;
}