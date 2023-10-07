#include "bits/stdc++.h"
using namespace std;
{
	class Solution
{
    public:
    //Function to convert binary tree to doubly linked list and return it.
    void inorder(Node* root, vector<int>& ans){
    if(root == nullptr) return;

    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}
Node * bToDLL(Node *root){
    if(root == nullptr) return root;

    vector<int> ans;
    inorder(root, ans);

    Node* head = new Node(ans[0]);
    Node* curr = head;
    for(int i = 1; i < ans.size(); i++){
        Node* temp = new Node(ans[i]);
        curr->right = temp;
        temp->left = curr;
        curr = temp;
    }
    return head;
}};
}
