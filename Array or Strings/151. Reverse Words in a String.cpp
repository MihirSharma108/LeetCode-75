//1) first we have to create stringstream object 'ss' and initialize it with the input string 's'.
//2) then declare a string variabe words to store each word from the stringstream
//3) declare string variable 'ans' to store the reversed words
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string words;
        string ans;
        //we gonna apply loop through each word in the stringstream
        while (ss >> words) {   
            if (ans != "")  //if the ans is not empty add the current word with " "(space) and the existing ans
                ans = words + " " + ans;
            else    //else, just set the and to the current words
                ans = words + ans;
        }
        return ans; //returning the final reversed words in a string
    }
};