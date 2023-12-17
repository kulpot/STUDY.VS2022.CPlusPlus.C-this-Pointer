#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;

// --------------------------------- C++ this Pointer ----------------------------------------------------
// ref link:https://www.youtube.com/watch?v=I2-RmR7JRdc&list=PLRwVmtr-pp056ahRbFrYbeAnIu2qvXPFe&index=10

















// ----------------------------- C++ Unions --------------------------------------------
// ref link:https://www.youtube.com/watch?v=tW5baj_W14U&list=PLRwVmtr-pp056ahRbFrYbeAnIu2qvXPFe&index=9
// www.asciitable.com/index/asciifull.gif

union MyUnion
{
	short myShort;		// short 2bytes, char 1byte , float 32bits
	char myChar;
	float floatValue;
	unsigned int intValue;
};

void main()
{
	MyUnion myUnion;
	myUnion.intValue = 0x0000;
	cout << myUnion.floatValue << endl;

	myUnion.myShort = 0;			// 00 00
	//myUnion.myChar = 'j';			// 00 6A
	myUnion.myShort = 0x6b;			// 00 6B
	cout << myUnion.myShort << endl;
	cout << std::hex << myUnion.myShort << endl;
}


















// ------------------------------- C++ Enum Caveats -------------------------------
// ref link:https://www.youtube.com/watch?v=NeI6G_4Rkkw&list=PLRwVmtr-pp056ahRbFrYbeAnIu2qvXPFe&index=9



// case: track a certain animal

//const int SHEEP = 0;
//const int COW = 1;
//const int DONKEY = 2;
//const int FISH = 3;

//struct AnimalsEnum		// optional scoping issue: not suggested
//{
//	enum Animals
//	{
//		SHEEP,
//		COW,
//		DONKEY,
//		FISH,
//		//MAX
//		MAX_ANIMALS		// explicit
//	};
//};
//
//enum Animals
//{
//	SHEEP,
//	COW,
//	DONKEY,
//	FISH,
//	MAX
//	//MAX_ANIMALS		// explicit
//};
//
//enum CarManufacturers
//{
//	FORD,
//	HONDA,
//	TOYOTA,
//	//MAX
//	MAX_CAR_MANUFACTURERS		// explicit
//};
//
//void main()
//{
//	int i = Animals::SHEEP;
//	//for (int i = 0; i < Animals::MAX; i++)
//	//for (int i = 0; i < MAX; i++)
//	for(int i = 0; i < AnimalsEnum::Animals::MAX_ANIMALS; i++)
//	{
//
//	}

	//Animals a = Animals::FISH;
	//cout << COW << endl;
	//cout << a << endl;
	//int i = a;
	//cout << i << endl;
	//Animals b = static_cast<Animals>(i);
	//cout << b << endl;
	//
	//int myAnimal = DONKEY;
	//// ...
	//if (myAnimal == FISH)
	//{
	//
	//}
	//else if (myAnimal == DONKEY)
	//{
	//
	//}
	//else
	//{
	//
	//}
//}