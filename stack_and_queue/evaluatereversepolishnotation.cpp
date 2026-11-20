class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num;
        int sum=0;
        for(string c: tokens){
            if(c != "+" && c != "-" && c != "*" && c != "/"){
                num.push(stoi(c));
            }
            else{
                int t1=num.top();
                num.pop();

                int t2=num.top();
                num.pop();
                int sum=0;
                if(c=="+"){
                    sum=t2+t1;
                }
                else if(c=="-"){
                    sum=t2-t1;
                }
                else if(c=="*"){
                    sum=t2*t1;
                }
                else{
                    sum=t2/t1;
                }
                num.push(sum);

            }
        }
        return num.top();

        
    }
};

// time complexity O(n) where n is the number of tokens in the input vector
// space complexity O(n) where n is the number of tokens in the input vector

input: ["2","1","+","3","*"]
output: 9