/*2.Define a class Complex with real and img, Provide setData()
with a, and b formal arguments , also define showData() .*/

#include<iostream>
using namespace std ;

class Complex
{
    private :
        int a,  b ;
    public :
        Complex (int a, int b)
        {
            this->a = a ;
            this-> b = b ;
        }
        void showData ()
        {
            cout<<"Real-"<<a<<" Img-"<<b<<endl ;
        }
} ;

int main ()
{
    Complex C(10,20) ;
    C.showData() ;
    return 0 ;
}
