Node* Delete(Node *head, int position)
{
  int count = 0;
  Node *current;
  current = head;
  if(position == 0)
  {
      head = head->next;
      return head;
  }
   
  else
  {
      while(current->next != NULL)
      {
          count++;
          if(count == position)
          {
             current->next = current->next->next;     
          }
          else  current = current->next;
      }
      return head;    
  }
}
