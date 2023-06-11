#include <unordered_map>
#include <string>
string uniqueChar(string str) {
	// Write your code here
    string ans;
    int length=str.length();
    unordered_map<char,int> output;
    for(int i=0;i<length;i++){
		if(output[str[i]]<1){
            ans+=str[i];
        }
        output[str[i]]++;
    }
    return ans;
}