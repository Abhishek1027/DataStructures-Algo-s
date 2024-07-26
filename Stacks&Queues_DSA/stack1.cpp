#include <iostream> 
#include <stack>
using namespace std;
int main() {
	stack<int> stack;
	stack.push(21);// The values pushed in the stack should be of the same data which is written during declaration of stack
	stack.push(62);
	stack.push(33);
	stack.push(11);
	int num=0;
	stack.push(num);

	stack.pop();
	stack.pop();
	stack.pop();

	while (!stack.empty()) {
		cout << stack.top() <<" ";
		stack.pop();
	}
}
