#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int N;
    for (N=1;N<100;N++){
	        if(N<=20){
            if (N%2==0){
                if(2<=N&&N<=5){
                    cout<<"Not Weird";
                    }
                else
                    cout<<"Weird";
        }
            else 
                cout<<"Weird";
      }
       else 
          cout<<"Not Weird";
cout<<"\t";
}
    return 0;
}

