//#include<iostream>
//#include<cstring>
//using namespace std;
//int main() 
//{
	//������ʹ���ַ�����ʹ��char����
	
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
	
	//�ַ������룺cin���հ��ַ���space��enter��ʶ��Ϊ��ֹ
	
	//const int s = 20;
	//char name[s];
	//char dessert[s];
	//cout << "Enter your name: \n";
	//cin >> name;
	//cout << "Enter your favourate dessert:\n";
	//cin >> dessert;
	//cout << "Well,I have some " << dessert;
	//cout << " for you," << name << ".\n";

	//ÿ�ζ�ȡһ���ַ������룺istream�е�cin���ṩ�����Ա������getline������get����
	//1.�����е����룺getline�����������س����з���ֹ���������з�
	//cin.getline(arrayName,arraySize),�ַ���������һ�����ַ�\0����˶�ȡ������ַ���arraySize-1
	
	//const int s = 20;
	//char name[s];
	//char dessert[s];
	//cout << "Enter your name:\n";
	//cin.getline(name, s);
	//cout << "Enter your favourate dessert:\n";
	//cin.getline(dessert, s);
	//cout << "Well,I have some " << dessert;
	//cout << " for you," << name << ".\n";

	//���������get����
	//cin.get()����Ϊ��ʱ������ֱ�Ӷ�ȡ��һ���ַ���
	
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

	//��������ַ��������֣�
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