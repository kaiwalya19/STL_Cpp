/*
What is a List?
A list in STL is a contiguous container that allows the inserting and
erasing of elements in constant time and iterating in both directions.
 */

#include <bits/stdc++.h>
using namespace std;
void printlist(list<int> li)
{
    list<int>::iterator it;
    for (it = li.begin(); it != li.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> li;
    li.push_back(10);
    li.push_back(20);
    li.push_front(30);
    li.push_front(40);
    li.push_front(50);

    cout << "The elements in the list are: ";
    printlist(li);
    cout << "Reversing the list: ";
    li.reverse();
    printlist(li);
    cout << "Sorting the list: ";
    li.sort();
    printlist(li);
    cout << "The size of the list is: " << li.size() << endl;
    cout << "The first element in the list: " << li.front() << endl;
    cout << "Deleting the first element" << endl;
    li.pop_front();
    printlist(li);
    cout << "The last element of the list: " << li.back() << endl;
    cout << "Deleting the last element" << endl;
    li.pop_back();
    printlist(li);
}

/*
Other functions of the list:
begin() – it refers to the first element of the list.
end() – it refers to the theoretical element after the last element of the list.
cbegin() – it refers to the first element of the list.
cend() – it refers to the theoretical element after the last element of the list.
rbegin() – it points to the last element of the list.
rend() – it points to the theoretical element before the first element of the list.
emplace_front() – to insert an element at the front of the list.
emplace_back() – to insert an element at the end of the list.
max_size() – the maximum elements a list can hold.
clear() – to delete all the elements of the list.
erase() – to delete a single element or elements between a particular range.
 */