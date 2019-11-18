#include <iostream>
#include <string>

using namespace std;

string a,pr;
char ch;
int group=1,st=0;
string answer;

int main()
{
    cin>>a;
    a=a+'0';
    for(int i=0;i<a.length();i++){
        st=i;group=1;pr="";
        for(int y=i;y<a.length();y++){
            if(st==y){
                ch=a[y];
            }else if(st+group==y){
                for(int p=0;p<group;p++){pr=pr+ch;}
                group++;
                st=y;
                y--;
            }else{
                if(ch!=a[y])
                    break;
            }
        }
        if(pr.length()>answer.length()){
            answer="";
            answer=pr;
            pr="";
        }
        if(answer.length()>a.length()/2){break;}
    }
    cout<<answer;
    return 0;
}
