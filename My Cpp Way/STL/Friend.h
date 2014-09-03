//
//  Friend.h
//  My Cpp Way
//
//  Created by sanlen on 9/3/14.
//  Copyright (c) 2014 Onetaway. All rights reserved.
//

#ifndef __My_Cpp_Way__Friend__
#define __My_Cpp_Way__Friend__

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Friend {

public:
    Friend();
    ~Friend(){
        
    }
    void setAge(int friendAge) {
        age = friendAge;
    }
    
    void setHeight(float friendHeight) {
        height = friendHeight;
    }
    
    void setName(string friendName) {
        name = friendName;
    }
    
    void prinfFriendInfo();
    

private:
    int age;
    float height;
    string name;
    
};

#endif /* defined(__My_Cpp_Way__Friend__) */




















