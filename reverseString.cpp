class Solution {
public:
    void reverseString(vector<char>& s) {
        
        //char moveToLast = ' ';
        //char moveToFront = ' ';
        
        int size = s.size();
        int run = size/2;
        
        for(int i = 0; i < run; i++)
        {
            size--;
            std::swap(s[i], s[size]);
            
            //instead of using swap(x,y) predefined function we can also use the below one to solve this problem.
            
            /*moveToLast = s[i];
            moveToFront = s[size];
            s[i] = moveToFront;
            s[size] = moveToLast;*/
        }
    }
};
