#include <iostream>
using namespace std;
class queue
{
public:
    int q[10];
    int front = -1, rear = -1;

    void enqueue(int data)
    {
        if (rear > 9)
        {
            cout << "FULL" << endl;
        }
        else
        {
            if (front == -1)
            {
                front++;
            }
            rear++;
            q[rear] = data;
        }
    }
    void dequeue()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Empty" << endl;
        }
        else if (front == rear)
        {
            cout << q[front] << " was removed" << endl;
            front = rear = -1;
        }
        else
        {
            cout << q[front] << " was removed" << endl;
            front++;
        }
    }
    void display()
    {
        cout << "The elements are " << endl;
        for (int i = front; i <= rear; i++)
        {
            cout << q[i] << "\t";
        }
    }
};
int main()
{
    queue q1;
    int data;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the data" << endl;
        cin >> data;
        q1.enqueue(data);
    }
    q1.display();
    q1.dequeue();
    q1.display();
}