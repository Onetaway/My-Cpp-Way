//
//  Date.h
//  My Cpp Way
//
//  Created by sanlen on 9/3/14.
//  Copyright (c) 2014 Onetaway. All rights reserved.
//

#ifndef __My_Cpp_Way__Date__
#define __My_Cpp_Way__Date__

#include <stdio.h>

// class 和 struct 的区别仅仅在于: class 的成员变量默认情况下
// 是 private 的，而 struct 的成员变量默认情况下是 public 的
class Date {
    int day, month, year;
public:
    
    // Constrcutors
    Date(int dd, int mm, int yy); // Constructors: 函数名和类名相同
    Date(int dd, int mm);
    Date(int dd);
    Date();
    Date(const char *);
    
    
    void init(int dd, int mm, int yy);
    void add_year(int n); // Add n years
    void add_month(int n);
    void add_day(int n);
};


#endif /* defined(__My_Cpp_Way__Date__) */







































