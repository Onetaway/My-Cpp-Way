//
//  Friend.cpp
//  My Cpp Way
//
//  Created by sanlen on 9/3/14.
//  Copyright (c) 2014 Onetaway. All rights reserved.
//

#include "Friend.h"


Friend::Friend()
{
    age = 0;
    height = 0.0;
}

void Friend::prinfFriendInfo()
{
    cout << "Age        : " << age << endl;
    cout << "Height     : " << height << endl <<endl;
}