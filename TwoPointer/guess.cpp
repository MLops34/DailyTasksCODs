/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked 
 *			      1 if num is lower than the picked 
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low=1,high=n;
        int ans=low;
        if(guess(n)==0){
            return n;
        }
        while(low<high){
            int pick=(low+high)/2;
            if(guess(pick)==0){
                return pick;
            }
            else if (guess(pick)==-1){
                low=pick+1;
            }
            else
            {   
                high=pick-1;
            }
        }
        return -1;
        
    }
};