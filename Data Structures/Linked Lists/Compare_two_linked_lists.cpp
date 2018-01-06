int CompareLists(Node *headA, Node* headB)
{
  Node *currentA, *currentB;
  currentA = headA;
  currentB = headB;
  
  while(currentA != NULL && currentB != NULL)
  {
      if(currentA->data != currentB->data)
          return 0;
      
      currentA = currentA->next;
      currentB = currentB->next;
  }
  
  if(currentA == NULL && currentB == NULL)
      return 1;
  else  return 0;
}
