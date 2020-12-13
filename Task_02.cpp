#include <iostream>
using namespace std;

void runCode();
string decode(string s, int k);

int main()
{
	runCode();
	return 0;
}

void runCode()
{
    // Entrypoint to debug your function
    string text = "hello3world3";
    int nKey = 10;
    string letter = decode(text, nKey);
    cout << "	Letter is : ";
    int i = 0;
    while (letter[i] != '\0')
    {
    	cout << letter[i] << endl;
    	i++;
    }
}

string decode(string s, int k)
{
     // Write your code here...

    int nLen = 0;
    int nNum = 0;
    string szLetter = "b";
    string szString; 
    string szString_2; 

    while (s[nLen] != '\0')
        nLen++;
    for (int i = 0; i < nLen; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') ||
			(s[i] >= 'A' && s[i] <= 'Z'))
        {   
                szString[i] = s[i];
        }

        cout << szString[i] << endl;

        if (s[i] >= 48 && s[i] <= 58)
        {
            nNum *= 10;
            nNum += s[i] - 48;

            nNum -= 1;

            int a = 0;
            while (a < i)
            {
            	szString_2[a] = szString[a];
            	a++;
            }

            int count = i;

            int b = count;
            for (int i = 0; i < nNum; i++)
            {
            	int a = 0;
            	while (a < count)
            	{
            		szString_2[b] = szString[a];
            		a++;
            		b++;
            	}
            	b += b;
            }
        int x = 0;
        while (szString_2[x] != '\0')
        {
            cout << szString_2[x];
            x++;
        }
        cout << "	" << endl;
        } 
   	}
   	cout << endl;

    return szLetter;
    
}
