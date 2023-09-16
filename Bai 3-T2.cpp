#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* newNode(int data) {
    Node* node = new Node;
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

int count_triplets(Node* head) {
    int count = 0;
    for (Node* node = head->next; node && node->next; node = node->next) {
        if (node->prev->data + node->data + node->next->data == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    Node* head = newNode(0);
    Node* tail = head;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        Node* node = newNode(x);
        tail->next = node;
        node->prev = tail;
        tail = node;
    }
    cout << count_triplets(head) << endl;
    return 0;
}