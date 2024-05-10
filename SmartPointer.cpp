//#include <iostream>
//using namespace std;
//
//class A {
//public:
//    A() {
//        cout << "constructor" << endl;
//    }
//    ~A() {
//        cout << "destructor" << endl;
//    }
//    void operation() {
//        cout << "A operation" << endl;
//    }
//};
//class B {
//public:
//    B() {
//        cout << "constructor B" << endl;
//    }
//    ~B() {
//        cout << "destructor B" << endl;
//    }
//    void operation() {
//        cout << "B operation" << endl;
//    }
//};
//
//template<typename T>
//class SmartPointerOfTypeA {
//    T* ptr;
//public:
//    SmartPointerOfTypeA(T* ptrRef) : ptr{ ptrRef } {}
//    ~SmartPointerOfTypeA() {
//        delete ptr;
//    }
//    T* operator ->() {
//        return ptr;
//    }
//};
//
//void instantiate() {
//    SmartPointerOfTypeA<A> smartptr{ new A() };
//    SmartPointerOfTypeA<B> smartptr1{ new B() };
//    smartptr1->operation();
//    smartptr->operation();
//}
//
//int main() {
//    instantiate();
//}