/*3. in 2 , write a non member function in which instantiate Complex
class dynamically. Initialise instace variables and display their values.
2.Define a class Complex with real and img, Provide setData()
with a, and b formal arguments , also define showData() .*/

#include<iostream>
using namespace std ;

class Complex
{
    private :
        int a,  b ;
    public :
        void setData(int a, int b)
        {
            this->a = a ; 
            this->b = b ;
        }
        void showData ()
        {
            cout<<"Real-"<<a<<" Img-"<<b<<endl ;
        }
} ;


int main ()
{
    Complex *p = NULL ;
    p = new Complex ;
    p->setData(4,5) ;
    p->showData() ;

    return 0 ;
}
