#include <iostream>
using namespace std;

class CircularQueue
{
private:
    static const int MAX_SIZE = 5;
    int front, rear;
    int q[MAX_SIZE];

public:
    CircularQueue()
    {
        front=-1;
        rear=-1;
    }

    void enqueue(int val)
    {
        if ((rear+1)%MAX_SIZE==front)
        {
            cout << "Queue overflowed!!!" << endl;
        }

        else if((front==-1 && rear==-1))
        {
            front=rear=0;
            q[rear]=val;
        }
        else
        {
            rear=(rear+1)%MAX_SIZE;
            q[rear]=val;

        }
    }

    void dequeue()
    {

        if(front==rear)
        {
            cout<<q[front];
            front=rear=-1;
        }
        else
        {
            q[front];
            front = (front + 1)%MAX_SIZE;
        }
    }
void display()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        int i = front;
        while (i != rear)
        {
            cout << q[i] << " ";
            i = (i + 1) % MAX_SIZE;
        }
        cout << q[rear] << endl;
    }

};

int main()
{
    CircularQueue cq;
    int choice, value;

    do
    {
        cout << "What you want to do?"<<endl;
        cout << "1. Enqueue element in the queue"<<endl;
        cout << "2. Dequeue element from the queue"<<endl;
        cout << "3. Display the queue"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to enqueue: ";
            cin >> value;
            cq.enqueue(value);
            break;

        case 2:
            cq.dequeue();
            break;

        case 3:
            cq.display();
            break;

        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    }
    while (true);


}
