class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count = 1, max_count = 1;

        for(int i = 0; i < sentences.size(); i++){
            for(int j = 0; j < sentences[i].size(); j++){
                if(sentences[i][j] == ' '){
                    count++;
                }
            }

            max_count = max(max_count, count);
            count = 1;
        }

        return max_count;
    }
};