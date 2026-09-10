#include <iostream>


class Node {
public:
  int data;
  Node *next;
  Node(int data) {
    this->data = data;
    next = nullptr;
  }
};

Node *insert_at_end(Node *head, int x) {
  Node *newNode = new Node(x);

  if (head == nullptr) {
    return newNode;
  }

  Node *temp = head;

  while (temp->next != nullptr) {
    temp = temp->next;
  }

  temp->next = newNode;

  return head;
}

void print_list(Node *head) {
  Node *curr = head;
  while (curr != nullptr) {
    std::cout << curr->data;
    if (curr->next != nullptr) {
      std::cout << "->";
    }
    curr = curr->next;
  }
  std::cout << std::endl;
}

int main() {
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);

  head = insert_at_end(head, 6);

  print_list(head);

  return 0;
}
