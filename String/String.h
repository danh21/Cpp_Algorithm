#include <bits/stdc++.h>

using namespace std;



/* -------------------- MEMBER FUNCTIONS -------------------- */
/**
 * length()             - Returns the length of the string, in terms of bytes.
 * size()               - Returns the length of the string, in terms of bytes.
 * append(...)          - Extends the string by appending additional characters at the end of its current value
 * push_back(...)       - Appends element to the end of the string, increasing its length by one.
 * find(...)            - Searches the string for the first occurrence of the sequence
 * string::npos         - indicate no matches
 * replace(...)         - Replaces the portion of the string by new contents
 * substr(...)          - Returns a newly constructed string object with its value initialized to a copy of a substring of this object.
 * insert(...)          - Inserts additional characters into the string
 * erase(...)           - Erases part of the string, reducing its length
 * empty()              - Returns whether the string is empty
 * 
 */



/* -------------------- PROTOTYPE - START -------------------- */
/**
 * @brief search first occurrence of substring
 * 
 * @param s 
 * @param sub 
 * @return int 
 */
int search(string s, string sub); 



/**
 * @brief reverse string
 * 
 * @param s 
 */
void reverse(string &s); 



/**
 * @brief replace old character to new character
 * 
 * @param s 
 * @param old 
 * @param neww 
 */
void replaceChar(string &s, char old, char neww);



/**
 * @brief convert to uppercase string
 * 
 * @param s 
 */
void toUpper(string& s); 



/**
 * @brief convert to lowercase string
 * 
 * @param s 
 */
void toLower(string& s); 



/**
 * @brief amend sentene as below requirement:
 *  Put a single space between the words.
 *  Convert the uppercase letters to lowercase.
 * 
 * @ref https://codelearn.io/learning/basic-algorithms/3478
 * 
 * @param s 
 * @return string 
 */
string amendTheSentence(string s);



/**
 * @brief Remove redundant white-spaces
 * 
 * @ref https://codelearn.io/learning/basic-algorithms/3836
 * 
 * @param input 
 */
void removeRedundantSpace(string &input);



/**
 * @brief Consider the following operation on a string containing digits from 0 to 9:
 *  if the leftmost digit of the string is divisible by 3, remove it from the string;
 *  otherwise, if the rightmost digit of the string is divisible by 3, remove it from the string;
 *  otherwise, if the sum of two digits on the sides of the string is divisible by 3, remove both digits from the string;
 * 
 * @ref https://codelearn.io/learning/basic-algorithms/3838
 * 
 * @param s 
 * @return string 
 */
string truncateString(string s);



/**
 * @brief A standardized question must satisfy this following rules:
 *  Common rules: 
 *      Question only contains letter (a-zA-Z), number(0-9), comma(,), space(' '), question mark (?) characters. 
 *      Other character should be replaced by space.
 *  Space (' ') rules:
 *      No space in the head of sentence, no space in the end of sentence. No more than 1 space between the words in 1 sentence.
 *      There must be a letter or number after a space.
 *  Comma (,) rules:
 *      There must be a letter or number before a comma and only 1 space after a comma.
 *  Uppercase / lowercase rules:
 *      The first letter in a sentence must be an uppercase
 *      All of other letter in a sentence must be lowercase except for the first letter.
 *  Question mark (?) rules:
 *      There is always has one question mark at the end of sentence.
 *      There must be 1 letter or number before a question mark.
 *      If the question mark appears in the middle of sentence then replace the question mark by a space.
 * 
 * @ref https://codelearn.io/learning/basic-algorithms/1440
 * 
 * @param s 
 * @return string 
 */
string questionCorrection(string s);



/**
 * @brief encode string
 * ex: abbcabb -> a2bca2b
 * 
 * @param s 
 * @return string 
 */
string lineEncoding(string s);



/**
 * @brief  While reading characters from the stream, 
 * you have to tell which character has appeared only once in the stream upto that point. 
 * If there are many characters that have appeared only once, 
 * you have to tell which one of them was the first one to appear. 
 * If there is no such character then append '#' to the answer.
 * 
 * @ref https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1?page=1&sprint=967a8d5959a1ba91077bbef4d0bdd302&sortBy=submissions
 * 
 * @param A consists only of lower case alphabets
 * @return string 
 */
