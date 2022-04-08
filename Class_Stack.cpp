#include <iostream>
#include <vector>
#include <string>

using namespace std;
template<typename T>

class Stack
{
public:
	void push(T);
	T pop();
	void show();
private:
	vector<T> v;
};

int main() {
	Stack<int> a;
	a.push(1); a.push(2); a.push(3);
	a.show();
	cout << "poped:" << a.pop() << endl;
	a.show();

	Stack<string> b;
	b.push("Hello"); b.push("how are you?");
	b.show();
	cout << "poped:" << b.pop() << endl;
	b.show();

	return 0;
}

template<class T> void Stack<T>::push(T elem)
{
	v.push_back(elem);
}

template<class T> T Stack<T>::pop()
{
	T elem = v.back();
	v.pop_back();
	return elem;
}
template<class T> void Stack<T>::show()
{
	cout << "stack:";
	for (auto e : v) cout << e << " ";
	cout << endl;
}