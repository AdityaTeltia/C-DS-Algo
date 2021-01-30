#include<iostream>
#include<queue>
using namespace std;
#include "TreeNode.h"

TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<< "Enter root data"<<endl;
    cin>>rootData;
    TreeNode<int>*root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*>pendingNodes;

    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        TreeNode<int>*front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter num of children of "<< front->data <<endl;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int childData;
            cout<<"Enter "<< i << " th child of "<< front->data<<endl;
            cin>>childData;
            TreeNode<int>*child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

//TreeNode<int>* takeInput(){
//    int rootData;
//    cout<< "Enter data"<<endl;
//    cin>>rootData;
//    TreeNode<int>*root = new TreeNode<int>(rootData);
//
//    int n;
//    cout<<"Enter num of children of"<<rootData<<endl;
//    cin>>n;
//    for(int i=0;i<n;i++){
//        TreeNode<int>*child = takeInput();
//        root->children.push_back(child);
//    }
//    return root;
//
//}

void printTreeLevelWise(TreeNode<int>*root){
    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        TreeNode<int>*front = pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":";
        for(int i=0;i<front->children.size();i++){
            cout<<front->children[i]->data<<",";
            //children is pointer vector and also pendingNodes is queue of template treeNode pointer so it will store pointer
            pendingNodes.push(front->children[i]);
        }
        cout<<endl;
    }
}

//void printTree(TreeNode<int>*root){
//    if(root == NULL){
//        return;
//    }
//    cout<<root->data<<":";
//    for(int i = 0;i<root->children.size();i++){
//        cout<<root->children[i]->data<< ",";
//    }
//    cout<<endl;
//    for(int i=0;i<root->children.size();i++){
//        printTree(root->children[i]);
//    }
//}

int numNodes(TreeNode<int>*root){
    int ans = 1;
    for(int i=0;i<root->children.size();i++){
        ans+= numNodes(root->children[i]);
    }
    return ans;
}

int sumNodes(TreeNode<int>*root){
    int sum = root->data;
    for(int i=0;i<root->children.size();i++){
        sum+= sumNodes(root->children[i]);
    }
    return sum;
}
int maxNodes(TreeNode<int>*root){
    int mx = root->data;
    for(int i=0;i<root->children.size();i++){
        mx  = max(maxNodes(root->children[i]),mx);
    }
    return mx;
}
int height(TreeNode<int>*root){
    int high = 0;
    for(int i=0;i<root->children.size();i++){
        high++;
        height(root->children[i]);
    }
    return high != 0 ? high : 1;
}
int numLeafNodes(TreeNode<int>*root){
    int leaf = 0;
    if(height(root) == 1){
        return 1;
    }
    for(int i=0;i<root->children.size();i++){
        leaf += numLeafNodes(root->children[i]);
    }
    return leaf;
}
void printAtLevelK(TreeNode<int>*root,int k){
    if(k==0){
        cout<<root->data<<endl;
        return;
    }
    for(int i=0;i<root->children.size();i++){
        printAtLevelK(root->children[i],k-1);
    }
}
void postorder(TreeNode<int>*root){
    for(int i=0;i<root->children.size();i++){
        postorder(root->children[i]);
    }
    cout<<root->data<<" ";
}
void preorder(TreeNode<int>*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++){
        preorder(root->children[i]);
    }
}
void deleteTree(TreeNode<int>*root){
    for(int i=0;i<root->children.size();i++){
        deleteTree(root->children[i]);
    }
    delete root;
}
// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0
int main(){
    TreeNode<int>*root = takeInputLevelWise();
    postorder(root);
//    preorder(root);
//    cout<<"NUM NODES : "<<numNodes(root)<<endl;
//    cout<<"SUM NODES: "<<sumNodes(root)<<endl;
//    cout<<"MAXIMUM : "<<maxNodes(root)<<endl;
//    cout<<"HEIGHT: "<<height(root)<<endl;
//    cout<<"LEAF NODES: "<<numLeafNodes(root)<<endl;
//
//    printTreeLevelWise(root);
    delete root;
}
