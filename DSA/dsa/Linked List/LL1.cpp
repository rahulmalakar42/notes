#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

int main(){

    struct node *p;
    p = new node;
    p->data=10;
    p->next=NULL;
    cout<<p->data<<endl;

    return 0;
}