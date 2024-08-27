#include <iostream>
using namespace std;

class Queue
{
private:
    static const int MAX_SIZE = 5;
    int front, rear;
    int elements[MAX_SIZE];

public:
    Queue()
    {
        front=-1;
        rear=-1;

    }

    bool isEmpty()
    {
        if(front==-1 && rear==-1)
        {
            return 1;
        }
        else
            return 0;
    }

    bool isFull()
    {
        return rear == MAX_SIZE-1;
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "QUEUE FULL" << endl;
            return;
        }

        if (isEmpty())
        {
            front = rear = 0;
            elements[rear] = val;
        }
        else
        {
            rear++;
            elements[rear] = val;

        }


    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "QUEUE EMPTY" << endl;
            return;
        }

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }

    }

    int getFront()
    {
        if (isEmpty())
        {
            cout << "QUEUE EMPTY" << endl;
            return -1;
        }

        return elements[front];
    }

    void show()
    {
        if (isEmpty())
        {
            cout << "QUEUE EMPTY" << endl;
            return;
        }

        for (int i = front; i <=rear; i ++)
        {
            cout << elements[i] << " ";
        }

        cout << endl;
    }

};

int main()
{
    Queue q;

    q.push(100);
    q.push(20);
    q.push(31);
    q.push(11);

    q.pop();
    q.pop();
    q.push(42);
    q.push(0);


    cout << "Remaining elements in the queue: ";
    q.show();

    return 0;
}
