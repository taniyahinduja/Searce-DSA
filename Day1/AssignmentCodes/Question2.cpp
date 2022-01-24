#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next, *head;

public:
    Node *create()
    {
        int n;
        cout << "Enter the length of the linked list" << endl;
        cin >> n;
        Node *p;
        head = NULL;

        for (int i = 0; i < n; i++)
        {
            if (head == NULL)
            {
                head = new Node;
                cin >> head->data;
                head->next = NULL;
                p = head;
            }
            else
            {
                p->next = new Node;
                p = p->next;
                cin >> p->data;
                p->next = NULL;
            }
        }
        return head;
    }
    void display(Node *head)
    {
        if (head == NULL)
        {
            cout << "Nothing to output";
            return;
        }
        Node *p;
        cout << "Elements are:" << endl;
        for (p = head; p != NULL; p = p->next)
        {
            cout << p->data << endl;
        }
    }
};
int main()
{
    Node n, *head;
    head = n.create();
    n.display(head);
}