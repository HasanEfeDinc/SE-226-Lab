#include <iostream>
using namespace std;

struct Node{
    int value;
    Node *next;
    Node *front;
    Node *back;
};
class Queue{
    Node *front;
    Node *back;
    int count;
public:Queue(){
        front = nullptr;
        back = nullptr;
        count = 0;
}
//Boşluk
    void enqueue(int data) {
        Node* newNode = new Node;
        newNode->value = data;
        newNode->next = NULL;

        if (front == NULL) {
            front = newNode;
            back = newNode;
        } else {
            back->next = newNode;
            back = newNode;
        }
        count++;
    }
    //Boşluk
    bool isEmpty() {
        return front == nullptr;
    }
    //Boşluk
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        }
        else {
            Node* temp = front;
            front = front->next;
            delete temp;
            count--;
        }
    }//Boşluk
    int top() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else {
            return front->value;
        }
    }
    //Boşluk
    int size() {
        return count;
    }

};

int main(){
    Queue que;
    que.enqueue(1);
    que.enqueue(2);
    que.enqueue(3);
    que.enqueue(4);
    que.enqueue(5);
    que.enqueue(6);
    que.enqueue(7);

    cout<<"Size:"<<que.size()<<endl;
    cout<<"Top element:"<<que.top()<<endl;
    //
    //
    que.dequeue();
    que.dequeue();
    que.dequeue();
    cout<<"Size:"<<que.size()<<endl;
    cout<<"Top element:"<<que.top()<<endl;

}