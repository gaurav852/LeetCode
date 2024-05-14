class Solution {
public:
    int countDigits(int num) {
        int d,dup,count=0;
        dup = num;
        while(num>0){
            d = num%10;
            num = num/10;
            if(dup%d == 0){
                count += 1;
            }
        }
        return count;
    }
    
};