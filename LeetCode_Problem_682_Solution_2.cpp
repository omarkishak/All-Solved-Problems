class Solution {
public:
    int calPoints(vector<string>& operations) {
        int x = 0;
        int lastRec = stoi(operations[0]);
        string* ptr = operations.data();

        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "D"){
                x = x + 2 * lastRec;
                lastRec = 2 * lastRec;
            }

            else if(operations[i] == "C"){
                x = x - stoi(*(ptr));
                if (ptr > operations.data()) 
                    ptr--;
                lastRec = stoi(*ptr);  

            }

            else if(operations[i] == "+"){
                x += lastRec + stoi((*ptr));
                lastRec = lastRec + stoi((*ptr));
            }

            else{
                x += stoi(operations[i]);
                ptr = &operations[i];
                if (i > 0 && operations[i-1] != "D" && operations[i-1] != "C" && operations[i-1] != "+"){
                    lastRec = stoi(operations[i-1]);
                    }
            }

        }
        return x;
    }
          
};
