void topView(node * root) {
    
    int A[10000],k=0,i;
    node *current;
    current = root->left;
    while(current != NULL)
    {
        A[k++] = current->data;
        current = current->left;
    }
    
    for(i=k-1;i>=0;i--)
        printf("%d ",A[i]);
    
    printf("%d ",root->data);
    
    current = root->right;
    while(current != NULL)
    {
        printf("%d ",current->data);
        current = current->right;
    }
}
