//#include<iostream>
//#include<string>
//using namespace std;
//
////C++ Interface //contract
//class IEmployee {
//public:
//	virtual void professional() = 0;
//};
//class IFamilyMember {
//public:
//	virtual void casualBehaviour() = 0;
//	virtual void cranky() = 0;
//};
//
////person fulfills(implements) IEmployee Contract
//class Person :public IEmployee, public IFamilyMember {
//public:
//	void casualBehaviour() {}
//	void professional() {}
//	void cranky() {}
//};
//
//class OfficeContext {
//public:
//	void Enter(IEmployee* obj) {
//		obj->professional();
//	}
//};
//
//class FamilyContext {
//public:
//	void Enter(IFamilyMember* obj) {
//		obj->cranky();
//		obj->casualBehaviour();
//	}
//};
//
//int main() {
//	Person tom;
//	FamilyContext fContext;
//	OfficeContext oContext;
//	fContext.Enter(&tom);
//	oContext.Enter(&tom);
//}















//#include<iostream>
//#include<string>
//using namespace std;
//
////interface --> this is a contract
//class IEmployee {                      // is acting as Base class for person
//    // but contains only pure virtual
//public:                           // so it's interface
//    virtual void professional() = 0;
//};
//
////interface --> this is a contract
//class IFamilyMember {                      // is acting as Base class for person
//    // but contains only pure virtual
//public:                           // so it's interface
//    virtual void casualBehaviour() = 0;
//};
//
////person fulfills (implements) IEmployee contract
//class person : public IEmployee, public IFamilyMember {   // class can implements multiple interface
//public:                                       // but this is not multiple inheritance
//    void casualBehaviour() { cout << "lets watch Tv" << endl; }
//    void professional() { cout << "professional" << endl; }
//    void cranky() {}
//
//};
//
//class OfficeContext {
//public:
//    void Enter(IEmployee* obj)
//    {
//        obj->professional();
//    }
//};
//
//class FamilyContext {
//public:
//    void Enter(IFamilyMember* obj)
//    {
//        obj->casualBehaviour();
//    }
//};
//
//int main() {
//
//    person riks;
//    FamilyContext fContext;
//    OfficeContext oContext;
//    fContext.Enter(&riks);
//    oContext.Enter(&riks);
//
//}