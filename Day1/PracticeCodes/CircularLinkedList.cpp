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
                head->next = head;
                p = head;
            }
            else
            {
                p->next = new Node;
                p = p->next;
                cin >> p->data;
                p->next = head;
            }
        }
        return head;
    }
    void display(Node *head)
    {
        Node *p;
        cout << "Elements are:";
        for (p = head; p->next != head; p = p->next)
        {
            cout << p->data << endl;
        }
        cout << p->data;
    }
    void count(Node *head)
    {
        Node *p;
        int cnt = 0;
        for (p = head; p != head; p = p->next)
        {
            cnt++;
        }
        cout << "The list has " << cnt << " number of nodes " << endl;
    }

    Node *insert_beg(Node *head)
    {
        Node *p, *i;
        p = new Node;
        cout << "Enter the data of new node" << endl;
        cin >> p->data;
        p->next = head;
        head = p;
        for (i = head; i->next != head; i = i->next)
            ;
        i->next = head;
        return head;
    }
    Node *ins_end(Node *head)
    {
        Node *p, *i;
        p = new Node;
        cout << "Enter the data to be inserted at end" << endl;
        cin >> p->data;
        p->next = NULL;
        for (i = head; i->next != head; i = i->next)
            ;
        i->next = p;
        p->next = head;
        return head;
    }
    Node *ins_bet(Node *head)
    {
        Node *p, *i;
        int n;
        p = new Node;
        cout << "Enter the daata to be inserted in between " << endl;
        cin >> p->data;
        cout << "Enter the data after which the node is to be inserted" << endl;
        cin >> n;
        for (i = head; i->data != n; i = i->next)
            ;
        p->next = i->next;
        i->next = p;
        return head;
    }

    Node *del_beg(Node *head)
    {
        Node *p, *i;
        p = head;
        head = head->next;
        for (i = head; i->next != head; i = i->next)
            ;
        i->next = head;
        delete p;
        return head;
    }

    Node *del_end(Node *head)
    {
        Node *p, *i;
        for (p = head; p->next->next != head; p = p->next)
            ;
        i = p->next;
        delete i;
        p->next = head;
        return head;
    }

    Node *del_bet(Node *head)
    {
        Node *p, *i;
        int x;
        cout << "Enter the data of node to be deleted" << endl;
        cin >> x;
        for (i = head; i->next->data != x; i = i->next)
            ;
        p = i->next;
        i->next = p->next;
        delete p;
        return head;
    }
};
int main()
{
    Node n, *head;
    head = n.create();
    n.display(head);
    n.count(head);
    head = n.insert_beg(head);
    n.display(head);
    head = n.ins_end(head);
    n.display(head);
    head = n.ins_bet(head);
    n.display(head);
    n.count(head);
    head = n.del_beg(head);
    n.display(head);
    head = n.del_end(head);
    n.display(head);
    head = n.del_bet(head);
    n.display(head);
}