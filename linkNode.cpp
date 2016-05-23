#include <iostream>
using namespace std;


struct linkRec
{
    int data;
    linkRec * next;
};
int main()
{
    int x;
    linkRec * head, * p, * rear;

    head = rear = new linkRec;

    while (true)
    {
        cin >> x;
        if (x == 0) break;
        p = new linkRec;
        p -> data = x;
        rear -> next = p;
        rear = p;
    }

    rear -> next = NULL;

    cout << "The Content of the Link: \n";
    p = head -> next;
    while (p != NULL) {
        cout << p -> data << '\t';
        p = p -> next;
    }

    cout << endl;
    return 0;
}
