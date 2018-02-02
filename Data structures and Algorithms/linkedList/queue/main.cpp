#include <iostream>

template<typename T>
class Node {
public:
    T data;
    Node *next = nullptr;
};
template <typename T>
class LinkedList {
public:
    Node<T> *header = nullptr;
    Node<T> *tail = nullptr;
    void addNode(T data);
    void imprimir();
};
template<typename T>
void LinkedList<T>::addNode(T data) {
    Node<T> *newNode = new Node<T>;
    newNode->data = data;
    if(header == nullptr){
        header = newNode;
        tail = newNode;
    }else {
        tail->next = newNode;
        tail = newNode;
    }
}
template<typename T>
void LinkedList<T>::imprimir() {
    Node<T> *current;
    current = header;
    while(current != nullptr) {
        std::cout << current->data << '\n';
        current = current->next;
    }
}
int main(int argc, const char * argv[]) {
    LinkedList<int> linkedList;
    linkedList.addNode(10);
    linkedList.addNode(20);
    linkedList.addNode(30);
    linkedList.imprimir();
    return 0;
}
