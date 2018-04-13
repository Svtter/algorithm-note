#include <iostream>

using namespace std;
const int maxn = 1000;
int array_1[maxn];
int n;


bool binarySearch(int x)
{
    int left = 0, right = n;

    while(right - left >= 1)
    {
        // cout << "test: " << left << " " << right << endl;
        int i = (right + left) / 2;
        if (array_1[i] == x) return true;
        else if(array_1[i] < x) left = i + 1;
        else right = i;
    }

    return false;
}

int main()
{
    n = 100;
    for(int i = 0; i < 100; i++)
    {
        if(i == 23) {
            array_1[i] = 24;
            continue;
        } 
        array_1[i] = i;
    }
    cout << "First search: " << binarySearch(23) << endl;;

    for(int i = 0; i < 100; i++)
    {
        array_1[i] = i;
    }

    cout << "First search: " << binarySearch(24) << endl;;
    return 0;
}