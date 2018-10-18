//LAB 07 IAN KELLY

#include "Lab7MyStack.h"

string stringReversal1(string input) {
	stack<char> stack;
	if (!input.empty()) {
		for (string::iterator iter = input.begin(); iter != input.end(); ++iter) {
			stack.push(*iter);
		}
	}
	input.clear();
	while (!stack.empty()) {
		input.push_back(stack.top());
		stack.pop();
	}
	return input;
}

string stringReversal2(string input) {
	vector<char> vector;
	if (!input.empty()) {
		for (string::iterator iter = input.begin(); iter != input.end(); ++iter) {
			vector.push_back(*iter);
		}
	}
	input.clear();
	while (!vector.empty()) {
		input.push_back(vector.back());
		vector.pop_back();
	}
	return input;
}

string stringReversal3(string input) {
	list<char> list;
	if (!input.empty()) {
		for (string::iterator iter = input.begin(); iter != input.end(); ++iter) {
			list.push_back(*iter);
		}
	}
	input.clear();
	while (!list.empty()) {
		input.push_back(list.back());
		list.pop_back();
	}
	return input;
}

string stringReversal4(string input) {
	MyStack stack;
	if (!input.empty()) {
		for (string::iterator iter = input.begin(); iter != input.end(); ++iter) {
			stack.push(*iter);
		}
	}
	input.clear();
	while (!stack.isEmpty()) {
		input.push_back(stack.pull());
	}
	return input;
}

bool MyStack::isEmpty() const {
	return stack.empty();
}

void MyStack::push(char &c) {
	stack.push_back(c);
}

char MyStack::pull() {
	char c = stack.back();
	stack.pop_back();
	return c;
}