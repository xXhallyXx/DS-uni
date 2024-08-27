#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

class LinkedList
{

public:
    Node* head;
    LinkedList()
    {
        head = NULL;
    }

    void insertEnd(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node* temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display()
    {
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    bool search(int value)
    {
        Node* temp = head;
        while (temp != NULL)
        {
            if (temp->data == value)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    void deleteAtPosition(int position)
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }
        if (position == 0)
        {
            if (head == NULL)
            {
                cout << "List is empty." << endl;
                return;
            }
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        for (int i = 0; temp != NULL && i < position - 1; i++)
        {
            temp = temp->next;
        }
        if (temp == NULL || temp->next == NULL)
        {
            cout << "Position is out of range." << endl;
            return;
        }
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
};

int main()
{
    LinkedList l;

    l.insertEnd(1);
    l.insertEnd(2);
    l.insertEnd(3);

    cout << "Original list: ";
    l.display();

    if(l.search(5))
        cout<<"Value is present in the linked list."<<endl;
    else
        cout<<"Value is not present in the linked list"<<endl;

    l.deleteAtPosition(2);
    cout << "List after deleting item at position 2: ";
    l.display();

    return 0;
}

