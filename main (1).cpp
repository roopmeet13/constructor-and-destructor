// writing a program that includes all 3 types of constructor and destructor.
// constructor will be called when creating an object and destructor will be called when deleting an object
#include <iostream>
using namespace std;

class student{
   public:
   int uid;
    string name;
    
    student(){ //default contructor
        uid=49;
        name="roop";
    }
    student(int x,string y){ //parameterised contructor
        uid=x;
        name=y;
    }
    student(student& s){ //copy contructor
        uid=s.uid;
        name=s.name;
    }
    ~student(){   //destructor
       cout<<"destructor is called"<<endl; 
    }
    
};

int main()
{
    student *intelligent=new student; //created an object.
    cout<<intelligent->uid<<" "<<intelligent->name<<endl;
    delete intelligent;
   
    
    student intelligentt(52,"sankha");
    cout<<intelligentt.uid<<" "<<intelligentt.name<<endl;
    
    student *intelligenttt= new student;
    cout<<intelligenttt->uid<<" "<<intelligenttt->name<<endl;
    
    
    return 0;
}