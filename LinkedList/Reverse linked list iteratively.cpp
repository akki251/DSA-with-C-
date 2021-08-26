// https://www.youtube.com/watch?v=fEfLcFeVQBo
void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *TakeInput()
{

    int data;
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1)
    {

        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next; // or tail = newNode;

            // Node *temp = head;
            // while (temp->next != NULL)
            // {
            //     temp = temp->next;
            // }
            // temp->next = newNode;
        }

        cin >> data;
    }

    return head;
}

Node *reverseLinkedList(Node *head)
{

    if (head == NULL || head->next == NULL)
        return head;

    Node *curr = head;
    Node *prev = NULL;
    Node *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next; // backup
        curr->next = prev; // joining link
        prev = curr; // moving forward
        curr = forward;   // moving forward
    }

    return prev ;
}
int main()
{

    Node *head = TakeInput();
    printLinkedList(head);

    head = reverseLinkedList(head);
    printLinkedList(head);
}