string FirstNonRepeating(string A); 



/**
 * @brief count number of occurrences of character
 * 
 * @param s 
 * @param c
 * @return int 
 */
int countChar(string s, char c); 



/**
 * @brief count number of different characters
 * 
 * @param s 
 * @return int 
 */
int differentSymbolsNaive(string s);



/**
 * @brief Return the first non-repeating character in S. 
 * If there is no non-repeating character, return '$'.
 * 
 * @ref https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1?page=1&sprint=967a8d5959a1ba91077bbef4d0bdd302&sortBy=submissions
 * 
 * @param S consists of lowercase Latin Letters.
 * @return char 
 */
char nonrepeatingCharacter(string S);



/**
 * @brief count number of common characters
 * 
 * @param s1 
 * @param s2 
 * @return int 
 */
int commonCharacterCount(string s1, string s2);



/**
 * @brief count number of different substrings
 * 
 * @param inputString 
 * @return int 
 */
int differentSubstringsTrie(string inputString);		



/**
 * @brief returns the length of the longest repeating subsequence such that it can be found twice in the given string.
 * 
 * @ref https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1?page=1&sprint=967a8d5959a1ba91077bbef4d0bdd302&sortBy=submissions
 * 
 * @param str 
 * @return int 
 */
int LongestRepeatingSubsequence(string str);



/**
 * @brief Define crossover operation over two equal-length strings A and B as follows:
 *  the result of that operation is a string of the same length as the input strings
 *  result[i] is either A[i] or B[i], chosen at random
 * Given array of strings inputArray and a string result, 
 * find for how many pairs of strings from inputArray the result of the crossover operation over them may be equal to result.
 * 
 * @ref https://codelearn.io/learning/basic-algorithms/3840
 * 
 * @param inputArray 
 * @param result 
 * @return int 
 */
int stringsCrossover(vector<string> inputArray, string result);



/**
 * @brief A pangram is a sentence where each alphabetic character (a-z) is used at least once
 * 
 * @param sentence 
 * @return true 
 * @return false 
 */
bool isPangram(string sentence);



/**
 * @brief The website considers a password to be strong if it satisfies the following criteria:
 *  Its length is at least 6
 *  It contains at least one digit (1234567890)
 *  It contains at least one lowercase English character. (abc...z)
 *  It contains at least one uppercase English character (ABC...Z)  
 *  It contains at least one special character. The special characters are: !@#$%^&*()-+
 * 
 * @ref https://codelearn.io/learning/basic-algorithms/3476
 * 
 * @param password 
 * @return true 
 * @return false 
 */
bool checkStrongPassword(string password);



/**
 * @brief A palindrome is a string that reads the same left-to-right and right-to-left.
 * 
 * @ref https://codelearn.io/learning/basic-algorithms/3835
 * 
 * @param inputString 
 * @return true 
 * @return false 
 */
bool isPalindromic(string inputString);



/**
 * @brief returns the longest palindromic subsequence.
 * 
 * @ref https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence-1612327878/1?page=1&sprint=967a8d5959a1ba91077bbef4d0bdd302&sortBy=submissions
 * 
 * @param A 
 * @return int 
 */
int longestPalinSubseq(string A);



/**
 * @brief Determine whether the given string can be obtained by one concatenation of some string to itself
 * 
 * @ref https://codelearn.io/learning/basic-algorithms/3837
 * 
 * @param inputString 
 * @return true 
 * @return false 
 */
bool isTandemRepeat(string inputString);



/**
 * @brief Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
 * 
 * @ref https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1?page=1&sprint=967a8d5959a1ba91077bbef4d0bdd302&sortBy=submissions
 * 
 * @param x {}, (), []
 * @return true 
 * @return false 
 */
bool ispar(string x);



/**
 * @brief check whether binary sequence is divisible by 3
 * 
 * @ref https://stackoverflow.com/questions/39385971/how-to-know-if-a-binary-number-divides-by-3
 * 
 * @param s binary sequence
 * @return true 
 * @return false 
 */
bool isDivisibleBy3(string s); 



