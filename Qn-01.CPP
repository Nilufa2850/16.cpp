/*1.Define a class Person with name and age as instance variables.
Provide parameterised constructor with two formal arguments name 
& age to initialise instance variable.*/

#include<iostream>
#include<string.h>
using namespace std ;

class Person
{
    private :
        char name [30] ;
        int age ;
    public :
        Person (char name[] , int age)
        {
            strcpy (this->name,name) ;
            this->age = age ;
        }
        void showData ()
        {
            cout<<"\nNmae is "<<name<<endl ;
            cout<<"Age is "<<age<<endl ;
        }
} ;

int main ()
{
    Person p1("Nilufa yasmin" , 20) ;
    p1.showData() ;
    return 0 ;
}
