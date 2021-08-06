#include <bits/stdc++.h>
using namespace std;

class Heap {
vector<int> v;
bool minheap;

// compare function for both min and max heap
bool compare(int a, int b){
        if(minheap) return a<b;
        else return a>b;
}

// heapify function
void heapify(int idx){
        int left = 2*idx;
        int right = left + 1;

        //last index
        int last  = v.size() -1;
        int minidx = idx;

        // for left
        if(left<=last and compare(v[left],v[idx])) minidx = left;
        // for right
        if(right<= last and compare(v[right],v[minidx])) minidx = right;

        // base case
        if(minidx!=idx) {
                swap(v[idx],v[minidx]);
                heapify(minidx);
        }
}



public:
Heap(int default_size = 10, bool type = true){
        v.reserve(default_size);
        // block 0 index
        v.push_back(-1);
        minheap = type;
}

// add element in an heap
void push(int d){
        v.push_back(d);
        int idx = v.size() -1;
        int parent = idx / 2;

        while(idx > 1 and compare(v[idx],v[parent])) {
                swap(v[idx],v[parent]);
                idx = parent;
                parent = idx /2;

        }
}
// returns the top element
int top(){
        return v[1];
}

// Pop element from the heap
void pop(){
        int last = v.size() - 1;
        swap(v[1],v[last]);
        v.pop_back();
        heapify(1);
}

bool empty(){
        return v.size() == 1;
}
};

int main(){

        int n;
        Heap h;

        cin>>n;
        for(int i=0; i<n; i++) {
                int no;
                cin>>no;
                h.push(no);
        }

        // remove all the elements one by one
        while(!h.empty()) {
                cout<<h.top()<<" ";
                h.pop();
        }

}
