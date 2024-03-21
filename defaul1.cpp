
#include <iostream>
using namespace std;
void display(char = '*', int = 39);
int main() {
    

   
    display(); 
    
    cout << " this is #";
       display('#'); 
    
    cout << "Both value  ";
        display('$', 50); 

       return 0;
}
   void display(char c, int count) {
    for(int i = 1; i <= count; ++i)
    {
        cout << c;
    }
    cout << endl;
}


