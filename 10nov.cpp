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

/*
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
*/ 

// protetced  data member

/*
#include <iostream>
using namespace std;
class student
{
    protected : 
        string name; 
        int age; 
    public : 
        student(string n,int a)
        {
            name =n; 
            age =a; 
        }
};

class person : public student
{
    private  : 
        int rollno; 

    public : 
        person(string n,int a,int r) : student(n,a) 
        {
            rollno =r;
        } 
    void show()
    {
        cout<<"name : "<<name<<"\n";
        cout<<"age : "<<age<<"\n";
        cout<<"rollno : "<<rollno<<"\n";
    }

};

int main()
{
    person p("john",20,100);
    p.show();
    return 0;
}

*/ 

#include <iostream>
using namespace std;
class person 
{
    protected:
        string name ; 
        int age; 

};
class student : public person
{
    private : 
        int rollno; 
    public : 
        void inputdata()
        {
            cout<<"enter name : "; // direct access of name and age  bcz of  protected
            cin>>name; 
            cout<<"enter age : ";
            cin>>age;
            cout<<"enter rollno : ";
            cin>>rollno;
        
        }
        void show()
        {
            cout<<"rollno : "<<rollno<<"\n";
            cout<<"name : "<<name<<"\n";
            cout<<"age : "<<age<<"\n";
        }
};

int main()
{
    student s; 
    s.inputdata();
    s.show();
    return 0;
}