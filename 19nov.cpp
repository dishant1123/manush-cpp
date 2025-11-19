/*
multiple  :        vs  multi level  

class a ==>            class a 
class b  ==>           class b(a)
class c (a,b)          class c(b)
*/

//multiple inheritance : derived class can inherit more than  one base class. 

#include <iostream>
using namespace std;
class grandparent
{
    public : 
        string name  ; 
        int age; 
    grandparent(string name , int age)
    {
        this->name = name ;
        this->age = age ;
    }
};

class parent
{
    private : 
        string father_name,mother_name;
        int f_age,m_age;
    
    public : 
        parent(string f_name,string m_name,int f_age,int m_age)
        {
            father_name =f_name; 
            mother_name = m_name ;
            this->f_age = f_age ;
            this->m_age = m_age ;
        }
        void  show()
        {
            cout<<"father - mother  details are : "<<endl;
            cout<<"\t father name : "<<father_name<<endl;
            cout<<"\t mother name : "<<mother_name<<endl;
            cout<<"\t father age : "<<f_age<<endl;
            cout<<"\t mother age : "<<m_age<<endl;
        }
};

class child : public parent ,public grandparent 
{
    public :
        string child_name;
  
    child(string f_name,string m_name,int f_age,int m_age,string name,int age,string child_name) :parent(f_name,m_name,f_age,m_age),grandparent(name,age)
    {
        this->child_name = child_name ;
    }
    void  show()
    {
        cout<<"grandparent details are : "<<endl;
        cout<<"\t name : "<<name<<endl;
        cout<<"\t age : "<<age<<endl;

        cout<<"parent details are : "<<endl;
        parent ::show();

        cout<<"child details are : "<<endl;
        cout<<"\t child name : "<<child_name<<endl;

    }
};
int main()
{
    child c("suresh","meena",42,40,"katilal",77,"prabhu");
    c.show();
    return 0; 
}
