#include<iostream>
using std::cout;

class complex
{   
    public:

    int real;
    int cmp;
    public:
    complex(int x, int y){
        this->cmp= y;
        this->real = x;

    }
    complex(){
        this->cmp = 0;
        this->real = 0;
    }

complex operator * (complex c1)
{
   complex t1;
   t1.real=real-c1.real;
   t1.cmp=cmp-c1.cmp;
   return t1;

}

}; 

int main(){
 complex apoorva = complex(2,3);
 complex  tilak = complex(1,2);
 complex ans = complex(0,0);
ans =apoorva*tilak;

 cout<<ans.real<<" "<<ans.cmp;

}