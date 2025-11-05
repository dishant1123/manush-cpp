/*
class object : 

class 3 type  : 

1. public   : any class can access this class
2. private  : within class only  
3. protected : within class and sub class  ==> inheritance
*/

/*
#include <iostream>
using namespace std;
class person 
{
    public : 
        int age=20;
        string name="manush"; 

    // void  show()
    // {
    //     cout<<"name : "<<name<<" age : "<<age<<endl;
    // }
};
int main()
{
    person p; 
    // p.show();
    cout<<"name : "<<p.name<<" age : "<<p.age<<endl;
     p.name ="ram"; 
    p.age =55; 
    cout<<"name : "<<p.name<<" age : "<<p.age<<endl;

    // p.show(); 
    return 0; 
}
*/ 

/*
// private  : 
#include <iostream>
using namespace std; 
class person 
{
    private :
        string name = "manush"; 
        int age =20 ; 
    public :
        void show ()
        {
             cout<<"name : "<<name<<" age : "<<age<<endl;
        }
};
int main()
{
    person p; 
    p.show();

    // cout<<"name : "<<p.name<<" age : "<<p.age<<endl;  not  accessible  outside the class 

    return 0;
}

*/

/*
constructor  : class name same as  constructor  name  it is  compulsory. 
automatically called when object is  created
*/

// default  constructor : 
/*
#include <iostream>
using namespace std;
class employees 
{
    public : 
        employees()
        {
            cout<<"default constructor called"<<endl;
        }
};
int main()
{
    employees e; 
    return 0;
}
*/ 
// non parameterized constructor :
/*
#include <iostream>
using namespace std;
class employees 
{
    public : 
        string name ; 
        int age; 
    public : 
        employees()
        {
            name = "manush"; // non parameterized 
            age = 20;
        }
    void show()
    {
        cout<<"name : "<<name<<" age : "<<age<<endl;
    }
};
int main()
{
    employees e; 
    e.show();  // function call  
    cout<<"name : "<<e.name<<" age : "<<e.age<<endl;  // object 
    return 0;

}
*/
// parameterized constructor :
/*
#include <iostream>
using namespace std;
class employees 
{
    public : 
        string name ; 
        int age; 
    public : 
        employees(string n , int a )
        {
            name=n; 
            age=a;
        }
    void show()
    {
        cout<<"name : "<<name<<" age : "<<age<<endl;
    }
};
int main()
{
    employees e("manush",21); 
    e.show();  // function call  
    cout<<"name : "<<e.name<<" age : "<<e.age<<endl;  // object 
    return 0;

}
*/ 
// this  operator  ==> current  class object

#include <iostream>
using namespace std;
class employees 
{
    public : 
        string name ; 
        int age; 
    public : 
        employees(string name , int age )
        {
            this->name=name; 
            this->age=age;
        }
    void show()
    {
        cout<<"name : "<<name<<" age : "<<age<<endl;
    }
};
int main()
{
    employees e("manush",21); 
    e.show();  // function call  
    cout<<"name : "<<e.name<<" age : "<<e.age<<endl;  // object 
    return 0;

}

// task  :1 
