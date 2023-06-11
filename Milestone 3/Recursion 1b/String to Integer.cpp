#include<string.h>
#include<math.h>
int stringToNumber(char input[]) {
    int l =strlen(input);
	if(l == 1)
    {
        return (input[0] - '0');
    }
    int a = stringToNumber(input+1);
    double b = input[0] - '0';
    return (b* pow(10 , l-1) + a);
}

 
