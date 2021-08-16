#include <bits/stdc++.h>
using namespace std;


class Node{

  public:
    char data;
    unordered_map<char,Node*>children;
    bool terminal;

    Node(char d){
      data = d;
      terminal = false;
  }

};

class Trie{

  Node* root;
  int cnt;

  public:
    Trie(){
      root = new Node('\0');
      cnt = 0;
    }

    //insert data in trie
    void insert(char*w){

      Node* temp = root;
      // iterate over the word
      for(int i =0;w[i]!='\0';i++){
        char ch = w[i];
        // if the ch already exist then attach with temp
        if(temp->children.count(ch)){
          temp = temp->children[ch];
        }

        // if new ch
        else{
          Node* n = new Node(ch);
          temp->children[ch] = n;
          temp = n;
        }

      }
      temp->terminal = true;

    }

    // find function
    bool find(char* w){
      Node* temp = root;
      // iterate over the word
      for(int i =0;w[i]!='\0';i++){
        char ch = w[i];
        if(temp->children.count(ch)==0){
          return false;
        }
        else{
          temp->children[ch];

        }
        // check if its the terminal node or not
        // if yes then the word exist
      }
      return temp->terminal;

    }

};

int main(){

  Trie t;
  char words[][10] = {"a","hello","not","news","apple"};
  char w[10];
  cin>>w;
  for(int i =0;i<5;i++){
    t.insert(words[i]);
  }

  if(t.find(w)){
    cout<<"Word is present";
  }
  else{
    cout<<"absent";
  }

  return 0;
}