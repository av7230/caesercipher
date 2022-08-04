#include <iostream>

using namespace std;

string encoder(string text, int key){

int n=text.length();
string encodedtxt= "";
for(int i=0;i<n;i++){
    if(isupper(text[i])){
            int a= text[i];
        encodedtxt+=char(int(a+key-65)%26+65);
    }
    else{
            int a= text[i];
        encodedtxt+=char(int(a+key-97)%26+97);
    }

}
return encodedtxt;
}
int main()
{

    int key;
    string text;
    cout<<"ENTER THE STRING THAT NEEDS TO BE ENCODED :"<<endl;
    cin>>text;
    cout <<endl<< "ENTER THE KEY :" << endl;
    cin>>key;
    cout<< "THE ENCODED TEXT IS :"<<endl;
    cout <<encoder(text,key)<<endl<<endl;

    return 0;
}
