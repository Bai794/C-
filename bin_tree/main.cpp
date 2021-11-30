#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <assert.h>
using namespace std;
typedef struct bin_node
{
    int data;
    bin_node *left, *right;
    void setnode(bin_node *l, bin_node *r)
    {
        left = l;
        right = r;
    }
} tree_node, *Bin_tree;
queue<Bin_tree> q;
Bin_tree creat_node(int data)
{
    Bin_tree temp = new tree_node{data, NULL, NULL};
    return temp;
}
void pre_bianli(Bin_tree root)
{
    if (root == NULL)
        return;
    cout << root->data;
    pre_bianli(root->left);
    pre_bianli(root->right);
}
void zhong_bianli(Bin_tree root)
{
    if (root == NULL)
        return;
    pre_bianli(root->left);
    cout << root->data;
    pre_bianli(root->right);
}
void hou_bianli(Bin_tree root)
{
    if (root == NULL)
        return;
    hou_bianli(root->left);
    hou_bianli(root->right);
    cout << root->data;
}
void cengxu_bianli(Bin_tree root)
{
    if (root == NULL)
        return;
    q.push(root); //放入队列
    while (!q.empty())//如果列表为空返回ture
    {
        cout << q.front()->data;
        if(q.front()->left!=NULL)
        q.push(q.front()->left);
        if(q.front()->right!=NULL)
        q.push(q.front()->right);
        q.pop();
    }
}
std::vector<int> path;
std::vector<char> v;
void find_path(Bin_tree root)//找出所有的路劲 dfs
{
    if (root==NULL)
     return;
    path.push_back(root->data);
    if(root->left==NULL&&root->right==NULL)
    {
        int len=path.size();
        for (int i = 0; i < len; ++i)
        {
            cout<<path[i]<<" ";
            /* code */
        }
         cout<<endl;
         path.pop_back();//删除叶子节点
        return;
    }
    else{
         find_path(root->left);
         find_path(root->right);
    }
     path.pop_back();//回溯
}
int  cal_cengshu(Bin_tree root)
{
    if (root==NULL)
    {
        return 0;
    }
    int left_high=cal_cengshu(root->left);
    int right_high=cal_cengshu(root->right);
    return max(left_high,right_high)+1;
}
void destroy(Bin_tree root){
    if (root)
    {
        return;
    }
    Bin_tree left=root->left;
    Bin_tree right=root->right;
    delete root;  
    root =NULL; 
    destroy(left);
    destroy(right);
}
int main()
{
    Bin_tree root = creat_node(1);
    Bin_tree node1 = creat_node(2);
    Bin_tree node2 = creat_node(3);
    root->setnode(node1, node2);
    Bin_tree node3 = creat_node(4);
    Bin_tree node4 = creat_node(5);
    Bin_tree node5 = creat_node(6);
    Bin_tree node6 = creat_node(7);
    Bin_tree node7 = creat_node(8);
    Bin_tree node8 = creat_node(9);
    node1->setnode(node3, node4);
    node2->setnode(node5, node6);
    node3->setnode(node7, node8);
    hou_bianli(root);
    cout<<endl;
    //pre_bianli(root);
    find_path(root);
    // cengxu_bianli(root);
    cout<<"num of ceng:"<<cal_cengshu(root)<<endl;
    system("pause");
} 