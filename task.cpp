#include<iostream>

using namespace std;

class Node{
public:
    int value;
    Node *next;
    Node(){
        next = NULL;
    }
    void setnodev(int v){
        value = v;
    }
};

class list{
private:
   Node *head, *tail;
public:
    list(){
        head = tail = NULL;
    }
    void addnode(int v){
        if (tail == head && head== NULL){
            head = tail = new Node;
            head->value = v;
        }
        else{
            tail->next = new Node;
            tail->next->value = v;
            tail = tail->next;
        }
    }
    void displaylist(){
        Node *tmp = head;
        while (tmp != NULL){
            cout<<tmp->value<<endl;
            tmp = tmp->next;
        }
    }
};


int main(){
    list x;
    x.addnode(5);
    x.addnode(7);
    x.addnode(8);
    x.addnode(9);
    x.addnode(10);
    x.addnode(10);

    x.displaylist();

}