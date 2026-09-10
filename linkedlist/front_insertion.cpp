#include <cstdio>
#include <filesystem>
#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    next = nullptr;
  }
};

Node *insert_at_front(Node *head, int x) {
  Node *new_node = new Node(x);
  new_node->next = head;
  return new_node;
}

void print_list(Node *head) {
  Node *curr = head;
  while (curr != nullptr) {
    cout << curr->data;
    if (curr->next != nullptr) {
      cout << "->";
    }
    curr = curr->next;
  }
  cout << endl;
}

int main() {
  cout << "List before insertion";
  cout << endl;
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  print_list(head);

  cout << "List after insertion" << endl;
  int x = 5;
  head = insert_at_front(head, x);
  print_list(head);
}
