#include<iostream>
using namespace std;
int main(){
    int var=0;
    int counter=0;
    string str="luffy is still joyboy";

    for(int i=str.length()-1;i>=0;i--){
        if(var==1){
            cout<<counter;
            break;
        }
        else{
            if(str[i]!=' '){
                counter++;
            }
            if(counter!=0 && str[i]==' '){
                var=1;
            }
        }
    }

return 0;
}