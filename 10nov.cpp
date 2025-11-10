/*
inheritance  : 

1. single inheritance
2. multiple inheritance
3. multi level inheritance
4. hierarchical inheritance
*/
//single inheritance
/*
#include <iostream>
using namespace std;
class animal   // base class 
{
    public : 
        void  eat()
        {
            cout<<"eating"<<endl;
        }
};
class dog : public animal  // dog ==> derived class
{
    public :
        void  bark()
        {
            cout<<"barking"<<"\n";
        }
};
int main()
{
    dog d; 
    d.eat();  // inherit ==> 
    d.bark(); 
    return 0;
}
*/
// using  constructor   + private  + base class constructor called in derived class :

#include <iostream>
using namespace std;

class vehicle 
{
    private :
        int speed; 
        string  name; 

    public : 
        // vehicle(int s , string n) //paramter
        // {
        //     speed =s;   // self. name =name  
        //     name =n;
        // }
        vehicle(int speed,string name)
        {
            this->speed =speed;  // this ==> current  object 
            this->name =name; 
        }
        void  show()
        {
            cout<<"speed : "<<this->speed<<"\n";
            cout<<"name : "<<name<<"\n";
        }
};
class car : public vehicle 
{
    public : 
        string  model; 
        car(int s, string n , string  m) :vehicle(s,n) // base class constructor  
        {
            model  =m; 
        }
        void display()
        {
            vehicle ::show();
            cout<<"model : "<<model<<"\n";
        }
};
int main()
{
    car c(200,"toyota","corolla");
    c.display();
    // c.show();
    return 0; 
}