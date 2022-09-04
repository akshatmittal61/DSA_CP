#include <iostream>
using namespace std;
void traverse(int a[100], int n)
{
    cout << endl
         << ' ';
    for (int i = 0; i < n; ++i)
        cout << a[i] << ' ';
    cout << endl;
}
void insert(int a[100], int n, int pos, int val)
{
    for (int i = n; i >= pos; --i)
        a[i] = a[i - 1];
    a[pos - 1] = val;
}
void Delete(int a[100], int n, int pos)
{
    for (int i = pos - 1; i < n; ++i)
        a[i] = a[i + 1];
}
int search(int a[100], int n, int val)
{
    for (int i = 0; i < n; ++i)
        if (a[i] == val)
            return i + 1;
    return -1;
}
void update(int a[100], int n, int pos, int val)
{
    a[pos - 1] = val;
}
int main()
{
    cout << "\n\n\n";
    int a[100], n, ch, i, k, pos, val;
    char c = 'y';
    cout << "\n Enter the number of values: ";
    cin >> n;
    cout << "\n Enter the values of array: \n ";
    for (i = 0; i < n; ++i)
        cin >> a[i];
    do
    {
        cout << "\n 1. Traverse the array";
        cout << "\n 2. Insert a new element";
        cout << "\n 3. Delete an element";
        cout << "\n 4. Search for an element";
        cout << "\n 5. Update value at a position";
        cout << "\n\n Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            traverse(a, n);
            break;
        case 2:
            cout << "\n Enter the position of new element: ";
            cin >> pos;
            cout << "\n Enter the new element: ";
            cin >> val;
            insert(a, n, pos, val);
            traverse(a, ++n);
            break;
        case 3:
            cout << "\n Enter the position of element to be deleted: ";
            cin >> pos;
            Delete(a, n, pos);
            traverse(a, --n);
            break;
        case 4:
            cout << "\n Enter the element to be searched: ";
            cin >> val;
            k = search(a, n, val);
            if (k != -1)
                cout << "\n Element found at position: " << k;
            else
                cout << "Element not found";
            break;
        case 5:
            cout << "\n Enter the position of element to be updated: ";
            cin >> pos;
            cout << "\n Enter the new element: ";
            cin >> val;
            update(a, n, pos, val);
            traverse(a, n);
            break;
        default:
            cout << "\n Wrong choice!";
            break;
        }
        cout << "\n Again? ";
        cin >> c;
    } while (c == 'y' || c == 'Y');
    cout << "\n\n\n";
    return 0;
}