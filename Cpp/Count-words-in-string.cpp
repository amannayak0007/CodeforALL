#include<iostream>
using namespace std ;
int main (){
    string str = "hello \nworld" ;
    /* cout << "\nEnter a string :  ";
     getline(cin, str);*/
      int ref_point = 0  ;
      int  count = 0 ; 
     for (int i = 0 ; i <=str.size() ; i++){
           if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'){
              ref_point = 0 ;
            }
           else if(ref_point = 1){
              ref_point = 0; 
              count++ ; 

            }
        
     }
     cout<<endl << count << "\n ";
}
