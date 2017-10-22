int GetNode(Node *head,int positionFromTail)
{
    int len = 0, count=0;
    Node *current;
    current = head;
    
    while(current != NULL)
    {
        current = current->next;
        len++;
    }
    len--;
    current = head;
    while(current != NULL)
    {
        if((len - count) == positionFromTail) 
            break;
        current = current->next;   
        count++;
    }
    return current->data;
}
