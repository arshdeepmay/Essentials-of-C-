//#include <string>
//#include <iostream>
//using namespace std;
//
////model means it represents data
//class LocationModel {
//private:
//	string name;
//	float coOrdinate;
//public:
//	static void dumpCounter() { // no this method here so it is called without an object.
//
//	}
//	string getName() {
//		return this->name;
//	}
//	void setName(string value) {
//		this->name = value;
//	}
//};
//class Converter {
//public:
//	void Convert(string filePath) {
//		//logic
//		//Read CSV file line by line
//		//Split each line 0 ","
//		//Represent Line Content
//		//Validate Line
//		//Create Xml Node
//		//Crete Xml tree
//		//Save Xml tree
//	}
//};
//int main() {
//	//Converter obj;
//	//obj.Convert("locations.csv");
//
//	//Stack Allocation
//	LocationModel obj;
//	obj.setName("BLR");
//	cout<<obj.getName()<<endl;
//	//Heap Allocation 
//	//object is in heap but pointer is in stack
//	LocationModel* ptr = new LocationModel();
//
//	ptr->setName("DEL");
//	cout << ptr->getName();
//
//	LocationModel::dumpCounter();
//	return 0;
//}