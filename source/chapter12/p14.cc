#include <iostream>
using namespace std;

struct destination
{
	string ipaddr;
};

struct connection
{
	unsigned int status;
};

connection connect(destination*);
void disconnect(connection);

void end_connection(connection* c)
{
	cout << "connection status to -1" << endl;
	c->status = -1;
}


void f(destination &d)
{
	connection c = connect(&d);
	shared_ptr<connection> p(&c, end_connection);
	cout << c.status << endl;
}

connection connect(destination* d)
{
	cout << d->ipaddr << endl;
	connection k;
	k.status = 0;

	return k;
}

int main()
{
	destination d{"localhost"};
	f(d);
	return 0;
}

