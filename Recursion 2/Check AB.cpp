bool solve(char input[]) {
    if(input[0]=='\0')
        return true; // Write your code here
    bool so;
    if(input[0]=='a'&&(input[1]=='\0'||input[1]=='a'))
        so=solve(input+1);
    else if(input[0]=='a'&&(input[1]=='b'&&input[2]=='b'))
        so=solve(input+1);
    else if(input[0]=='b'&&input[1]=='b'&&(input[2]=='\0'||input[2]=='a'))
        so= solve(input+2);
    else
        return false;
    return so;
}
bool checkAB(char input[]) {
    if(input[0]=='\0')
        return true; 
    else if (input[0] != 'a')
        return false;
    return solve(input);
    }