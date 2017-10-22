Node* Insert(Node *head,int data)
{
  if(head == NULL)
  {
      head = (Node *)malloc(sizeof(Node));
      head->data = data;
      head->next = NULL;
      return head;
  }
   
  else
  {
      Node *current;
      current = head;
      
      while(current->next != NULL)
          current = current->next;
      
      current->next = (Node *)malloc(sizeof(Node));
      current->next->data = data;
      current->next->next = NULL;
      return head;
  }
}
