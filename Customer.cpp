#include<string>
using namespace std;
class Customer {
private:
	string name, address, pan, aadhar, emailId, contactNumber;

public:
	Customer(string nameArg,
		string addressArg,
		string panArg,
		string aadharArg
	) :name{ nameArg }, address{ addressArg }, pan{ panArg }, aadhar{ aadharArg } {

	}
	Customer(string nameArg,
		string addressArg,
		string panArg,
		string aadharArg,
		string contactNumberArg
	) :name{ nameArg }, address{ addressArg }, pan{ panArg },
		aadhar{ aadharArg }, contactNumber{ contactNumberArg } {

	}
	/*Customer(string nameArg,
		string addressArg,
		string panArg,
		string aadharArg,
		string emailIdArg
	) :name{ nameArg }, address{ addressArg }, pan{ panArg },
		aadhar{ aadharArg }, emailId{ emailIdArg } {

	}*/
	Customer(string nameArg,
		string addressArg,
		string panArg,
		string aadharArg,
		string contactNumberArg,
		string emailIdArg
	) :name{ nameArg }, address{ addressArg }, pan{ panArg },
		aadhar{ aadharArg }, contactNumber{ contactNumberArg }, emailId{ emailIdArg } {

	}
};
int main() {

	Customer obj1("tom", "BLR", "nmsjdj78", "23424232");
	Customer obj2{ "tom", "BLR", "nmsjdj78", "23424232" ,"5684521156"};
	Customer obj3{ "tom", "BLR", "nmsjdj78", "23424232" ,"5684521156" ,"abc@gmail.com" };

	return 0;
}