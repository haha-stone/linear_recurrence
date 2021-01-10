
#include <iostream>
#include "ctime"
using namespace std;
unsigned int fib_normal_rec(unsigned int n);
unsigned int fib_rail_rec(unsigned int n);
unsigned int fib_no_rec(unsigned int n);
int main()
{

    unsigned int fib_num = 40000;
    clock_t t1,t2,t3,t4,t5,t6;
    cout<<"fib num:"<<fib_num<<endl;
    t1 = clock();
    //fib_normal_rec(fib_num);
    t2 = clock();
    //cout << "Normal fib time cost:" << 1000*(t2-t1)/ CLOCKS_PER_SEC<< "ms" << endl;

    cout << "----------------------------------------------------------" << endl;


    t3 = clock();
    fib_rail_rec(fib_num);
    t4 = clock();
    cout << "Rail fib time cost:" << 1000*(t4-t3)/ CLOCKS_PER_SEC << "ms" << endl;



    cout << "---------------------------------------------------------" << endl;

    t5 = clock();
    fib_no_rec(fib_num);
    t6 = clock();
    cout << "No recusion fib time cost:" <<1000* (t6-t5)/ CLOCKS_PER_SEC<< "ms" << endl;

    return 0;

}

// Normal recusion for fibonacci
unsigned int fib_normal_rec(unsigned int n)
{
    if (n <= 2)
        return 1;
    else
        return fib_normal_rec(n-1) + fib_normal_rec(n-2);
}

// Rail recusion for fibonacci
unsigned int fib_rail_rec(unsigned int n, unsigned int first, unsigned int second)
{
    if (n == 1) return first;
    if (n == 2) return second;
    return fib_rail_rec(n-1, second, second+first);
}
unsigned int fib_rail_rec(unsigned int n)
{
    return fib_rail_rec(n, 1, 1);
}

// No recusion
unsigned int fib_no_rec(unsigned int n)
{
    if (n <= 2)
        return 1;
    unsigned int x=1, y=1, y_tmp=0;
    for (unsigned int i=0; i<n-2; i++)
    {
        y_tmp = y;
        y = x+y;
        x = y_tmp;
    }
    return y;
}

