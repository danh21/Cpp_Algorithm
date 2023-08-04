#include <bits/stdc++.h> 

using namespace std;



/* -------------------- SAMPLE FUNCTIONS -------------------- */
/**
 * empty()      – Returns whether the stack is empty 
 * size()       – Returns the size of the stack
 * top()        – Returns a reference to the top most element of the stack
 * push(g)      – Adds the element ‘g’ at the top of the stack
 * pop()        – Deletes the most recent entered element of the stack
 * emplace(g)   – Adds the element ‘g’ at the top of the stack
 * swap(stack)  – Swap contents between 2 stacks
 */



/* -------------------- PROTOTYPE - START -------------------- */
/**
 * @brief initialize stack
 * 
 * @tparam type 
 * @param st 
 */
template <typename type>
void init(stack<type> &st);



/**
 * @brief display all elements of stack
 * 
 * @tparam type 
 * @param st - stack
 */
template <typename type>
void display(stack<type> st);



/**
 * @brief  delete the middle element of the stack
 * 
 * @ref https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1?page=1&sprint=c5af98a17a6ef5b23a28d1da5242366e&sortBy=submissions
 * 
 * @param st 
 * @param sizeOfStack 
 */
void deleteMid(stack<int> &st, int sizeOfStack);



/**
 * @brief reverse the stack
 * 
 * @ref https://practice.geeksforgeeks.org/problems/reverse-a-stack/1    
 * 
 * @param St 
 */
void Reverse(stack<int> &St);




/**
 * @brief reverse string
 * 
 * @param str 
 * @return stack<char> 
 */
stack<char> reverseStr(string str);



/**
 * @brief convert decimal number to binary number
 * 
 * @param dec 
 * @return stack<int> 
 */
stack<int> dec2bin(int dec);



/**
 * @brief encode string
 * 
 * @example aaabbaaac -> a3b2a3c1 
 * 
 * @param str 
 * @return stack<char> 
 */
stack<char> encodeStr(string str);



/**
 * @brief Implement two stacks in an array
 * 
 * @ref https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1?page=1&sprint=c5af98a17a6ef5b23a28d1da5242366e&sortBy=submissions
 */
/* -------------------- PROTOTYPE - END -------------------- */



/* -------------------- FUNCTION - START -------------------- */
template <typename type>
void display(stack<type> st) 
{
    while (!st.empty()) {
		cout << st.top();
        if (typeid(type) == typeid(int))
            cout << " ";

		st.pop();
	}
}



stack<char> reverseStr(string str)
{
    stack<char> revStr;

	for (int i = 0; i < str.length(); i++)
		revStr.push(str[i]);

    return revStr;
}



stack<int> dec2bin(int dec)
{
    stack<int> bin;

    do {
        bin.push(dec % 2);
        dec /= 2;
    } while (dec != 0);

    return bin;
}



stack<char> encodeStr(string str)
{
    stack<char> encodedStr;
    int count = 1;

    for (int i = str.length()-1; i >= 0; i--) 
    {
        for (int j = i-1; j >= 0; j--) {
            if (str[i] == str[j]) {
                count++;
                i = j;                  // avoid checking duplicate elements
            }
            else
                break;
        }

        encodedStr.push(count + '0');   // num -> char   
        count = 1;                      // reset
        encodedStr.push(str[i]);
    }

    return encodedStr;
}



void deleteMid(stack<int> &st, int sizeOfStack)
{
    int top_temp = st.top();
    
    if (st.size() >= (sizeOfStack+1)/2) 
    {
        st.pop();
        
        if (st.size() >= (sizeOfStack+1)/2) {
            deleteMid(st, sizeOfStack); 
            st.push(top_temp);   
        }
    }
}



void Reverse(stack<int> &St)
{
    stack<int> rev;
    
    while (!St.empty())
    {
        rev.push(St.top());
        St.pop();
    }
    
    St.swap(rev);
}



template <typename type>
void init(stack<type> &st)
{
    int nums, data;
    
    cout << "Enter the number of elements: ";
    cin >> nums;

    cout << "Enter data: \n";
    for (int i = 0; i < nums; i++) {
        cin >> data;
        st.push(data);
    }
}



/* -------------------- FUNCTION - END -------------------- */