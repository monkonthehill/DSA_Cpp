#include <cstddef>
#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node(int new_data) {
    this->data = new_data;
    this->next = nullptr;
  }
};
int main() { 
  cout << "Hello";
  Node *head = new Node (10);
  head->next = new Node (20);
  head->next->next = new Node (30);
  Node* temp = head;
  while (temp != nullptr) {
    cout<<temp->data<<" ";
    temp  = temp->next;
  }
}


