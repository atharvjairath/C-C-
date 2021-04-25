#include <bits/stdc++.h>
using namespace std;

struct Node {
        int data;
        Node *next;
};
void printList(Node* n)
{
        while (n != NULL) {
                cout << n->data << " ";
                n = n->next;
        }
}
void insertbeg(int x,Node* &head)
{
        Node *ptr =NULL;
        ptr=new Node();
        ptr->data= x;
        ptr->next=head;
        head=ptr;
}
int main(){
        int x;
        Node* head = NULL;
        Node* second = NULL;
        Node* third = NULL;

        head = new Node();
        second = new Node();
        third = new Node();

        head->data = 1;
        head->next = second;

        second->data = 2;
        second->next = third;

        third->data = 3;
        third->next = NULL;
        cin>>x;
        insertbeg(x,&head);


        printList(head);
        return 0;
}
