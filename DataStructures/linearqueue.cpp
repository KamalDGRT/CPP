#include<iostream>

using namespace std;

class Queue {
    int *Q;
    int Front, Rear, Size;

    public: 
    Queue() {
        Front = -1;
        Rear = -1;
    }
    void createQueue(int);
    void Insert();
    void Remove();
    void Display();
};

int main() {
    Queue QUEUE;
    int mc, n;
    char uc;

    cout << "Enter Queue Size : ";
    cin >> n;
    QUEUE.createQueue(n);

    do {
        cout << "\n\n1. Insert Into the Queue";
        cout << "\n2. Remove From the Queue";  
        cout << "\n3. Display the Queue";
        cout << "\nUser, Enter Your Choice : ";
        cin >> mc;

        switch(mc) {
            case 1  : QUEUE.Insert();  break;
            case 2  : QUEUE.Remove();  break;
            case 3  : QUEUE.Display(); break;
            default :cout << "\nInvalid Option Entered.";
        }

        cout << "\nTo Continue With The Queue Operations Press 1. :";
        cin >> uc;
    }   while(uc == '1');

    return 0;
}

void Queue::createQueue(int size) {
    Size = size;
    Q = new int[size];
}


void Queue::Insert() {
    cout << "\nInsertion of Element :-";

    if(Rear == Size - 1)
    cout << "\nQUEUE IS FULL.";

    else {
        if(Rear == -1)
            Front++;
        Rear++;
        cout << "\nEnter a number to Insert : ";
        cin >> Q[Rear];
    }
}

void Queue::Remove() {
    cout << "\nRemoval of an Element :-";

    if(Front == -1)
    cout << "\nQUEUE IS EMPTY.";

    else {
        cout << "\n" << Q[Front] << " Has Been Deleted.\n";
        if(Front  == Rear) {
            Front = -1;
            Rear = -1;
        }
        else    
            Front ++;
    }
}

void Queue::Display() {
    int i;

    if(Front  == -1)
        cout << "\nQUEUE IS EMPTY.";

    else {
        cout << "\nSize of the Queue : " << Size;
        cout << "\nThe Queue Status Is : ";
        for(i = Front; i <= Rear; i++)
            cout<< Q[i] << " ";
    }
}
