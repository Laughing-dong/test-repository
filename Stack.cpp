#include <iostream>
#include <stack>
#include<vector>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
    int val;         // 节点值
    TreeNode *left;  // 左子节点
    TreeNode *right; // 右子节点
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int main()
{
    /* stack<int> stk;
    stk.push(4);
    stk.push(3);
    stk.push(1);
    stk.push(2);
    stk.push(6);
    stk.push(5);
    stk.push(7);
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();

    ListNode *n1=new ListNode(1);
    ListNode *n2=new ListNode(2);
    ListNode *n3=new ListNode(3);
    ListNode *n4=new ListNode(4);
    ListNode *n5=new ListNode(5);
    ListNode *n6=new ListNode(6);
    ListNode *n7=new ListNode(7);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=n7;

    // 初始化节点
TreeNode *t1 = new TreeNode(3); // 根节点 root
TreeNode *t2 = new TreeNode(4);
TreeNode *t3 = new TreeNode(5);
TreeNode *t4 = new TreeNode(1);
TreeNode *t5 = new TreeNode(2);

// 构建引用指向
t1->left = t2;
t1->right = t3;
t2->left = t4;
t2->right = t5; */

/* int vertices[5]={1,2,3,4,5};
int edges[5][5]={{0,1,1,1,1},
                {1,0,0,1,0},
                {1,0,0,0,1},
                {1,1,0,0,1},
                {1,0,1,1,0}}; */

int vertices[5] = {1, 2, 3, 4, 5};
vector<vector<int>> edges;

vector<int> edge_1 = {1, 2, 3, 4};
vector<int> edge_2 = {0, 3};
vector<int> edge_3 = {0, 4};
vector<int> edge_4 = {0, 1, 4};
vector<int> edge_5 = {0, 2, 3};
edges.push_back(edge_1);
edges.push_back(edge_2);
edges.push_back(edge_3);
edges.push_back(edge_4);
edges.push_back(edge_5);



}

