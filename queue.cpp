// g++ queue.cpp -o queue -std=c++11 -Wall
#include <queue>
#include <iostream>
#include <stdint.h>

using namespace std;

int main(int argc, char *argv[])
{
    // how2make queue
    // queue<value variable type>* [Variable_name] = new queue<value variable type>
    queue<string>* qu_test = new queue<string>;

    // insert
    cout << "\033[1;31m[+] insert <\"first\">, <\"second\">, <\"third\"> \033[0m" << endl;
    qu_test->push("first");
    qu_test->push("second");
    qu_test->push("third");

    // print specific things
    cout << "\033[1;32m[+] print specific things\033[0m" << endl;
    cout << qu_test->front() << endl;
    cout << qu_test->back() << endl;;

    // pop
    cout << "\033[1;32m[+] pop\033[0m" << endl;
    cout << qu_test->front() << endl;
    qu_test->pop();
    cout << qu_test->front() << endl;
    qu_test->pop();
    cout << qu_test->front() << endl;
    qu_test->pop();   

    cout << "\033[1;32m[+] isempty?\033[0m" << endl;
    if(qu_test->empty())
        cout << "Empty! size : " << qu_test->size() << endl;

    return 0;
}
