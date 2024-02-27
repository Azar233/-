//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//int main()
//{
//	//string s(10, 'a');
//	//cout << s << endl;//十个重复的字符a；
//	
//	
//	
//	
//	
//	
//	
//	
//	//char charr1[20];
//	//char charr2[20] = "jaguar";
//	//string str1;
//	//string str2 = "panther";//c风格字符串初始化；
//	//cout << "Enter another kind of feline: ";
//	//cin >> charr1;
//	//cout << "Enter another kind of feline: ";
//	//cin >> str1;
//	//cout << "Here are some felines: \n";
//	//cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
//	//cout << "The third letter in" << charr2 << " is: " << charr2[2] << endl;
//	//cout << "The third letter in" << str2 << " is: " << str2[2] << endl;
//	////string对象和字符数组的使用在很多方面相同；
//	////区别是string对象声明为简单变量，而不是数组；
//
//	////赋值，拼接，附加；
//	////不能将数组赋值给另一个数组（数组本质是一个内存地址），但你可以将string对象赋给另一个string对象；
//	//string str1;
//	//string str2 = "fuck";
//	//str1 = str2;
//	////可以将string对象用+合并，也可以用+=加到末尾；
//	//
//	//string str3;
//	//str3 = str1 + str2;
//	//str1 += str2;
//	//cout << "" << str3 << endl;
//	//cout << "" << str1 << endl;
//	//cout << "s2=\"buzzard\"\n";//转义序列 \"表示双引号；
//	//str2 += " you";
//	//cout << "" << str2;
//	
//	//string类的其他操作；使用头文件ctring调用函数strcpy（）；
//
//	//char charr1[20];
//	//char charr2[20] = "jaguar";
//	//string str1;
//	//string str2 = "panther";
//	//str1 = str2;
//	//strcpy_s(charr1, charr2);//strcpy不安全，编译器会警报：假如charr2的元素超出charr1的数目；使用strcpy_s()函数；
//	//cout << str1 << " " << charr1 << endl;
//	//str1 += " paste";
//	//strcat_s(charr1, " juice");//同理用更安全的strcat_s()函数；
//	//cout << str1 << " " << charr1 << endl;
//	//strcat_s(charr1, charr2);
//	//cout << charr1 << endl;
//	//int len1 =str1.size();//string风格的字符串使用string类的成员方法size
//	//int len2 = strlen(charr1);//c风格字符串的长度使用strlen（）函数
//	//cout << "The string " << str1 << " contains " << len1 << " characters.\n";
//	//cout << "The string " << charr1 << " contains " << len2 << " characters.\n";
//	////str1是一个string对象，size（）是一个类方法；方法是函数，只能通过所属类的对象进行调用
//	////strlen（）是一个常规函数，只接受c风格字符串作为参数，并提供一个返回值；
//	////这二者句法不同，c函数使用参数，而c++string类对象使用对象名+句点运算；（算了，搞不懂，以后学函数和类了再说吧）
//	
//	//string类的I/O；
//	char charr[20];
//	string str;
//	cout << "Length of string in charr before input: " << strlen(charr) << endl;
//	cout << "Length of string in charr before input: " << str.size() << endl;
//	//未初始化的string对象长度自动被设置为0；string对象根据字符串的长度自动调节大小
//	//strlen（）找空字符\0去终止；
//	cout << "Enter a line of text: \n";
//	cin.getline(charr, 20);//cin是istream对象，getline是istream类方法；
//	cout << "You entered: " << charr << endl;
//	cout << "Enter a line of text: \n";
//	getline(cin, str);//这里getline不是类方法，而是常规函数
//	cout << "You entered: " << str << endl;
//	cout << "Length of string in charr before input: " << strlen(charr) << endl;
//	cout << "Length of string in charr before input: " << str.size() << endl;
//
//	
//	
//	
//	return 0;
//}