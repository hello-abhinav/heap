bool isHeap(struct Node* tree)
{
  int index=0;
  int totalcount=count(tree);
  if(isCBT(tree,index,totalcount) && ismax(root) )
  {
    return true;
  }
  else 
    return false;
}

int count(struct Node* tree)
{
  if(tree==NULL)
  {
    return 0;
  }
  else{
  return 1+count(tree->left)+count(tree->right);
    }
}

bool isCBT(struct Node* tree,int index,int cnt){
  if(tree==NULL){return true;}
  if(index>=cnt)
  {return false;}
  else{
    bool left=isCBT(tree->left,2*i+1,cnt);
    bool right=isCBT(tree->right,2*i+2,cnt);
    return (left&& right);
  }
}
bool ismax(struct Node* tree){
//if leaf node
  if(tree->left==NULL && tree->right==NULL)
  {return true;}
  if(tree->right==NULL){
  return tree->data>tree->right->data;
  }
  else{
    bool left=ismax(tree->left);
    bool right=ismax(tree->right);
    return (left && right && ( (root->data>root->left->data) && (root->data>root->right>data));   
  }
}
