#include"String.hpp"

int main(){
    String a ;
    String b("abc");
    auto ans = "abrakadabra";
    String c(ans);
    cout<<c.input->size()<<std::endl;
    for(int i =0 ; i <(int) c.input->size() ; i++){
        cout<<c.input->at(i);
    }
    cout<<endl;
    String test = c;
      for(int i =0 ; i <(int) c.input->size() ; i++){
        cout<<test.input->at(i);
    }
    if(c==test){
        cout<<"\nEquate test successful\n";
    }
    test = b;
    test = "true";
    test = b + " " ;
    test = test + " false";
    for(int i = 0 ; i < test.input->size(); i++){
        cout<<test.input->at(i);
    }
    return 0;
}