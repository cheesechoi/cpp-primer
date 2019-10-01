#include <iostream>
using namespace std;

void process(shared_ptr<int> ptr)
{
	cout << ptr.use_count() << endl;
	return;
}

int main()
{
	shared_ptr<int> p(new int(1024));
	process(shared_ptr<int>(p.get()));

	cout << *p << " " <<p.unique() << endl;
	cout << p.use_count() << endl;
	auto q = p;
	cout << p.use_count() << endl;
	cout << *p << endl;
	return 0;
}
