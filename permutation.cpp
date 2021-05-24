#include<iostream>
using namespace std;

void perm(char a[], int level){
    int counter=0;
    static int flag[10] = {0};
    static char res[10];
    // If we are the last character of the input string 
    if(a[level] == '\0'){
        // First we assign stopping point to result
        res[level] = '\0';
        // Now we print everything
        for(int i = 0; res[i] != '\0'; ++i){
        	if(res[i]&res[i+1]>0)
             cout<< res[i]<<" ";
        }
        //cout<<"\n";
        ++counter;
    }
    else{
        // Scan the original string and flag to see what letters are available
        for(int i = 0; a[i] != '\0'; ++i){
            if(flag[i] == 0){
                res[level] = a[i];
                flag[i] = 1;
                perm(a, level + 1);
                flag[i] = 0;
            }
        }
    }
}

int main(){
    char first[] = "123";
    perm(first, 0);
    return 0;
}
