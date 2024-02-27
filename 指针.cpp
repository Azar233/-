//#include<iostream>
//using namespace std;
//int main()
//{
//	//int updates = 6;
//	//cout << "updates values: " << updates << endl;
//	//cout << "updates address: " << &updates << endl;//（&）表示取地址；
//	//int* p_updates;//定义指针变量p_updates，存储的是地址；这里指针指向一个int类的地址；int*是一个复合类型
//	//p_updates = &updates;//将一个int类的地址赋值给指针；
//	//cout << "p_updates values: " << *p_updates << endl;//（*）表示取值（解除引用），即取出来为6；
//	//cout << "p_updates values: " << p_updates << endl;//这里输出的是地址，因为指针存储的是地址；
//	//*p_updates = *p_updates + 1;//输出结果发现地址不变
//	//cout << *p_updates << " " << p_updates << endl;
//	//cout << updates << endl;
//	////也就是说*p_updates和updates等价，使用*p_updates跟使用int变量一样;p_updates是指针，而*p_updates是int
//	////int*pt;
//	////pt=(int*)0xb8000000;//有效赋值；
//
//
//	////使用new在运行时分配内存 ；
//	
//	//int nights = 1001;
//	//cout << "nights value= " << nights << ": location ";
//	//cout << &nights << endl;
//	//int*pt=new int;
//	//*pt = 1001;
//	
//	
//	//使用new创建动态数组；
//	
//	////int* psome = new int[10];//指针指向首个数组的地址；
//	////delete[] psome;//delete释放new建立的内存，不要释放两次，用new[]为数组分配内存时，配套使用delete[]释放内存
//	////指针[]来代表对应的元素，跟数组表示类似；
//	//double* p3=new double[3];
//	//p3[0] = 0.2;
//	//p3[1] = 0.5;
//	//p3[2] = 0.8;
//	//cout << "*p3= " << *p3 << endl;
//	//cout << "p3= " << p3 << endl;//此为p3[0]的地址;
//	//cout << "p3[0]= " << p3[0] << endl;
//	//cout << "p3[1]= " << p3[1] << endl;
//	//cout << "address p3[0]= " << p3 << endl;
//	//cout << "address p3[1]= " << &p3[1] << endl;
//	//cout << "address p3[2]= " << &p3[2] << endl;
//	//p3 = p3 + 1;//地址加一;
//	//cout << "p3[1]= " << p3[1] << endl;
//	//cout << "address p3[0]= " << p3 << endl;
//	//cout << "address p3[1]= " << &p3[1] << endl;
//	//cout << "address p3[2]= " << &p3[2] << endl; 
//	//p3 = p3 - 1;
//	//cout << "p3[1]= " << p3[1] << endl;
//	//cout << "p3[2]= " << p3[2] << endl;
//	//cout << "address p3[0]= " << p3 << endl;
//	//cout << "address p3[1]= " << &p3[1] << endl;
//	//cout << "address p3[2]= " << &p3[2] << endl;
//
//	//指针与数组；
//	double wages[3] = { 1000.0,2000.0,3000.0 };
//	short stacks[3] = { 3,2,1 };
//	double *pw = wages;//cpp指针将数组名解释为数组的第一个元素的地址；
//	cout << "pw= " << pw << ", *pw= " << *pw << endl;
//	pw = pw + 1;
//	cout << "pw= " << pw << ", *pw= " << *pw << endl;
//
//	short* ps = &stacks[0];//第一个元素的地址的另一种表示方法；
//	cout << "ps= " << ps << ", *ps= " << *ps << endl;
//	ps = ps + 1;
//	cout << "ps= " << ps << ", *ps= " << *ps << endl;
//
//	cout << "stack[0]= " << stacks[0] << endl;
//	cout << "stacks[1]= " << stacks[1] << endl;
//	cout << "stacks= " << stacks << "  " << "&stacks[0]= " << &stacks[0] << endl;//stacks就是&stacks[0]
//	cout << "*(stacks+1)= " << *(stacks + 1) << endl;//数组名也可以当作指针来用；
//	return 0;
//}