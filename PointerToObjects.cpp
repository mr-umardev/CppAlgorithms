#include<iostream>
using namespace std;
class item{
    int code;
    float price;
    public:
    void getdata(int a,float b)
    {
        code=a;
        price=b;
    }
    void show(){
        cout<<"code="<<code<<endl;
        cout<<"price="<<price<<endl;
    }
};
const int size=2;
int main()
{
    item i1;
    item *ptr=&i1;
    //x.getdata(100,65.50);
    //x.show();
    item *p= new item[size];
    item *d=p;
    float y;
    int x,i;
    for(i=0;i<size;i++){
        cout<<"I/P code & price of item"<<i+1<<endl;
        cin>>x>>y;
        p->getdata(x,y);
        p++;
    }
    for(i=0;i<size;i++){
        cout<<"Item"<<i+1<<endl;
        d->show();
        d++;
    }
    return 0;
}