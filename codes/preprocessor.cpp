// file inclusion
#include <iostream>
// macro - LIMIT: 'macro template' | 5: 'macro expansion'
#define LIMIT 3
// macro with parameter 
#define AREA(l, b) (l * b) 
// conditional compilation
#ifdef LIMIT
int table[LIMIT];
#endif

using namespace std;

int main() {
	#ifdef LIMIT
		for (int i = 0; i < LIMIT; i++) {
			table[i] = i*2;
			cout << i << " ";
	    }
    #endif

    int l1 = 10, l2 = 5, area; 
  
    area = AREA(l1, l2); 
  
    printf("\nArea: %d\n", area);

    #undef LIMIT

    #ifdef LIMIT
    	for (int i = 0; i < LIMIT; ++i) {
    		cout << "table[" << i << "] = " << table[i] << endl;
    	}
	#endif

	return 0;
}