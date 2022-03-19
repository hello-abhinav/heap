void heapsort(int arr[],int n)
{
  int size=n;
  while(size>1)
  {
    swap(arr[size],arr[1]);
    size--;
    heapify(arr,size,1);`

 }
