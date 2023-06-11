#include<iostream>
using namespace std;
int main(void){
  int S, E, W;
    int fahrenite;
    int celsius;
    cin>>S;
    cin>>E;
    cin>>W;
    
    for(fahrenite=S; fahrenite<=E; fahrenite+=W){
        celsius=((fahrenite -32.0)*5.0/9.0);
        cout<<fahrenite<<" "<<celsius<<endl;
    }

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
}

