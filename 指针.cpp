//#include<iostream>
//using namespace std;
//int main()
//{
//	//int updates = 6;
//	//cout << "updates values: " << updates << endl;
//	//cout << "updates address: " << &updates << endl;//��&����ʾȡ��ַ��
//	//int* p_updates;//����ָ�����p_updates���洢���ǵ�ַ������ָ��ָ��һ��int��ĵ�ַ��int*��һ����������
//	//p_updates = &updates;//��һ��int��ĵ�ַ��ֵ��ָ�룻
//	//cout << "p_updates values: " << *p_updates << endl;//��*����ʾȡֵ��������ã�����ȡ����Ϊ6��
//	//cout << "p_updates values: " << p_updates << endl;//����������ǵ�ַ����Ϊָ��洢���ǵ�ַ��
//	//*p_updates = *p_updates + 1;//���������ֵ�ַ����
//	//cout << *p_updates << " " << p_updates << endl;
//	//cout << updates << endl;
//	////Ҳ����˵*p_updates��updates�ȼۣ�ʹ��*p_updates��ʹ��int����һ��;p_updates��ָ�룬��*p_updates��int
//	////int*pt;
//	////pt=(int*)0xb8000000;//��Ч��ֵ��
//
//
//	////ʹ��new������ʱ�����ڴ� ��
//	
//	//int nights = 1001;
//	//cout << "nights value= " << nights << ": location ";
//	//cout << &nights << endl;
//	//int*pt=new int;
//	//*pt = 1001;
//	
//	
//	//ʹ��new������̬���飻
//	
//	////int* psome = new int[10];//ָ��ָ���׸�����ĵ�ַ��
//	////delete[] psome;//delete�ͷ�new�������ڴ棬��Ҫ�ͷ����Σ���new[]Ϊ��������ڴ�ʱ������ʹ��delete[]�ͷ��ڴ�
//	////ָ��[]�������Ӧ��Ԫ�أ��������ʾ���ƣ�
//	//double* p3=new double[3];
//	//p3[0] = 0.2;
//	//p3[1] = 0.5;
//	//p3[2] = 0.8;
//	//cout << "*p3= " << *p3 << endl;
//	//cout << "p3= " << p3 << endl;//��Ϊp3[0]�ĵ�ַ;
//	//cout << "p3[0]= " << p3[0] << endl;
//	//cout << "p3[1]= " << p3[1] << endl;
//	//cout << "address p3[0]= " << p3 << endl;
//	//cout << "address p3[1]= " << &p3[1] << endl;
//	//cout << "address p3[2]= " << &p3[2] << endl;
//	//p3 = p3 + 1;//��ַ��һ;
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
//	//ָ�������飻
//	double wages[3] = { 1000.0,2000.0,3000.0 };
//	short stacks[3] = { 3,2,1 };
//	double *pw = wages;//cppָ�뽫����������Ϊ����ĵ�һ��Ԫ�صĵ�ַ��
//	cout << "pw= " << pw << ", *pw= " << *pw << endl;
//	pw = pw + 1;
//	cout << "pw= " << pw << ", *pw= " << *pw << endl;
//
//	short* ps = &stacks[0];//��һ��Ԫ�صĵ�ַ����һ�ֱ�ʾ������
//	cout << "ps= " << ps << ", *ps= " << *ps << endl;
//	ps = ps + 1;
//	cout << "ps= " << ps << ", *ps= " << *ps << endl;
//
//	cout << "stack[0]= " << stacks[0] << endl;
//	cout << "stacks[1]= " << stacks[1] << endl;
//	cout << "stacks= " << stacks << "  " << "&stacks[0]= " << &stacks[0] << endl;//stacks����&stacks[0]
//	cout << "*(stacks+1)= " << *(stacks + 1) << endl;//������Ҳ���Ե���ָ�����ã�
//	return 0;
//}