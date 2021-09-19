#include <iostream>
using namespace std;
int checkwin (char arr[3][3])
{
    int a=0;
    for(int i=0;i<3;i++)
    {
        if (arr[i][1]==arr[i][2] && arr[i][2]==arr[i][0] && arr[i][1]!=' ')
        {
            cout<<"Player playing with symbol "<<arr[i][1]<<" won\n";
            a++;
        }
        if (arr[1][i]==arr[2][i] && arr[2][i]==arr[0][i] && arr[0][i]!=' ')
        {
            cout<<"Player playing with symbol "<<arr[1][i]<<" won\n";
            a++;
        }
    }

    if (arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2] && arr[0][0]!=' ')
    {
        cout<<"Player playing with "<<arr[0][0]<<" won\n";
        a++;
    }
    if (arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0] && arr[1][1]!=' ')
    {
        cout<<"Player playing with "<<arr[1][1]<<" won\n"; 
        a++;
    }
    return a;
}
void show(char arr[3][3])
{
    int a;
    char q;
    cout<<arr[0][0]<<"|"<<arr[0][1]<<"|"<<arr[0][2]<<"\n";
    cout<<"-.-.-\n";
    cout<<arr[1][0]<<"|"<<arr[1][1]<<"|"<<arr[1][2]<<"\n";
    cout<<"-.-.-\n";
    cout<<arr[2][0]<<"|"<<arr[2][1]<<"|"<<arr[2][2]<<"\n";
    a = checkwin(arr);
    if(a==1)
    {
        cout<<"Press any key to quit";
        cin>>q;
        exit(0);
    }
}
int main()
{
    char arr[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char k=' ';
    int x,y;
    show(arr);
    int a=0;
    for (int i=0;i<9;i++)
    {
        if(i%2 == 0)
        {
            cout<<"Player 1 turn :\n";
            cout<<"Enter the co-ordinates ";
            k='X';
            cin>>x>>y;
        }
        else 
        {
            cout<<"Player 2 turn :\n";
            cout<<"Enter the co-ordinates ";
            k='0';
            cin>>x>>y;
        }
        if(arr[x-1][y-1]!=' ')
        {
            cout<<"Error!! Invalid box (or) The box is already taken \n";
            i--;
            continue;
        }
        else 
        {
            arr[x-1][y-1]=k;
        }
        system("cls");
        show(arr);
    }
    cout<<"The game ends in a draw";
    return 0;
}

