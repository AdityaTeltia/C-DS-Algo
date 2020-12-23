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

TreeNode<int>* takeInput(){
    int rootData;
    cout<< "Enter data"<<endl;
    cin>>rootData;
    TreeNode<int>*root = new TreeNode<int>(rootData);

    int n;
    cout<<"Enter num of children of"<<rootData<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int>*child = takeInput();
        root->children.push_back(child);
    }
    return root;

}

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

void printTree(TreeNode<int>*root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<":";
    for(int i = 0;i<root->children.size();i++){
        cout<<root->children[i]->data<< ",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}

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
    int cTerm = root->data;
    int maxi = INT_MIN;
    for(int i=0;i<root->children.size();i++){
        maxi  = max(maxNodes(root->children[i]),maxi);
    }
    return maxi;
}
int height(TreeNode<int>*root){
    int he = 1;
    int high = 0;
    for(int i=0;i<root->children.size();i++){
        he += height(root->children[i]);
        high = max(he,high);
    }
    return high;
}
int main(){
    TreeNode<int>*root = takeInputLevelWise();
//    cout<<numNodes(root)<<endl;
//    cout<<sumNodes(root)<<endl;
    cout<<maxNodes(root)<<endl;
//    cout<<height(root)<<endl;
//    TreeNode<int>*root = new TreeNode<int>(1);
//    TreeNode<int>*node1 = new TreeNode<int>(2);
//    TreeNode<int>*node2 = new TreeNode<int>(3);
//    root->children.push_back(node1);
//    root->children.push_back(node2);

    printTreeLevelWise(root);
}
