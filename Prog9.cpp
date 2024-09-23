//Create a class shape with member variables dimension and member function: getdimension() to initialize the member variable and pure virtual function calculateArea().
//Create Square class which inherits the shape class and calculates the area of square.Create Circle class which inherits the shape class and calculates the area of circle.
//Demonstrate runtime polymorphism in the main function to calculate area of square and circle.
#include<iostream>
using namespace std;
class Shape{
protected:
int dimension;
public:
Shape(){}
Shape(int x):dimension(x){}
void getdimension(){
    
    
    cout<<"Enter the dimensions :"<<endl;
    cin>>dimension;
}
virtual void calculateArea()=0;
};
class Square:public Shape{
    protected:
    float area=0;
    public:
    Square(){}
    Square(int x):Shape(x),area(0){}
    void calculateArea(){
        
        
        area=(dimension*dimension);
        cout<<"Area of Square is:"<<area<<endl;
}
};
class Circle:public Shape{
    float area1=0;
    public:
     Circle(){}
     Circle(int x):Shape(x),area1(0){}
    void calculateArea(){
       
        
            area1=3.142*(dimension*dimension);
            cout<<"Area of Circle is:"<<area1<<endl;
        }
};
int main(){
    Shape *ptr;
    Square s;
    
    s.getdimension();
    ptr = &s;
    ptr->calculateArea();
    Circle c;
    c.getdimension();
     ptr= &c;
    ptr->calculateArea();

    return 0;
    return 0;
}


