//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//int main()
//{
//	//string s(10, 'a');
//	//cout << s << endl;//ʮ���ظ����ַ�a��
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
//	//string str2 = "panther";//c����ַ�����ʼ����
//	//cout << "Enter another kind of feline: ";
//	//cin >> charr1;
//	//cout << "Enter another kind of feline: ";
//	//cin >> str1;
//	//cout << "Here are some felines: \n";
//	//cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
//	//cout << "The third letter in" << charr2 << " is: " << charr2[2] << endl;
//	//cout << "The third letter in" << str2 << " is: " << str2[2] << endl;
//	////string������ַ������ʹ���ںܶ෽����ͬ��
//	////������string��������Ϊ�򵥱��������������飻
//
//	////��ֵ��ƴ�ӣ����ӣ�
//	////���ܽ����鸳ֵ����һ�����飨���鱾����һ���ڴ��ַ����������Խ�string���󸳸���һ��string����
//	//string str1;
//	//string str2 = "fuck";
//	//str1 = str2;
//	////���Խ�string������+�ϲ���Ҳ������+=�ӵ�ĩβ��
//	//
//	//string str3;
//	//str3 = str1 + str2;
//	//str1 += str2;
//	//cout << "" << str3 << endl;
//	//cout << "" << str1 << endl;
//	//cout << "s2=\"buzzard\"\n";//ת������ \"��ʾ˫���ţ�
//	//str2 += " you";
//	//cout << "" << str2;
//	
//	//string�������������ʹ��ͷ�ļ�ctring���ú���strcpy������
//
//	//char charr1[20];
//	//char charr2[20] = "jaguar";
//	//string str1;
//	//string str2 = "panther";
//	//str1 = str2;
//	//strcpy_s(charr1, charr2);//strcpy����ȫ���������ᾯ��������charr2��Ԫ�س���charr1����Ŀ��ʹ��strcpy_s()������
//	//cout << str1 << " " << charr1 << endl;
//	//str1 += " paste";
//	//strcat_s(charr1, " juice");//ͬ���ø���ȫ��strcat_s()������
//	//cout << str1 << " " << charr1 << endl;
//	//strcat_s(charr1, charr2);
//	//cout << charr1 << endl;
//	//int len1 =str1.size();//string�����ַ���ʹ��string��ĳ�Ա����size
//	//int len2 = strlen(charr1);//c����ַ����ĳ���ʹ��strlen��������
//	//cout << "The string " << str1 << " contains " << len1 << " characters.\n";
//	//cout << "The string " << charr1 << " contains " << len2 << " characters.\n";
//	////str1��һ��string����size������һ���෽���������Ǻ�����ֻ��ͨ��������Ķ�����е���
//	////strlen������һ�����溯����ֻ����c����ַ�����Ϊ���������ṩһ������ֵ��
//	////����߾䷨��ͬ��c����ʹ�ò�������c++string�����ʹ�ö�����+������㣻�����ˣ��㲻�����Ժ�ѧ������������˵�ɣ�
//	
//	//string���I/O��
//	char charr[20];
//	string str;
//	cout << "Length of string in charr before input: " << strlen(charr) << endl;
//	cout << "Length of string in charr before input: " << str.size() << endl;
//	//δ��ʼ����string���󳤶��Զ�������Ϊ0��string��������ַ����ĳ����Զ����ڴ�С
//	//strlen�����ҿ��ַ�\0ȥ��ֹ��
//	cout << "Enter a line of text: \n";
//	cin.getline(charr, 20);//cin��istream����getline��istream�෽����
//	cout << "You entered: " << charr << endl;
//	cout << "Enter a line of text: \n";
//	getline(cin, str);//����getline�����෽�������ǳ��溯��
//	cout << "You entered: " << str << endl;
//	cout << "Length of string in charr before input: " << strlen(charr) << endl;
//	cout << "Length of string in charr before input: " << str.size() << endl;
//
//	
//	
//	
//	return 0;
//}