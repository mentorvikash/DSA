// check the given input is uppercase lowercase integer and return;

#include <iostream>
using namespace std;
int main(){
char ch;
cout<<"enter any character"<<endl;
cin>>ch;
if(isupper(ch)){
  cout<<"upper Character";
}
else if(islower(ch)){
  cout<<"lower Character";
}
else {
  cout<<"integer";
}
  return 0;
}