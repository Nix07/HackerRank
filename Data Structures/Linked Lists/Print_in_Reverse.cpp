void ReversePrint(Node *head)
{
  int A[100000],k=0,i;
  if(head == NULL)
      return ;
  else
  {
      k = 0;
      while(head != NULL)
      {
          A[k++] = head->data;
          head = head->next;
      }
      
      for(i=k-1;i>=0;i--)
          printf("%d\n",A[i]);
  }
}

