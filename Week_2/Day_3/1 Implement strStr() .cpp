#include <string>
using namespace std;
class Solution {
    public :
        int strStr(string haystack , string needle){
            int haystackLen = haystack.length();
            int needleLen = needle.length();
            int Index = 0;
            for (int i = 0 ; i < haystackLen ; i++){
                if( haystack[i] == needle[Index]){
                    Index++;
                }
                else{
                    i = i - Index;
                    Index = 0;
                }
                if(Index == needleLen){
                    return i - needleLen +1;
                }
            }
            return -1;
        }
};