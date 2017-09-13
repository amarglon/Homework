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
 
Create a class template for polynomials of degree 2 (ax^2 + bx + c) . Add addition, and multiplication capability. Include a driver file, and test cases. Submit the code, and test cases. (20)

if you need a refresher, here is how to multiply two polynomials: http://www.webmath.com/polymult.html

4. submit a screenshot of your github directory with at least 2 branches. (5)
