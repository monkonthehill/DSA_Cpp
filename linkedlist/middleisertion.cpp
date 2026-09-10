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

Node *insert_between(int data, Node *head, int index) {
  Node *newNode = new Node(data);
  if (index == 0) {
    newNode->next = head;
    return newNode;
  }
  Node *cur = head;
  for (int i = 0; i < index - 1 && cur != nullptr; ++i) {
    cur = cur->next;
  }
  if (cur == nullptr) {
    delete newNode; // or handle error
    return head;
  }
  newNode->next = cur->next;
  cur->next = newNode;
  return head;
}

void printList(Node *head) {
  Node *curr = head;
  while (curr != nullptr) {
    cout << curr->data;
    if (curr->next != nullptr) {
      cout << " -> ";
    }
    curr = curr->next;
  }
  cout << endl;
}
int main() {
  int val;
  int pos = 3;
  // Creating the list 1->2->4
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(4);

  cout<<"Enter the number you wanted to enter : ";
  cin>> val;
  cout << endl;
  head = insert_between(val, head, pos);
  printList(head);

  return 0;
}
