#include<iostream>
#include<cstring>
using namespace std;

string q0 (char a)
{
    if (a=='1')
    {
        return "0";
    }
    else if (a=='0')
    {
        return "1";
    }
}
    string q1 (char a)
    {
        if(a=='0')
        {
            return "0";
        }
        else if (a=='1')
        {
            return "1";
        }
    }

    int main()
    {
        string input;
        cout<<"Enter a binary number: ";
        cin>>input;
        int check = 1;
        string output = "";
        char last = input[input.length()-1];
        for(int i =input.length()-1; i>=0; i--)
        {
            last = input[i];
            if(last == '1' && check == 1)
            {
                output += q0  (input[i]);
            }
            else if (last =='0' && check == 1)
            {
                check = 0;
                output += q0 (input[i]);
            }
            else
            {
                check = 0;
                output += (input[i]);
            }
        }
        if(check==1)
        {
            output += "1";
        }
        for (int i = output.length()-1; i>=0; i--)
        {
            cout<<output[i];
        }
    }