/* Print the following pattern for the given number of rows. 

Input : 5

Output : 
11111
0000
111
00
1

Time Taken : 9 mins 13.10 seconds*/

#include<iostream>
using namespace std;

int binary_triangle(int rows)
{
    int index, flag = 1;
    char c = '1';
    for (int index = rows; index > 0; index--)
    {
        for (int jindex = 0; jindex < index; jindex++)
        {
            cout<< c;
        }
        cout<< endl;
        //flag = (flag == 0)? 1: 0;
        if (flag == 0)
        {
            flag = 1;
            c = '1';
        }
        else
        {
            flag = 0;
            c = '0';
        }
    }
    return 0;

}

int main ()
{
    int rows;
    cout<< "Enter the number of rows : ";
    cin>> rows;
    cout<< endl;
    binary_triangle(rows);
    cout<< endl;
    return 0;
}
