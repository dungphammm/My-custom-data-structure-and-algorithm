#include<iostream>

// struct Node{
//     int data;
//     Node* next;
// };

// int main()
// {
//     Node *head = new Node;
//     Node *one = new Node;
//     Node *two = new Node;
//     Node *three = new Node;

//     one->data = 1;
//     two->data = 2;
//     three->data = 3;

//     one->next = two;
//     two->next = three;
//     three->next = nullptr;

//     head->next = one;
    
//     for (Node *i = head->next; i != nullptr; i = i->next)
//     {
//         std::cout << i->data << " ";
//     }

//     std::cout << std::endl;

//     delete one; delete two; delete three; delete head;
    
    
// }


class Node{
public:
    int data;
    Node* next;

};

int main(){
    Node* head = new Node;
    Node* one = new Node;
    Node* two = new Node;
    Node* three = new Node;

    one->data=1;
    two->data=2;
    three->data=3;
    
    head->next=one;
    one->next=two;
    two->next=three;
    three->next=nullptr;

    for(Node *i=head->next;i!=nullptr; i=i->next){
        std::cout<<i->data;
    }
    return 0;
}

