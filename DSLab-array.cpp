#include<iostream>
#define size 20

using namespace std;

class Array
{
    int arrayCount = 0;
    int arr[size];

    public:

    int insertAtFirst(int value)
    {
        if(arrayCount == size)
        {
            cout<<"Array is Full! Can't Insert\n";
            return 0;
        }



        int i;
        for(i=arrayCount-1; i>=0;i--)
        {
            arr[i+1] = arr[i];
        }



        arr[0] = value;
        arrayCount++;



        return 1;
    }



    int insertAtLast(int value)
    {
        if(arrayCount == size)
        {
            cout<<"Array is Full! Can't Insert\n";
            return 0;
        }



        arr[arrayCount] = value;
        arrayCount++;
        return 1;
    }



    int insertAtAnyPosition(int position, int value)
    {
        if(arrayCount == size)
        {
            cout<<"Array is Full! Can't Insert\n";
            return 0;
        }



        if(position<0 && position>=arrayCount)
        {
            cout<<"Error::Position should be between 0 and "<<arrayCount-1<<endl;
            return 0;
        }



        int i;
        for(i=arrayCount-1; i>=position;i--)
        {
            arr[i+1] = arr[i];
        }



        arr[position] = value;
        arrayCount++;



        return 1;
    }




    int deleteAtFirst()

    {
        int i;
        if(arrayCount == 0){
            cout << "Array is empty. No element can't be delete." << endl;
            return 0;
        }
        for(i=0; i<arrayCount - 1;i++){
            arr[i] = arr[i+1];
        }
        arrayCount--;
        return 1;


    }



    int deleteAtLast()

    {
        if(arrayCount == 0){
            cout << "Array is empty. No element can't be delete." << endl;
            return 0;
        }
        arr[arrayCount - 1] = 0;

        arrayCount--;
        return 1;

    }



    int deleteAtAnyPosition(int position)

    {
        if(arrayCount == 0){
            cout << "Array is empty. No element can't be delete." << endl;
            return 0;
        }
        if(arrayCount <= position){
            cout << "Invalid position selected. No element can't be delete." << endl;
            return 0;
        }

        int i;

        for(i=position; i < arrayCount - 1; i++){
            arr[i] = arr[i+1];
        }
        arrayCount--;
        return 1;


    }




    int arrayLinearSearch(int value)
    {
        int i;
        for(i=0;i<arrayCount;i++)
        {
            if(arr[i] == value)
            {
                cout<<value<<" found at position "<<i<<endl;
                return i;
            }
        }



        cout<<value<<" not found in the Array\n";
        return -1;
    }




    int printArray()
    {
        cout<<"Array Values: ";



        int i;
        for(i=0;i<arrayCount;i++)
        {
            cout<<arr[i]<<"  ";
        }



        cout<<endl;
    }
};






int  main()
{
    Array ob;
    ob.insertAtFirst(5);
    ob.printArray();
    ob.insertAtFirst(8);
    ob.printArray();
    ob.insertAtFirst(9);
    ob.printArray();
    ob.insertAtFirst(6);
    ob.printArray();
    ob.insertAtFirst(1);
    ob.printArray();
    ob.insertAtFirst(3);
    ob.printArray();
    ob.insertAtFirst(4);
    ob.printArray();



    cout<<"Inserting at Last ........\n";
    ob.insertAtLast(5);
    ob.printArray();
    ob.insertAtLast(1);
    ob.printArray();
    ob.insertAtLast(8);
    ob.printArray();
    cout<<"Inserting at Any Position ........\n";
    ob.insertAtAnyPosition(3,15);
    ob.printArray();
    ob.insertAtAnyPosition(1,16);
    ob.printArray();
    ob.insertAtAnyPosition(6,21);
    ob.printArray();
    ob.arrayLinearSearch(5);
    ob.arrayLinearSearch(21);
    ob.arrayLinearSearch(100);



    return 0;
}