/**
 * @brief check whether string2 can be arranged as string1
 * 
 * @param string1 
 * @param string2 
 * @return true 
 * @return false 
 */
bool charactersRearrangement(string string1, string string2);



/**
 * @brief find all permutations (need not be different) of a given string
 * 
 * @ref https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string-1587115620/1?page=1&sprint=967a8d5959a1ba91077bbef4d0bdd302&sortBy=submissions
 * 
 * @param S 
 * @return vector<string> 
 */
vector<string> permutation(string S);


/* -------------------- PROTOTYPE - END -------------------- */



/* -------------------- FUNCTION - START -------------------- */
void reverse(string &s) 
{
    reverse(s.begin(), s.end());
}



int countChar(string s, char c) 
{
	return count(s.begin(), s.end(), c);
}



int search(string s, string sub) 
{
    int index = s.find(sub);

    if (index == string::npos)  // no matches were found
        return -1;
    else
        return index;
}



void replaceChar(string &s, char old, char neww)
{
    for (int i = 0; i < s.size(); i++)
        if (s[i] == old)
            s[i] = neww;
}



void toUpper(string& s) 
{
	for (int i = 0; i < s.size(); i++) 
		if (s[i] >= 'a' && s[i] <= 'z')			
			s[i] -= 32;			
}



void toLower(string& s) 
{
	for (int i = 0; i < s.size(); i++) 
		if (s[i] >= 'A' && s[i] <= 'Z')			
			s[i] += 32;
}



int commonCharacterCount(string s1, string s2)
{
    int s, l, i, count = 0;

    if (s1.length() >= s2.length()) {
        s = s2.length();        // shorter
        l = s1.length();        // longer
    }
    else {    
        s = s1.length();
        l = s2.length();
    }

    vector<bool> checked(l, false);

    for (i = 0; i < s; i++)
    {
        for (int j = 0; j < l; j++) 
            if (s1[i] == s2[j] && checked[j] == false) { // compare and count
                count++;
                checked[j] = true;
                break;
            }
    } 

    return count;
}



int differentSymbolsNaive(string s)
{
    int i, j, count = 1;

    for (i = 1; i < s.length(); i++) // compare values and count
    {  
        for (j = 0; j < i; j++) 
            if (s[i] == s[j]) 
                break;
        if (j == i) 
            count++;
    }

    return count;
}



int differentSubstringsTrie(string inputString)		
{
    vector<string> arrSubStrs;
    
    int count = 1, len, start, i, j;

    for (len = 1; len <= inputString.length(); len++) { // cut substring by length
        for (start = 0; start <= inputString.length()-len; start++)
            arrSubStrs.push_back(inputString.substr(start, len));         
    }

    for (i = 1; i < arrSubStrs.size(); i++) // compare values and count
    {                             
        for (j = 0; j < i; j++) 
            if (arrSubStrs[i] == arrSubStrs[j]) 
                break;

        if (j == i)
            count++;
    }

    return count;
}


 
bool charactersRearrangement(string string1, string string2)	
{
    sort(string1.begin(), string1.end());

    sort(string2.begin(), string2.end());

    if (string1 == string2) // compare
        return true;
    else
        return false;
}



bool isPangram(string sentence)
{
    int count = 0;

    toLower(sentence);  // avoid uppercase instance

    for (char c = 'a'; c <= 'z'; c++) {
        if (sentence.find(c) == string::npos)
            return false;
    }

    return true;
}



bool checkStrongPassword(string password)
{
    bool validLen = false, hasDig = false, hasUpperChar = false, hasLowerChar = false, hasSpecialChar = false;
    string strSpecialChars = "!@#$%^&*()-+";
    
    if (password.size() >= 6) 
        validLen = true;

    for (int i = 0; i < password.size(); i++) 
    {
        if (password[i] >= '1' && password[i] <= '9') 
            hasDig = true;

        if (password[i] >= 'a' && password[i] <= 'z') 
            hasLowerChar = true;

        if (password[i] >= 'A' && password[i] <= 'Z') 
            hasUpperChar = true;

        if (strSpecialChars.find(password[i]) != -1)
            hasSpecialChar = true;
    }
    
    return validLen && hasDig && hasLowerChar && hasUpperChar && hasSpecialChar;
}



