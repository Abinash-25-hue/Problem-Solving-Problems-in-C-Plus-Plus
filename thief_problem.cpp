/* A thief wants to loot houses. He knows the amount of money in each house. 
He cannot loot two consecutive houses. Find the maximum amount of money he can loot.

Input:
5, 3, 9, 2, 7

Output:
21 

Time Taken : */

#include<iostream>
using namespace std;

int empty_checker (int array[], int limit, int check)
{
    int condition = 1;
    for (int index = 0; index < limit; index++)
    {
        if (array[index] != check)
        {
            condition = 0;
            break;
        }
    }
    return condition;
}

int max_loot (int array[], int houses)
{
    int loot = 0, max, location;
    while (empty_checker(array, houses, -1) == 0)
    {
        max = array[0];
        for (int index = 0; index < houses; index++)
        {   
            if (array[index] >= max && array[index] != -1)
            {
                max = array[index];
                location = index;
            }
        }
        loot+=max;
        //cout<< max;
        array[location - 1] = -1;
        array[location] = -1;
        array[location + 1] = -1;
    }
    //cout<< loot;
    return loot;
}

int main ()
{
    int n;
    cout<< "Enter the number of houses : ";
    cin>> n;
    int houses[n];
    cout<< endl;
    for (int index = 0; index < n; index++)
    {
        cout<< "Enter the amount of money at house "<< index<< " : ";
        cin>> houses[index];
    }
    cout<< endl<< "The amount of money each house has : "<< endl;
    for (int index = 0; index < n; index++)
    {
        cout<< houses[index]<< ", ";
    }
    cout<< endl;
    cout<< endl<< "The maximum amount of money the thief can loot is "<< max_loot(houses, n)<< "."<< endl;
    return 0;
}

