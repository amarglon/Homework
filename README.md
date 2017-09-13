# Homework
Homework for CIS269

Data structures and Algorithms in C++
Drozdek

Page 47
10. Assume the following class declaration: 
template <class T>
class genClass {
...
char aFunction(...);
...};
What is wrong with this function definition?
char genClass::aFunction(...) {...};

13. Transform the declaration
template<class T, int size = 50>
class genClass {
    T storage[size];
    ...............
    void memberFun() {
    ................
         if (someVar < size) { ...... }
    }
 };
