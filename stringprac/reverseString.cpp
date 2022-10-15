#include<iostream>
using namespace std;
void reverse(char ch[], int count){
    int s=0;
    int e=count-1;
    while (s<e)
    {
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
    for(int i=0;i<count;i++){
        cout<<ch[i]<< " ";
    }

}
int main(){
    int count=0;
    char ch[20];
    cin>>ch;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    reverse(ch,count);

return 0;
}