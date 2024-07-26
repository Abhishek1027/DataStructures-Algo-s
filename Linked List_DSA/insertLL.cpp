#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
  //Constructor
    Node(int data){
        this ->data= data;
        this ->next=NULL;
    }
};

void InsertatHead(Node* &head,int data){
   
   //create new node
   Node* temp = new Node(5);
   temp->next =head;
   head=temp;
}
int main(){
   Node* node1= new Node(10);
   cout << node1->data << endl;
   cout << node1->next << endl;

  
   return 0;
}