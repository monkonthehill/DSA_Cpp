#include <iostream>
using namespace std;

class Node {
public:
  int new_data;
  Node *ptr;
  Node(int new_data) {
    this->new_data = new_data;
    this->ptr = nullptr;
  }
};

void print_linkedlist(Node *head){
  Node* temp = head;
  while (temp != nullptr) {
    cout<<temp->new_data<<" ";
    temp = temp->ptr;
  }
}

int main() {
  Node *head = new Node(10);
  head->ptr = new Node(20);
  head->ptr->ptr = new Node(30);
  head->ptr->ptr->ptr = new Node(40);
  head->ptr->ptr->ptr->ptr = new Node(50);
  print_linkedlist(head);
}
