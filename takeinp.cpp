#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
node* takeinput()
{
    int data;
    cin >> data;
    node *head = NULL;
    while (data != -1)//(-1 is not part of linkedlist take -1 as input when you want to terminate the linkedlist)
    {
        node *newnode = new node(data); // newnode will contain the address of the first node .(dynamically created)
        if (head == NULL)
        {
            head = newnode; // now head contain the address of firstnode .(statically created)
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode; //for connecting nodes.
        }
        cin >> data;
    }
    return head;
}
void print(node *head)
{
    node *temp = head; //do not lost the head of linkedlist
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    node*head = takeinput();
    print(head);


} 