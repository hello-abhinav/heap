//insert in max heap
#include<iostream>
using namespace std;
class heap{
    public:
            int arr[100];
            int size;
            heap()
            {
                arr[0]=-1;
                size=0;
            }
        void insert(int val)
        {
            size=size+1;
            int index=size;
            arr[index]=val;
            //1 based indexing
            //node i index
            //lchild 2*i
            //rchild 2*i +1
            //parent i/2
            while(index > 1 )
            {
                int parent=index/2;
                if(arr[parent]<arr[index])
                {
                    swap(arr[index],arr[parent]);
                    index=parent;
                }
                else{
                    return;
                }

            }
        }
        void print(){
            for(int i=1;i<=size;i++)
            {
                cout<<arr[i]<<" ";
                
            }
            cout<<endl;
        }
};
int main()
{

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    return 0;
}