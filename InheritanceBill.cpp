//Write a C++ program to define a base class Item (item-no, name, price). Derive a class Discounted-Item (discount-percent). A customer purchases 'n' items. Display the item-wise bill and total amount using appropriate format.
#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
class item{
    protected:
    string name;
    int item_no;
    int price;
    item(){}
    item(string x,int y,int z):name(x),item_no(y),price(z){
        cout<<"Item no:"<<y<<endl<<"Price"<<z<<endl<<"Name"<<x<<endl;
    }

};
class Discounted_item:public item{
    public:
    int discount_percent;
    Discounted_item(){}
    Discounted_item(string x,int y,int z,int w):item(x,y,z),discount_percent(w){
        int dis=(z-(z*w/100));
        cout<<"Discounted price is:"<<dis<<endl;
    }

};
int main(){
    int n=0;
    cout<<"Enter no of items purchased by customer :"<<endl;
    cin>>n;
    vector<item*>items;
    for(int i=0;i<n;i++){
        int item_no,price,discount;
        string name;
        cout<<"Enter item number:"<<endl;
        cin>>item_no;
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter price:"<<endl;
        cin>>price;
        cout<<"Enter discount"<<endl;
        cin>>discount;
        item* Item = new Discounted_item(name,item_no,price,discount);

    }


    
}
