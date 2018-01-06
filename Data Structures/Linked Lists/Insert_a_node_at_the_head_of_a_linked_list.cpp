Node* Insert(Node *head,int data)
{
    Node *elem;
    if(head == NULL)
    {
        head = (Node *)malloc(sizeof(Node));
        head->data = data;
        head->next = NULL;
        return head;
    }
    else
    {
        elem = (Node *)malloc(sizeof(Node));
        elem->next = head;
        elem->data = data;
        return elem;
    }
  // Complete this method
}
