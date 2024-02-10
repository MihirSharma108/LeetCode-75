//Step_1:- In this code here we are going to find the vowels
//Step_2:- Just reverse them
class Solution {
public:
    bool checker(char c) {
        c=tolower(c);
        return (c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u');
    } 

    string reverseVowels(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<j) {
            if(checker(s[i]) && checker(s[j])) {
                swap(s[i], s[j]);
                i++; j--;
            }
            else if(checker(s[i])==false) i++;
            else if(checker(s[j])==false) j--;
        }

        return s;
    }
};
