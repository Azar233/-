//#include<iostream>
//#include<cstring>
//using namespace std;
//int main() 
//{
	//数组中使用字符串：使用char数组
	
	//const int size = 15;
	//char name1[size];
	//char name2[size] = "adison";
	//cout << "howdy!i'm" << name2<<endl;
	//cout << "what's your name?" << endl;
	//cin >> name1;
	//cout << "well," << name1 << ",your name has";
	//cout << strlen(name1)<<" letters and is stored in an arry of"<<sizeof(name1)<<" bytes."<<endl;
	//cout << "your initial is" << name1[0] << "." << endl;
	//name2[3] = '\0';
	//cout << "here are the first 3 characters of my name: " << name2 << endl;
	
	//字符串输入：cin将空白字符（space，enter）识别为终止
	
	//const int s = 20;
	//char name[s];
	//char dessert[s];
	//cout << "Enter your name: \n";
	//cin >> name;
	//cout << "Enter your favourate dessert:\n";
	//cin >> dessert;
	//cout << "Well,I have some " << dessert;
	//cout << " for you," << name << ".\n";

	//每次读取一行字符串输入：istream中的cin类提供了类成员函数：getline（）和get（）
	//1.面向行的输入：getline（），遇到回车换行符终止并丢弃换行符
	//cin.getline(arrayName,arraySize),字符数还包括一个空字符\0，因此读取的最大字符数arraySize-1
	
	//const int s = 20;
	//char name[s];
	//char dessert[s];
	//cout << "Enter your name:\n";
	//cin.getline(name, s);
	//cout << "Enter your favourate dessert:\n";
	//cin.getline(dessert, s);
	//cout << "Well,I have some " << dessert;
	//cout << " for you," << name << ".\n";

	//面向输入的get（）
	//cin.get()内容为空时，可以直接读取下一个字符；
	
	//const int s = 20;
	//char name[s];
	//char dessert[s];
	//cout << "Enter your name:\n";
	//cin.get(name, s).get();
	////cin.get();
	//cout << "Enter your favourate dessert:\n";
	//cin.getline(dessert, s);
	//cout << "Well,I have some " << dessert;
	//cout << " for you," << name << ".\n";

	//混合输入字符串和数字；
//	cout << "What year was your house built?" << endl;
//	int year;
//	cin >> year;
//	cin.get();
//	cout << "What is its street address?" << endl;
//	char address[80];
//	cin.getline(address, 80);
//	cout << "Year built: " << year << endl;
//	cout << "Address: " << address << endl;
//	cout << "Done!\n";
//
//
//	return 0;
//}