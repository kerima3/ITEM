//
//  ORDER.h
//  ITEM
//
//  Created by Kerima Hussen on 12/17/21.
//

#ifndef ORDER_h
#define ORDER_h
#include<iostream>
#include<string.h>
#include "item.h"
#include<vector>

using namespace std;
class Order
{
public:
    Order() {}
    virtual ~Order() {}
    
    vector<Item>Getitems() {return items;}
    void Setitems(vector<Item>val) {items =val;}

    void addItem(Item item){
        if(this->item.size()>=10){
            cout<<"You already have 10 items in your order!!"<<endl;
        }
        else
            this->items.push_back(item);
    }
    double getTotalPrice() {
        double total;
        for(int i =0; i<this->items.size(); i++){
            total+= this->items.at(i).Getprice();
        }
        return toatal;
        
    }
protected:
private:
    vector<Item>items;
};

#endif /* ORDER_h */
