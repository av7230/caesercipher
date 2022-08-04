#include <iostream>

using namespace std;

string decoder(string code, int key){
int n=code.length();
string decodedtxt= "";
for(int i=0;i<n;i++){
    //decryption for uppercase letters
    if(isupper(code[i])){
            int a= code[i];
        decodedtxt+=char(int(a-65-key+26)%26+65);
    }
    //decryption for lowercase letters
    else{
            int a= code[i];
        decodedtxt+=char(int(a-97-key+26)%26+97);
    }

}
return decodedtxt;
}
int main()
{

    int key;
    string text;
    cout<<"ENTER THE STRING THAT NEEDS TO BE DECODED :"<<endl;
    cin>>text;
    cout <<endl<< "ENTER THE KEY :" << endl;
    cin>>key;
    cout<< "THE DECODED TEXT IS :"<<endl;
    cout <<decoder(text,key)<<endl<<endl;

    return 0;
}
