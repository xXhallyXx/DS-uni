#include <iostream>

using namespace std;

class Stack
{
private:
    static const int MAX_SIZE = 5;
    int arr[MAX_SIZE];
    int top;

public:
    Stack(){
        top=-1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == MAX_SIZE - 1;
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "STACK FULL" << endl;
            return;
        }
        arr[++top] = val;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "STACK EMPTY" << endl;
            return;
        }
        --top;
    }

    int getTop()
    {
        if (isEmpty())
        {
            cout << "STACK EMPTY" << endl;
            return -1;
        }
        return arr[top];
    }

    void show()
    {
        for (int i = 0; i <= top; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack st;

    st.push(100);
    st.push(20);
    st.push(31);
    st.push(11);

    st.pop();
    st.pop();

    st.push(42);

    st.pop();

    cout << "Remaining elements in the stack: ";
    st.show();

    return 0;
}
