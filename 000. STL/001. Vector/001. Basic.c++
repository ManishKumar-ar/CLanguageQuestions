#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    cout <<"Size is: " <<v.size()<<endl;
 cout <<"Capacity is: " <<v.capacity()<<endl

    v.push_back(10);
    v.push_back(10);
    v.push_back(10);

    cout <<"Size is: " <<v.size()<<endl;
 cout <<"Capacity is: " <<v.capacity()<<endl
}

// output
// Size is: 0
// Size is: 3

push_back():
When you push an element into a vector, the vector checks whether there is enough space in the underlying array to accommodate the new element. 
If there is sufficient space, it simply inserts the element into the array in constant time.
If the array needs to be resized to accommodate the new element, it typically doubles its capacity, which takes O(n) time, where n is the current size of the vector.
However, since the resizing happens infrequently and the cost is amortized over multiple insertions, the average time complexity per insertion is O(1).

size(): 
The size() function simply returns the number of elements stored in the vector. 
The vector internally keeps track of its size, so retrieving this information takes constant time.


............................................
//size vs capacity

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    cout << "Initial capacity: " << v.capacity() << endl;

    // Push elements into the vector and observe capacity changes
    for (int i = 0; i < 17; ++i)
    {
        v.push_back(i);
        cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl;
    }

    return 0;
}

Initial capacity: 0
Size: 1, Capacity: 1
Size: 2, Capacity: 2
Size: 3, Capacity: 4
Size: 4, Capacity: 4
Size: 5, Capacity: 8
Size: 6, Capacity: 8
Size: 7, Capacity: 8
Size: 8, Capacity: 8
Size: 9, Capacity: 16
Size: 10, Capacity: 16
Size: 11, Capacity: 16
Size: 12, Capacity: 16
Size: 13, Capacity: 16
Size: 14, Capacity: 16
Size: 15, Capacity: 16
Size: 16, Capacity: 16

//note -
. Some implementations of std::vector may choose to increase the capacity by doubling it 
when the number of elements reaches certain thresholds, while others may adopt different strategies.
Size: 17, Capacity: 32

................................................................
