#include<iostream>
#include<vector>

using namespace std;

        #define     pb          push_back

class String{
    private: 
    public:
        
        vector<char> * input;
    public:
        String(){
            input = new std::vector<char>();
        };

        String(const char * s){
            input = new std::vector<char>();
            for(int i =0 ; s[i] != '\0'; i++){
                input->pb(s[i]);
            }
            input->pb('\0');
        }

        String(const String &a){
            input = new std::vector<char>(a.input->begin(),a.input->end());
            
        }

        inline bool operator==(const String &test){
            for(int i = 0 ; i < (int)test.input->size(); i++){
                if(this->input->at(i) != test.input->at(i)){
                    return false;
                }
            }
            return true;
        }
        inline void operator=( String in){
            while(!this->input->empty()){
                this->input->pop_back();
            }

            
            for(int i = 0 ; i <(int) in.input->size(); i++){
                this->input->pb(in.input->at(i));
            }
        }

         inline void operator=( const char * in){
            while(!this->input->empty()){
                this->input->pop_back();
            }

            for(int i = 0 ; in[i] != '\0'; i++){
                this->input->pb(in[i]);
            }
        }

        inline String operator+(const String in){
             
             for(int i = 0 ; i <(int) in.input->size(); i++){
                this->input->pb(in.input->at(i));
            }
            return *this;
        }

          inline String operator+(const char * in){
             
             for(int i = 0 ; in[i] != '\0'; i++){
                this->input->pb(in[i]);
            }
            return *this;
        }
};

 inline std::ostream &operator<<(std::ostream &os, const String &in){
            for(int i =0 ; i < (int)in.input->size(); i++){
                cout<<in.input->at(i);
            }
            return os<<'\n';
        }