string amendTheSentence(string s)
{
    for (int i = 0; i < s.length(); i++) 
    {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
            if (i != 0) 
                s.insert(i, " ");
        }
    }

    return s;
}



bool isPalindromic(string inputString) 
{
    int i;

    for (i = 0; i < inputString.length() / 2; i++) 
        if (inputString[i] != inputString[inputString.length() - 1 - i]) 
            break;

    return (i == inputString.length() / 2) ? true : false; 
}



void removeRedundantSpace(string &input)
{
    // remove the space at the head of the sentence
    while (input[0] == ' ')     
        input.erase(0, 1);

    // remove extra-spaces between sentences
    for (int i = 1; i < input.length(); i++) {
        if (input[i] == ' ') {  
            while (input[i+1] == ' ')  
                input.erase(i+1, 1);
        }
    }

    // remove the space at the end of the sentence
    while (input[input.length()-1] == ' ')
        input.erase(input.length()-1, 1);
}



bool isTandemRepeat(string inputString)
{
    int i, mid = inputString.length()/2, j = mid;

    for (i = 0; i < mid; i++) 
        if (inputString[i] != inputString[j++]) 
            break;
    
    return (i == mid && inputString.length() % 2 == 0) ? true : false; 
}



string truncateString(string s)
{
    string strDivisibleBy3 = "0369";
    int flagStart = 0, flagEnd = 0, flagStartEnd = 0;

    while (!s.empty()) 
    {
        while (strDivisibleBy3.find(s[0]) != -1) {
            s.erase(0, 1);
            flagStart = 1;
        }

        while (strDivisibleBy3.find(s.back()) != -1) {
            s.erase(s.length() - 1, 1);
            flagEnd = 1;
        }

        int sum = s[0] + s[s.length() - 1];
        if (sum == 99 || sum == 102 || sum == 105 || sum == 108 || sum == 111 || sum == 114) {
            s.erase(0, 1);
            s.erase(s.length() - 1, 1);
            flagStartEnd = 1;
        } 

        if (flagStart == 0 && flagEnd == 0 && flagStartEnd == 0) // ko thỏa 3 dieu kien tren
            break;
        else {
            flagStart = 0;
            flagEnd = 0;
            flagStartEnd = 0;
        }
    }    

    return s;  
}



int stringsCrossover(vector<string> inputArray, string result)
{
    int i, j, k, count = 0;

    for (i = 0; i < inputArray.size() - 1; i++) 
    {
        for (j = i + 1; j < inputArray.size(); j++) 
        {
            for (k = 0; k < result.size(); k++) 
                if (inputArray[i][k] != result[k] && inputArray[j][k] != result[k]) 
                    break;

            if (k == result.size())
                count++;
        } 
    }

    return count;
}



string questionCorrection(string s)
{  
    // All of other letter in a sentence must be lowercase except for the first letter.
    toLower(s);

    // Other character should be replaced by space.
    for (int i = 0; i < s.size(); i++)
        if ( s[i] != ' ' && s[i] != ',' && ( s[i] < '0' || (s[i] > '9' && s[i] < 'A') || (s[i] > 'Z' && s[i] < 'a') || s[i] > 'z' ) )  
            s[i] = ' ';

    // remove comma and space at the head of sentence
    while (s[0] == ' ' || s[0] == ',')
        s.erase(0, 1);
        
    for (int i = 1; i < s.length(); i++) 
    {
        // only 1 space after a comma
        if (s[i] == ',') 
            s.insert(i+1, " "); 

        // No more than 1 space between the words in 1 sentence.
        else if (s[i] == ' ')    
            while (s[i+1] == ' ')   
                s.erase(i+1, 1);           
    }

    for (int i = 1; i < s.length(); i++) {
        // after comma shoule be space and letter
        if (s[i] == ',')     
            while (s[i+1] == ' ' && s[i+2] == ',')   
                s.erase(i+1, 2);

        // remove space before comma
        if (s[i] == ' ') {
            if (s[i+1] == ',') {  
                s.erase(i, 1); 
                i--;
            }
        }         
    } 
    
    // remove comma at the end of sentence
    while (s[s.length()-1] == ' ' || s[s.length()-1] == ',')
        s.erase(s.length()-1, 1);

    // The first letter in a sentence must be an uppercase
    s[0] = toupper(s[0]);

    // There is alway has one question mark at the end of sentence.
    s.append("?"); //Luôn có 1 dấu ? kết thúc câu.

    return s;
}



