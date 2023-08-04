#include <bits/stdc++.h>
#include "Stack.h" 

using namespace std;



int main() {     
    /* Reverse string */   
    // string s;
	// cout << "Enter the string: ";
    // getline(cin, s);

    // cout << "Reversed string: ";
    // display(reverseStr(s));



    /* Dec -> Bin */  
    // int n;
    // cout << "Enter the number: ";
    // cin >> n;

    // cout << "Binary number: ";
    // display(dec2bin(n));
    


    /* Encode string */   
    // string s;
	// cout << "Enter string: ";
    // getline(cin, s);

    // cout << "Encoded string: ";
    // display(encodeStr(s));



    /* Interaction with stack */
    stack<int> st;
    int opt;
    while (1) 
    {
        cout << "\n\n" << " ------------------------ MENU ------------------------ " << endl;
        cout << "0. Quit" << endl;
        cout << "1. Initialize" << endl;
        cout << "2. Display" << endl;
        cout << "3. Delete mid element" << endl;
        cout << "4. Reverse" << endl;

        cout << "Enter your option: ";
        cin >> opt;

        switch (opt)
        {
            case 0:
                return 0;
            case 1:
                init(st);
                break;
            case 2:
                cout << "All elements of stack: \n";
                display(st);
                break;
            case 3:
                deleteMid(st, st.size());
                break;
            case 4:
                Reverse(st);
                break;
            default:
                cout << "Invalid option !";
                break;
        }
    }
    


    return 0;
}