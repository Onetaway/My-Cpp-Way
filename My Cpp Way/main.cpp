//
//  main.cpp
//  My Cpp Way
//
//  Created by sanlen on 9/3/14.
//  Copyright (c) 2014 Onetaway. All rights reserved.
//

#include <iostream>
#include "Friend.h"
#include <vector>

int main(int argc, const char * argv[]) {
    
    vector<Friend> list;
    
    string name;
    int age;
    float height;
    
    Friend *f1;
    
    for (int i = 0; i < 3; i++) {
        cout <<"Enter name :"<<endl;
        getline(cin, name);

        cout <<"Enter age :"<<endl;
        cin >> age;
        
        cout <<"Enter height :"<<endl;
        cin>> height;
        
        
        f1 = new Friend;
        
        f1->setName(name);
        
        f1->setAge(age);
        
        f1->setHeight(height);
        
        list.push_back(*f1);

    }
    
    vector<Friend>::iterator it;
    
    for (it = list.begin(); it != list.end(); it++) {
        it->prinfFriendInfo();
    }
    
    return 0;
}












































