/* More then one 'printf' was declasred without reporting 
any error: that is because they are declared in different namespaces 
and scopes. */
#include <iostream> 
using namespace std; 
  
namespace printA 
{ 
    void printf(const string& inp) {
    	cout << "Namespace A." << endl;
    }
}

namespace printB
{ 
    void printf(const string& inp) {
    	cout << "Namespace B." << endl;
    }
}

int main() 
{
    printA::printf("Willian\n");
    printB::printf("Willian\n");
    std::printf("Willian\n");
    return 0; 
} 