#include <boost/multiprecision/cpp_int.hpp>
//#include <boost/multiprecision/cpp_dec_float.hpp>
#include<bits/stdc++.h>
namespace mp = boost::multiprecision;
using namespace std;



int main() { 
  
        mp::cpp_int n,a,x,y,p;
       //int128_t n,a;
       //float128_t x,y;
       p=10;
       while(p--)
         { 
              cin >> n;
            cin>> a;
        
        y=(n-a)/2;
        x=y+a;
        cout<<x<<endl;
        cout <<y<<endl;
          }
       
        
    
	return 0;
}
