//
// Created by alex ruah on 10/11/22.
//

#include <iostream>
#include <vector>
#include <chrono>

using std::string;
using std::vector;
using std::cout;


int linearSearch(vector<string> stringDataSet, string element)
{
    for (int i = 0; i < stringDataSet.size(); i++)
    {
        if (element == stringDataSet[i])
            return i;
    }

    return -1;
}

int binarySearch(vector<string> stringDataSet, string element)
{
    int low = 0;
    int high = stringDataSet.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (stringDataSet[mid] == element)
            return mid;
        else if (element < stringDataSet[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;

}

int main()
{
    vector<string> test = stringdata::get_data();

    cout << "Finding \"not_here\" using the linear search algorithm";

    auto start  = std::chrono::system_clock::now();
    int location = linearSearch(test, "not_here");
    auto end  = std::chrono::system_clock::now();

    std::chrono::duration<double> diff = end - start;

    if(location == -1)
        cout << "not_here cannot be found, and it took" << diff.count() << " seconds.\n";
    else
        cout << "not_here was found, and it took " << diff.count() << " seconds\n";

    cout << "Finding \"not_here\" using the Binary Search algorithm";

    start  = std::chrono::system_clock::now();
    location = binarySearch(test, "not_here");
    end  = std::chrono::system_clock::now();

    diff = end - start;

    if(location == -1)
        cout << "not_here cannot be found, and it took" << diff.count() << " seconds.\n";
    else
        cout << "not_here was found, and it took " << diff.count() << " seconds\n";

    cout << "Finding \"mzzzz\" using the linear Search algorithm";

    start  = std::chrono::system_clock::now();
    location = linearSearch(test, "mzzzz");
    end  = std::chrono::system_clock::now();

    diff = end - start;

    if(location == -1)
        cout << "mzzzz cannot be found, and it took" << diff.count() << " seconds.\n";
    else
        cout << "mzzzz was found, and it took " << diff.count() << " seconds\n";

    cout << "Finding \"mzzzz\" using the binary Search algorithm";

    start  = std::chrono::system_clock::now();
    location = binarySearch(test, "mzzzz");
    end  = std::chrono::system_clock::now();

    diff = end - start;

    if(location == -1)
        cout << "mzzzz cannot be found, and it took" << diff.count() << " seconds.\n";
    else
        cout << "mzzzz was found, and it took " << diff.count() << " seconds\n";


    cout << "Finding \"aaaa\" using the linear Search algorithm";

    start  = std::chrono::system_clock::now();
    location = linearSearch(test, "aaaa");
    end  = std::chrono::system_clock::now();

    diff = end - start;

    if(location == -1)
        cout << "aaaa cannot be found, and it took" << diff.count() << " seconds.\n";
    else
        cout << "aaaa was found, and it took " << diff.count() << " seconds\n";


    cout << "Finding \"aaaa\" using the binary Search algorithm";

    start  = std::chrono::system_clock::now();
    location = binarySearch(test, "aaaa");
    end  = std::chrono::system_clock::now();

    diff = end - start;

    if(location == -1)
        cout << "aaaa cannot be found, and it took" << diff.count() << " seconds.\n";
    else
        cout << "aaaa was found, and it took " << diff.count() << " seconds\n";


}