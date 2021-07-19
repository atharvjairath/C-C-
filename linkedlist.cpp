#include <bits/stdc++.h>
using namespace std;


class node {
public:
int data;
node*next;

//constructor
node(int d){
        data = d;
        next = NULL;
}
};


void build(){

}


//function to add node in head
void insertathead(node*&head,int d){
        if(head==NULL) {
                head = new node(d);
                return;
        }
        node *n = new node(d);
        n->next = head;
        head = n;
        // cout<<head->data;
}
//lenght of the linked list
int length(node*head){
        // if(head==NULL) return 0;
        int count = 0;
        while(head!=NULL) {
                count++;
                head=head->next;

        }
        return count;
}
void insertattail(node*&head,int d){
        if(head==NULL) {
                insertathead(head,d);
                return;
        }
        node *n = new node(d);
        node*temp = head;
        while(temp->next!=NULL) {
                temp= temp->next;
        }
        temp->next = n;
        return;
}
void insertatmiddle(node*&head,int d,int p){
        if(head==NULL or p==0) {
                insertathead(head,d);
                return;
        }
        else if(p> length(head)) {
                insertattail(head,d);
        }
        else{
                int jump =0;
                node*temp = head;
                while(jump<p) {
                        temp=temp->next;
                        jump++;
                }
                node *n = new node(d);
                n->next = temp->next;
                temp->next= n;
        }
}
void deletehead(node*&head){
        if(head==NULL) {
                return;
        }
        node *temp = head->next;
        delete head;
        head = temp;
}
//print linked list
void printlinkedlist(node*head){
        while(head!=NULL) {
                cout<<head->data<<"->";
                head= head->next;
        }
        cout<<endl;
}

node* takeinput(){
        int d=0;
        cin>>d;
        node*head = NULL;
        while (d!=-1) {
                insertathead(head,d);
                cin>>d;
        }
        return head;
}


int main(){
        //create nodehead
        node*head = takeinput();
        printlinkedlist(head);


        // insertathead(head,3);
        // insertathead(head,2);
        // insertathead(head,1);
        // insertathead(head,0);
        // printlinkedlist(head);
        // insertatmiddle(head,4,1);
        // printlinkedlist(head);
        // insertattail(head,5);
        // printlinkedlist(head);
        // deletehead(head);
        //printlinkedlist(head);
        return 0;
}
