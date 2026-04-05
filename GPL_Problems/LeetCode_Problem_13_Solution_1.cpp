// I'm going to solve this problem using maps, this solution is very basic just to explain the logic behind it.
class Solution {
public:
    int romanToInt(string s) {
        //first we are going to make a map that contains each character and its coresponding value.
        unordered_map<char, int> romanVal;
        
        romanVal['I'] = 1;
        romanVal['V'] = 5;
        romanVal['X'] = 10;
        romanVal['L'] = 50;
        romanVal['C'] = 100;
        romanVal['D'] = 500;
        romanVal['M'] = 1000;

        //second, we are going to creat the total calculator, index and n to loop over
        int total = 0;
        int i = 0;
        int n = s.size();

        while (i < n) {
            //"cur" reffers to the currect character that we are working with, the logic behind it is, if s[i] is < s[i+1] in terms of the coresponding values, that means we are going to subtract s[i] from s[i + 1] and add the result to "total", then move to s[i + 2], else? we are only going to add s[i] and move to s[i + 1] to compare it with s[i + 2]. Once we are done we can safely return the resutl "total".
            char cur = s[i];

            if (i + 1 < n && romanVal[cur] < romanVal[s[i+1]]) {
                total += (romanVal[s[i+1]] - romanVal[cur]);
                i += 2;   
            }
            else {
                total += romanVal[cur];
                i += 1;   
            }
        }
        return total;
    }
};