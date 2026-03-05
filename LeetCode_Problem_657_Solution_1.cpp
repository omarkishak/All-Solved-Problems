class Solution {
public:
    bool judgeCircle(string moves) {

        //number of Ls = Rs and Us = Ds
        unordered_map<char, int> map;

        for(char c : moves)
        map[c]++;

        if(map['U'] == map['D'] && map['L'] == map['R'])
        return true;

        else
        return false;
        
    }
};