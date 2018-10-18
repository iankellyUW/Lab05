//LAB 07 IAN KELLY
#include <stack>
#include <string>
#include <list>
#include <iostream>
#include <vector>
using std::stack;
using std::list;
using std::string;
using std::vector;
using std::cout;
using std::endl;

#ifndef LAB_7_MY_STACK_
#define LAB_7_MY_STACK_

string stringReversal1(string input);
string stringReversal2(string input);
string stringReversal3(string input);
string stringReversal4(string input);

class MyStack
{
public:
	bool isEmpty() const;
	void push(char &c);
	char pull();


private:
	vector<char> stack;
};


#endif