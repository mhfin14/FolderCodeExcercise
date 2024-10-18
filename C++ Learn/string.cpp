#include <iostream>
#include <string>
void greetingfirst(){
    std::cout << "sorry, i am not sure" << std::endl;
}
using namespace std;

int main() {
    string tell, again;  
    string person1 = "AI : ";
    string person2 = "ME : ";
    cout << person1 <<"tell anythink if you want!!: "; getline(cin, tell);
        if (tell == "i love her"){
            cout << person1; greetingfirst(); cout << person2; getline(cin, again); cout << person1 << "are you sure bro?"<< endl; cout << person2; getline(cin, again);
            }else{
                    cout << person1 << "wake up bro :)" << endl;    
                }
                    if (again == "yes ")
                    {
                        cout << person1 << "go to learn C++ again, don't ask anythink to me! did you understand?? >:|" << endl;
                        cout << person2; getline(cin, again);
                    }else{
                cout << person1 << "Oke have nice dream"<< endl;
                cout << person2; getline(cin, again);
                    }
            cout << "Thank you"<< endl;
    return 0;
}
