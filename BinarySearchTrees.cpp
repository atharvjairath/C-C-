#include <bits/stdc++.h>
using namespace std;

class node {

public:
int data;
node *left;
node *right;

node(int d){
        data = d;
        node *left = NULL;
        node *right = NULL;
}
};

void print(node*root){
        if(!root) return;
        cout<<root->data<<" "<<endl;
        print(root->left);
        print(root->right);
}
// Breadth first search (transverse)
void bfs(node*root){
        queue<node*>q;
        q.push(root);
        // adding space after every level
        q.push(NULL);
        while(!q.empty()) {
                node *x = q.front();
                if(x==NULL) {
                        cout<<endl;
                        q.pop();
                        if(!q.empty()) q.push(NULL);
                }
                else{
                        cout<<x->data<<",";
                        q.pop();
                        if(x->left) q.push(x->left);
                        if(x->right) q.push(x->right);
                }
        }
        return;
}


// Insert nodes in a BST

node* insertbst(node*root,int d){
        // base case if its the first time
        if(!root) return new node(d);

        //recursive case
        if(d <= root->data) {
                root->left = insertbst(root->left,d);
        }
        else{
                root->right = insertbst(root->right,d);
        }
        return root;


}

node* buildtree(){
        int d;
        cin>>d;
        node * root = NULL;
        while (d!=-1) {
                root = insertbst(root,d);
                cin>>d;
        }
        return root;
}



int main(){
        node* root = buildtree();
        print(root);
        bfs(root);
}
