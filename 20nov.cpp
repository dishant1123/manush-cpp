/*
4. hierarchical inheritance  : mutiple  derivred class inherit  for same base class .

class a 
class b(a) 
class c(a)

5 .hybrid level   : diamond problem  
using one  or  more inheritance 

class a 
class b (a)
class c (a) 
class d (b,c)
        ===> class a appears twice in d 
*/

#include <iostream>
using namespace std;

class vehicle 
{
    private  : 
        string reg_number; 
    protected :
        string brand; 
    public : 
        int fuel_capacity;
        vehicle(string r , string b , int f)
        {
            reg_number =r;
            brand =b;
            fuel_capacity =f;
            cout<<"vehicle constructor called  : "<<endl;
        }
        void show_reg_number()
        {
            cout<<"reg number : "<<reg_number<<endl;
        }
};

class car : public vehicle 
{
    public : 
        int passenger_capacity;

        car(string r,string  b , int f , int p) : vehicle(r,b,f)
        {
            passenger_capacity =p;
            cout<<"car constructor called  : "<<endl;
        }

        void  show()
        {
            cout<<"car details are : "<<endl;
            show_reg_number();
            cout<<"brand : "<<brand<<endl;
            cout<<"fuel capacity : "<<fuel_capacity<<endl;
            cout<<"passenger capacity : "<<passenger_capacity<<endl;
        }
};
class truck : public vehicle
{
    int load_capacity; 
    public : 
        truck(string r,string  b , int f ,int l) : vehicle(r,b,f)
        {
            load_capacity =l;
            cout<<"truck constructor called  : "<<endl;
        }
        void show()
        {
            cout<<"truck details are : "<<endl;
            show_reg_number(); 
            cout<<"brand : "<<brand<<endl;
            cout<<"fuel capacity : "<<fuel_capacity<<endl;
            cout<<"load capacity : "<<load_capacity<<endl;
        }
        
};

int main()
{
    car c("c123","toyota",2000,5);
    truck t("t1234","ashok",4000,9000); 
    c.show();
    t.show(); 

    return 0;
}
