class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // here we are checking the str1+str2 is equal to str+str1 
        if(str1+str2 != str2+str1) return "";
        // here we are using the substr function  
        return str1.substr(0, gcd(str1.size(), str2.size()));    //returning the final ans 
    }
};
