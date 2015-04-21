#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> interfaces;
	interfaces.push_back("eth0");
	interfaces.push_back("eth1");
	interfaces.push_back("eth2");
	interfaces.push_back("eth3");
	interfaces.push_back("eth4");
	interfaces.push_back("eth5");
	interfaces.push_back("eth6");

	for(auto interface : interfaces) {
		cout << interface << endl;
	}
	return 0;
}
