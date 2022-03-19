 void deletion()
        {
            //always root node will get deleted
            //step 1 
            arr[1]=arr[size];
            //step 2 remove last element
            size--;
            //step 3 correct pos
            int i=1;
            while(i<size)
            {
                int left=2*i;
                int right=2*i+1;
                if(left<size && arr[left]>arr[i])
                {
                    swap(arr[left],arr[i]);
                    i=left;
                }
                else if(right<size && arr[right]>arr[i])
                {
                    swap(arr[right],arr[i]);
                    i=right;
                }
                else{
                    return;
                }
            }
        }
