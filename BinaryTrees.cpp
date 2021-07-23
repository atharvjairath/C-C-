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

node* buildtree(){
        int d;
        cin>>d;
        if(d==-1) return NULL;

        node *root = new node(d);
        root->left = buildtree();
        root->right = buildtree();
        return root;

}

int height(node*root){
        if(!root) return 0;

        int h1 = height(root->left);
        int h2 = height(root->right);
        return max(h1,h2)+1;
}

// Replace root with its child sum

int replacerootsum(node*root){
        if(!root) return 0;

        int s1 = replacerootsum(root->left);
        int s2 = replacerootsum(root->right);
        if(!root->left && !root->right)
        {
                return root->data;
        }
        int temp = root->data;
        root->data = s1 + s2;
        return root->data + temp;
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

// num of nodes
int numofnodes(node*root){
        if(!root) return 0;

        int l = numofnodes(root->left);
        int r = numofnodes(root->right);
        return l+r+1;
}

// Sum of nodes
int sumofnodes(node*root){
        if(!root) return 0;

        int l = sumofnodes(root->left);
        int r = sumofnodes(root->right);
        return root->data + l + r;
}

// diameter of tree O(n^2)
int diameter(node*root){
        if(!root) return 0;
        int h1 = height(root->left);
        int h2 = height(root->right);
        int op1 = h1 + h2;
        int op2 = diameter(root->left);
        int op3 = diameter(root->right);
        return max(op1,max(op2,op3));
}

//diameter of tree but O(n)
pair<int,int> diameterfast(node*root){
        pair<int,int>p;
        if(!root) {
                p.first = p.second = 0;
                return p;
        }
        pair<int,int> left = diameterfast(root->left);
        pair<int,int> right = diameterfast(root->right);

        p.first = max(left.first,right.first) +1;
        p.second = max(left.first + right.first,max(left.second,right.second));
        return p;

}

// Build balanced sub tree from an array
node* buildbalancedtree(int a[],int s, int e){
        if(s>e) return NULL;
        int mid = (s+e)/2;
        node *root = new node(a[mid]);
        root->left = buildbalancedtree(a,s,mid-1);
        root->right = buildbalancedtree(a,mid+1,e);
        return root;

}

// Right veiw tree
void rightviewtree(node* root,int currlvl,int &maxlvl){
        if(!root) return;
        if(currlvl>maxlvl) {
                cout<<root->data<<endl;
                maxlvl = currlvl;
        }
        rightviewtree(root->right,currlvl+1,maxlvl);
        rightviewtree(root->left,currlvl+1,maxlvl);
}

void printKthlevel(node*root, int k){
        if(!root) return;

        if(k==1) {
                cout<<root->data;
                return;
        }

        printKthlevel(root->left,k-1);
        printKthlevel(root->right,k-1);
        return;
}


void print(node*root){
        if(!root) return;
        cout<<root->data<<" "<<endl;
        print(root->left);
        print(root->right);

}
int main(){
        node* root = buildtree();
        print(root);
        bfs(root);
        cout<<"height  :"<<height(root)<<endl;
        printKthlevel(root,2);
        cout<<"Num of Nodes : "<<numofnodes(root)<<endl;
        cout<<"Sum of Nodes : "<<sumofnodes(root)<<endl;
        pair<int,int>ans = diameterfast(root);
        cout<<"diameter of tree: "<<ans.second<<endl;
        bfs(root);
        //cout<<"After sum"<<endl;
        //replacerootsum(root);
        //bfs(root);
        return 0;
}
