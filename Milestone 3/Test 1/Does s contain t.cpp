#include<cstring>
bool isSubSequence(char *str1, char *str2, int n, int m){ 
    // the entire m is present in the string
    if (m == 0) 
        return true; 
    
    // the string is completed
    if (n == 0) 
        return false; 
    
    
    if (str1[n - 1] == str2[m - 1]) 
        return isSubSequence(str1, str2, n - 1, m - 1); 
  
    return isSubSequence(str1, str2, n - 1, m); 
} 
bool checksequenece(char large[] , char*small) {
	 int n = strlen(large);
    int m = strlen(small);
    bool ans = isSubSequence(large, small, n, m);
    return ans;
}
