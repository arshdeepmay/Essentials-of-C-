class Laptop {

public:
	Laptop(int a) {

	}
};
class HpLaptop :public Laptop {
public:
	HpLaptop() :Laptop::Laptop(10){

	}
};
class ZeLaptop {

};
class LenovoLaptop {

};
int main() {

	return 0;
}