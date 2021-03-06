#include <iostream>
using namespace std;
class Drob
{
	private:
		int a;
		int b;

	public:
		Drob() : a(1), b(1) {//константные поля инициализируются только в конструкторе первым способом
		}
		//Drob(){
		//	a = 1; 
		//	b = 1;
		//}
		Drob(int a1, int b1) { 
			a = a1; 
			b = b1; 
		}
		void setA(int a1) { 
			a = a1; 
		}
		int getA() { 
			return a; 
		}
		void setB(int b1) { 
			b = b1; 
		}//прописать логику проверки валидации
		int getB() { 
			return b; 
		}
		Drob add(const Drob&);
		Drob dif(const Drob&);
};
//описание метода сложения 
Drob Drob::add(const Drob& obj)
{
	Drob d;
	d.a = a * obj.b + b * obj.a;
	d.b = b * obj.b;
	return d;
}
Drob Drob::dif(const Drob& obj){
	Drob d;
	d.a = a * obj.b - b * obj.a;
	d.b = b * obj.b;
	return d;
}
//////////////////////////////////////////////////////////////////////////
class PrintActionWithDrob
{
	//private: //не забывать ставить параметры по умолчанию, всегда нужно их инициализировать
		Drob d1;
		Drob d2;
		Drob d;
		char znak;
	public:
	PrintActionWithDrob(const Drob& D1, const Drob& D2){ 
		d1 = D1; 
		d2 = D2; 
	}
	void setD(Drob d1) { 
			d = d1; 
	}
	Drob getD() { 
		return d; 
	}
	void setZnak(char z) { 
			znak = z; 
	}
	char getZnak() { 
		return znak; 
	}
	void print();
};
void PrintActionWithDrob::print(){
	cout << d1.getA() << '/' << d1.getB() << znak << d2.getA() << '/' << d2.getB() 
     << '=' << d.getA() << '/' << d.getB() << endl;
}
//////////////////////////////////////////////////////////////////////////
void main(void)
{
	Drob drobA(3,5);
	Drob drobB(1,2);
	Drob drobAdd;
	Drob drobDiff;
	drobAdd = drobA.add(drobB);
	drobDiff = drobA.dif(drobB);
	PrintActionWithDrob printDrob(drobA, drobB);
	printDrob.setD(drobAdd);
	printDrob.setZnak('+');
	printDrob.print();
	printDrob.setD(drobDiff);
	printDrob.setZnak('-');
	printDrob.print();
	//PrintActionWithDrob printDrob1(drobA, drobB, drobDiff, '-');
	//printDrob1.print();
	system("pause");
}