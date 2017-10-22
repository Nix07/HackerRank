Node* Reverse(Node *head)
{
    Node *current, *prev, *next;
    prev = NULL;
    current = head;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    head = prev;
    return head;
}