string lineEncoding(string s)
{   
    string result = "";
    int count = 1;

    for (int i = 0; i < s.length(); i++) 
    {
        if (s[i] == s[i+1])
            count++;
        else {
            if (count > 1) 
                result.push_back(count + '0'); 
            result.push_back(s[i]);
            count = 1;
        }
    }

    return result;
}



bool isDivisibleBy3(string s)
{      
    int cntBit1_odd = 0, cntBit1_even = 0;
    
    for (int i = 0; i < s.length(); i++)
        if ((s[i] == '1') && (i % 2 == 0))
            cntBit1_even++;
        else if ((s[i] == '1') && (i % 2 != 0))
            cntBit1_odd++;
    
    if ((cntBit1_odd - cntBit1_even) % 3 == 0)
        return true;
    else
        return false;
}



int longestPalinSubseq(string A)
{
    string revA;
    for (int i = A.length()-1; i >= 0; i--) // reverse
        revA.push_back(A[i]);

    int n = A.length(), i, j;
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));   // n+1 rows, n+1 columns, elements are 0
    
    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n; j++) {
            if (A[i-1] == revA[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    
    return dp[n][n];
}



int LongestRepeatingSubsequence(string str) 
{
    int n = str.length(), i, j;
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));   // n+1 rows, n+1 columns, elements are 0
    
    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n; j++) {
            if (str[i-1] == str[j-1] && i != j)
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    
    return dp[n][n];
}



void traversal_permutation(string &S, vector<string> &permutations, int index)
{
    if (index == S.length()-1) 
        permutations.push_back(S);
    else {
        for (int i = index; i < S.length(); i++) {
            sort(S.begin() + index, S.end());
            swap(S[index], S[i]);
            traversal_permutation(S, permutations, index+1);
        }
    }    
}

vector<string> permutation(string S)
{
    vector<string> permutations;

    traversal_permutation(S, permutations, 0);
    
    sort(permutations.begin(), permutations.end());
    
    return permutations;
}



bool ispar(string x)
{
    int numOfParentheses = 0, numOfSquareBrackets = 0, numOfCurlyBrackets = 0, i;
    
    for (i = 0; i < x.size(); i++) 
    {
        if (x[i] == '(')
            numOfParentheses++;
        else if (x[i] == ')') {
            if (x[i-1] == '[' || x[i-1] == '{')
                return false;
            numOfParentheses--;
        }
        else if (x[i] == '[')
            numOfSquareBrackets++;
        else if (x[i] == ']') {
            if (x[i-1] == '(' || x[i-1] == '{')
                return false;
            numOfSquareBrackets--;
        }
        else if (x[i] == '{')
            numOfCurlyBrackets++;
        else if (x[i] == '}') {
            if (x[i-1] == '[' || x[i-1] == '(')
                return false;
            numOfCurlyBrackets--;
        }
    }
    
    if (numOfParentheses == 0 && numOfSquareBrackets == 0 && numOfCurlyBrackets == 0)
        return true;
    else
        return false;
}



string FirstNonRepeating(string A) 
{
    string res;
    int i, pos;
    string nonRepeatChars;

    for (i = 0; i < A.length(); i++) {
        pos = A.find(A[i]);
        if (pos != -1 && pos < i) {
            pos = nonRepeatChars.find(A[i]);
            if (pos != -1)
                nonRepeatChars.erase(pos, 1);
        }
        else
            nonRepeatChars.push_back(A[i]);
              
        if (nonRepeatChars.length() == 0)
            res.push_back('#');
        else
            res.push_back(nonRepeatChars[0]); 
    }
    
    return res;
}



char nonrepeatingCharacter(string S)
{
    int len = S.length(), i;
    
    for (i = 0; i < len; i++) 
    {
        if (S.substr(i+1, len).find(S[i]) == -1)
            return S[i];
        else
            S.push_back(S[i]);
    }
    
    return '$';
}


/* -------------------- FUNCTION - END -------------------- */
