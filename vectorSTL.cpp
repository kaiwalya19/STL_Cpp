
/*
Vector in C++ STL
What is a Vector?
Vectors in STL are basically dynamic arrays that have the ability to
change size whenever elements are added or deleted from them.
Vector elements can be easily accessed and traversed using iterators.
A vector stores elements in contiguous memory locations.
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;

    for (int i = 0; i < 10; i++)
    {
        v.push_back(i); // inserting elements in the vector
    }

    cout << "the elements in the vector: ";
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    cout << "\nThe front element of the vector: " << v.front();
    cout << "\nThe last element of the vector: " << v.back();
    cout << "\nThe size of the vector: " << v.size();
    cout << "\nDeleting element from the end: " << v[v.size() - 1];
    v.pop_back();

    cout << "\nPrinting the vector after removing the last element:" << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << "\nInserting 5 at the beginning:" << endl;
    v.insert(v.begin(), 5);
    cout << "The first element is: " << v[0] << endl;
    cout << "Erasing the first element" << endl;
    v.erase(v.begin());
    cout << "Now the first element is: " << v[0] << endl;

    if (v.empty())
        cout << "\nvector is empty";
    else
        cout << "\nvector is not empty" << endl;

    v.clear();
    cout << "Size of the vector after clearing the vector: " << v.size();

    /*

    Other Functions:

cbegin() – it refers to the first element of the vector.
cend() – it refers to the theoretical element after the last element of the vector.
rbegin() – it points to the last element of the vector.
rend() – it points to the theoretical element before the first element of the vector.
crbegin() – it refers to the last element of the vector.
crend() – it refers to the theoretical element before the first element of the vector.
max_size() – returns the maximum size the vector can hold.
capacity() – it returns the current capacity of the vector.
     */
}