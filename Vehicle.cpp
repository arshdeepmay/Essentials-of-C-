//#include<iostream>
//#include<string>
//using namespace std;
//class Vehicle {
//private:
//	string regNumber;
//	string name;
//public:
//	virtual void start() { cout << "Key Start" << endl; }
//	virtual void stop() { cout << "Key stop" << endl; }
//
//	virtual void drive() = 0;
//
//};
//class Car:public Vehicle{
//public:
//	void stop() override { cout << "Push button stop" << endl; }
//	void start() override { cout << "Push button start" << endl; }
//	void drive() {
//		cout << "Front Wheel Drive" << endl;
//	}
//
//};
//
//class Truck:public Vehicle{
//public:
//	void drive() {
//		cout << "Rear Wheel Drive" << endl;
//	}
//};
//
//class VehicleSimulator {
//	Vehicle* v;
//public:
//	VehicleSimulator(Vehicle *vArg): v{vArg}{}
//	void start() { v->start(); }
//	void stop() { v->stop(); }
//};
//int main() {
//
//	Car vehicle;
//	VehicleSimulator(vehicle);
//
//	return 0;
//}
//
