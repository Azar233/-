//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//struct inflatable//声明定义结构体inflatable，name volume price都是其成员；
//{
//	char name[20];//string name也可以
//	float volume;
//	double price;
//};
////结构声明的位置：这里是外部声明，用于main（）函数外面，外部声明可以被其他的函数使用；
////而内部声明只能被该函数使用，在这里我们只有main（）函数，所以没有影响
//int main()
//{
//	//inflatable guest =
//	//{
//	//	"Glorious Gloria",
//	//	1.88,
//	//	29.99
//	//};//初始化类型和数组一样 int array={1，2，3}
//
//	//inflatable pal =
//	//{
//	//	"Audacious Arthur",
//	//	3.12,
//	//	32.99
//	//};
//	//cout << "Expand your guest list with " << guest.name;//（.）成员运算符，调用结构里的成员，这里guest.name就相当于一个char数组
//	//cout << " and " << pal.name <<"."<< endl;
//	//cout << "You can have both for $";
//	//cout << guest.price + pal.price << "!\n";
//
//	//inflatable azure =
//	//{
//	//	"flower",
//	//	0.20,
//	//	12.49
//	//};
//	//cout << "azure: " << azure.name << " for $ ";
//	//cout << azure.price << endl;
//	//inflatable choice = azure;//拷贝结构；
//	//cout << "choice:" << choice.name << " for $ ";
//	//cout << choice.price << endl;
//
//	//结构数组；
//	inflatable guest[2] =
//	{
//		{"Bambo",0.5,21.99},//guest[0]
//		{"Godzilla",2000,565.99}//guest[1]
//	};
//	cout << guest[0].name << " " << guest[1].name << endl;
//	cout << guest[0].volume + guest[1].volume;
//	return 0;
//}