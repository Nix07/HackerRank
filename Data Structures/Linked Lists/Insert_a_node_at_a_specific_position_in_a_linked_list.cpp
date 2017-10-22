Node* InsertNth(Node *head, int data, int position)
{
    Node *temp;
    temp = head;
    if(head == NULL)
    {
        head = (Node *)malloc(sizeof(Node));
        head->data = data;
        head->next = NULL;
    }
    int i;
    if(position == 0)
    {
        Node *elem;
        elem = (Node *)malloc(sizeof(Node));
        elem->next = head;
        elem->data = data;
        return elem;
    }
    for(i=0;i<position-1;i++)
        temp = temp->next;
    Node *elem;
    elem = (Node *)malloc(sizeof(Node));
    elem->data = data;
    elem->next = temp->next;
    temp->next = elem;
    return head;
  // Complete this method only
  // Do not write main function. 
}
