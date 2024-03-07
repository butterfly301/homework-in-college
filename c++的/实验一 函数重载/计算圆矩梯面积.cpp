#include <iostream>
using namespace std;
int area(int a);
int area(int a,int b);
int area(int a, int b,int c);
int main()
{
    std::cout << "The area of Circle:"<<area(3)<<endl;
    std::cout << "The area of Circle:" << area(5,3) << endl;
    std::cout << "The area of Circle:" << area(3,5,7) << endl;
}
int area(int a)
{
    return 3.14 * a * a;
}
int area(int a, int b)
{
    return a * b;
}
int area(int a, int b, int c)
{
    return (a + b) * c / 2;
}