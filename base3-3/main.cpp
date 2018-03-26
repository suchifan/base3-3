//
//  main.cpp
//  base3-3
//
//  Created by suchao on 3/26/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
   
    int n;
    cout << "input an odd number n:\n";
    
    while(!(cin >> n) || n < 2 || n % 2 != 1)
    {
        cout << "input an odd number n:\n";
        cin.clear();
        cin.sync();
    }
    
    
    for (int i = 0; i < n; i++){
        int m;
        
        if(i < n/2){
            m = 2 * i + 1;
        }else{
            m = 2 * n - 1 - 2 * i;
        }
        for(int blank = 0; blank <(n-m)/2; blank++){
            cout << " ";
        }
        for(int j = 0; j < m; j++){
            cout << "*";
        }
        cout << endl;
        
    }

    return 0;
}
