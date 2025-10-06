/* Print the following pattern for the given N number of rows. 

Input : 5
Output : 

* * * * * 
 * * * *
  * * * 
   * *
    * 

Time Taken : 10 min 3.45 seconds*/

#include<iostream>
using namespace std;

int punkasr(int rows)
{
    int index, spaces = 0, star = rows;
    while (star > 0)
    {
        index = 0;
        while (index < spaces)
        {
            cout<< " ";
            index++;
        }
        for (index = 0; index < star; index++)
        {
            cout<< "* ";
        }
        cout<< endl;
        spaces++;
        star--;
    }
    return 0;
}

int main ()
{
    int N;
    cout<< "Enter the number of rows : ";
    cin>> N;
    // cout<< N;
    punkasr(N);
    return 0;
}