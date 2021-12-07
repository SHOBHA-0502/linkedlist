#include <iostream>
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
    node *tail = NULL;
    while (data != -1)//(-1 is not part of linkedlist take -1 as input when you want to terminate the linkedlist)
    {
        node *newnode = new node(data); // newnode will contain the address of the first node .(dynamically created)
        if (head == NULL)
        {
            head = newnode; 
            tail = newnode;
        }
        else
        {//-|this is the previous which is going to be upgrade to new node
            tail->next = newnode;//for connecting the nodes
            tail = tail->next;//end node is tail
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