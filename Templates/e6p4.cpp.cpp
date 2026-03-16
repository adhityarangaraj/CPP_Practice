#include <iostream>
using namespace std;

template <class T>
class Array
{
private:
    T arr[20];
    int size;

public:
    Array()
    {
        size = 0;
    }

    void insertAtBeginning(T val)
    {
        for(int i=size; i>0; i--)
            arr[i] = arr[i-1];

        arr[0] = val;
        size++;
    }

    void insertAtEnd(T val)
    {
        arr[size] = val;
        size++;
    }

    void deleteFromBeginning()
    {
        for(int i=0; i<size-1; i++)
            arr[i] = arr[i+1];

        size--;
    }

    void deleteFromEnd()
    {
        size--;
    }

    void emptyArray()
    {
        size = 0;
    }

    void display()
    {
        for(int i=0; i<size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Array<int> a;
    int choice, val;

    do
    {
        cout<<"\n1.Insert Beginning\n2.Insert End\n3.Delete Beginning\n4.Delete End\n5.Empty\n6.Display\n7.Exit\n";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter value: ";
                cin>>val;
                a.insertAtBeginning(val);
                break;

            case 2:
                cout<<"Enter value: ";
                cin>>val;
                a.insertAtEnd(val);
                break;

            case 3:
                a.deleteFromBeginning();
                break;

            case 4:
                a.deleteFromEnd();
                break;

            case 5:
                a.emptyArray();
                break;

            case 6:
                a.display();
                break;
        }

    } while(choice != 7);

    return 0;
}
