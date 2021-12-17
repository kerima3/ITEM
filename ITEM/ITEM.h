//
//  ITEM.h
//  ITEM
//
//  Created by Kerima Hussen on 12/17/21.
//

#ifndef ITEM_h
#define ITEM_h

#include<iostream>
#include<string.h>
using namespace std;

class Item
{
public:
    Item() {}
    virtual~Item() {}
    string Getname(){return name;}
    void Setname(string val) {name = val;}
    long Getid() {return id;}
    void Setid(long val) {id =val;}
    double Getprice() {return price;}
    void Setprice(dpuble val) {price =val;}
    int Getstock() {return stock;}
    void Setstock(int val) {stock = val;}
protected:
private:
    string name;
    long id;
    double price;
    int stock;
};
ostream &operator <<(ostream &out, const Item item) {
    return (out<<"Name:" <<item.Getname() <<endl<<"ID:" <<item.Getid()<<endl<<"price:" <<item.Getprice()<<endl<<"Stock:"<<item.Getstock()<<endl);
}
#endif /* ITEM_h */
