#include <iostream>
using namespace std;

void process(shared_ptr<int> ptr)
{
	cout << ptr.use_count() << endl;
	return;
}

int main()
{
	cout << "hello world" << endl;
	shared_ptr<int> i(new int(1024));
	process(shared_ptr<int>(i));

	cout << *i << " " <<i.unique() << endl;
	cout << i.use_count() << endl;
	auto q = i;
	cout << i.use_count() << endl;
	return 0;
}
