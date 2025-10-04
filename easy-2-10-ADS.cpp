//Easy problem
//Rotate a Rectangular Image by 90 Degree Clockwise
#include <iostream>
using namespace std;
int main()
{
    int mat[3][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12}};
                        
    int r=3,c=4;
    int rotate[4][3];
    
    for(int i=0 ; i<r ; i++) //row
    {
        for(int j=0;j<c;j++) //column
        {
            rotate[j][r-1-i]= mat[i][j]; //from original to change 90 degree
        }
    }
    
    //print back
    for(int i=0 ; i<c ; i++) //row
    {
        for(int j=0;j<r;j++) //column
        {
            cout << rotate[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}