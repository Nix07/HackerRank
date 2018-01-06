void Print(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
  if(head == NULL)
    return;
  else{
      printf("%d\n",head->data);
      if(head->next == NULL)
          return;
      else
        Print(head->next);
  }
}
