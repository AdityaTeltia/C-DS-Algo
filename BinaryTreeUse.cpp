#include<iostream>
#include "BinaryTreeNode.h"
#include<queue>
using namespace std;

BinaryTreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<< "Enter root data"<<endl;
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }
    BinaryTreeNode<int>*root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        BinaryTreeNode<int>*front = pendingNodes.front();
        pendingNodes.pop();
        cout<< "Enter left child of "<< front->data<<endl;
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData != -1){
            BinaryTreeNode<int>*child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }

        cout<< "Enter right child of "<< front->data<<endl;
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData != -1){
            BinaryTreeNode<int>*child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

int numNodes(BinaryTreeNode<int>*root){
    if(root==NULL){
        return 0;
    }
    return 1+numNodes(root->left)+numNodes(root->right);
}

int height(BinaryTreeNode<int>*root){
    if(root == NULL){
        return 0;
    }
    return 1 + max(height(root->left),height(root->right));
}

void printTree(BinaryTreeNode<int>*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<< " : ";
    if(root->left != NULL){
        cout<< " L "<<root->left->data;
    }
    if(root->right != NULL){
        cout<< " R "<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}
void printTreeLevelWise(BinaryTreeNode<int>*root){
    queue<BinaryTreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        BinaryTreeNode<int>*front = pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<< " : ";
        if(front->left){
            cout<<" L "<<front->left->data<<" ";
            pendingNodes.push(front->left);
        }
        if(front->right){
            cout<<" R "<<front->right->data;
            pendingNodes.push(front->right);
        }
        cout<<endl;
    }
}
void preOrder(BinaryTreeNode<int>*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(BinaryTreeNode<int>*root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void inorder(BinaryTreeNode<int>*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
BinaryTreeNode<int>*buildTreehelper(int* in,int* pre,int inS,int inE,int preS,int preE){
    if(inS > inE){
        return NULL;
    }
    int rootData = pre[preS];
    int rootIndex = -1;
    for(int i = inS;i<=inE;i++){
        if(in[i]==rootData){
            rootIndex = i;
            break;
        }
    }
    int lPreS = preS+1;
    int lInS = inS;
    int lInE = rootIndex-1;
    int lPreE = lInE - lInS + lPreS;
    int rPreS = lPreE+1;
    int rPreE = preE;
    int rInS = rootIndex+1;
    int rInE = inE;
    BinaryTreeNode<int>*root = new BinaryTreeNode<int>(rootData);
    root->left = buildTreehelper(in,pre,lInS,lInE,lPreS,lPreE);
    root->right = buildTreehelper(in,pre,rInS,rInE,rPreS,rPreE);
}
BinaryTreeNode<int>*bst(BinaryTreeNode<int>*root,int key){
    if(root==NULL || root->data==key){
        return root;
    }
    if(root->data<key){
        return bst(root->left,key);
    }
    return bst(root->right,key);
}


BinaryTreeNode<int>*buildTree(int *in,int* pre,int size){
    return buildTreehelper(in,pre,0,size-1,0,size-1);
}
BinaryTreeNode<int>* takeInput(){
    int rootData;
    cout<< "Enter data"<<endl;
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }
    BinaryTreeNode<int>*root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>*leftChild =takeInput();
    BinaryTreeNode<int>*rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;
    return root;

}
// 1 2 3 4 5 -1 -1 -1 -1 -1 -1
// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
// 7 5 9 4 6 8 10 -1 -1 -1 -1 -1 -1 -1 -1
int main(){
//    BinaryTreeNode<int>*root = new BinaryTreeNode<int>(1);
//    BinaryTreeNode<int>*node1 = new BinaryTreeNode<int>(2);
//    BinaryTreeNode<int>*node2 = new BinaryTreeNode<int>(3);
//
//    root->left = node1;
//    root->right = node2;
    BinaryTreeNode<int>*root = takeInputLevelWise();
    printTreeLevelWise(root);
    BinaryTreeNode<int>*ans = bst(root,8);
    cout<<ans->data<<endl;

//    cout<<numNodes(root)<<endl;
//    cout<<height(root)<<endl;
//    inorder(root);
//    preOrder(root);
//    cout<<endl;
//    postOrder(root);
    delete root;
    return 0;
}
