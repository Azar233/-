//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	//int i;
//	//for (i = 0;i < 5;i++)//��㣬�յ�Ͳ������£�i++��Ϊi=i+1��
//	//{
//	//	cout << "i love u." << endl;//forѭ������ִ�еĲ�����
//	//}
//
//	//limit����ʱ��
//	/*int limit;
//	cin >> limit;
//	int i;
//	for (i = limit;i>0; i--)
//	{
//		cout << " " << i << endl;
//	}*/
//
//	//int x = 100;
//	//cout << "The expression x<3 has the value ";
//	//cout << (x < 3) << endl;//<<��������ȼ��ȷ�������ߣ�ֱ�������ֵ����boolֵ01��
//	//cout << "The expression x>3 has the value ";
//	//cout << (x > 3) << endl;
//	//
//	//cout.setf(ios_base::boolalpha);//cout�ĳ�Ա����������true,false;
//	//cout << "The expression x<3 has the value ";
//	//cout << (x < 3) << endl;
//	//cout << "The expression x>3 has the value ";
//	//cout << (x > 3) << endl;
//
//
//	////forѭ��������ӡ�׳˵�ֵ��
//	//const int t = 16;
//	//long long a[t];
//	//a[1] = a[0] = 1;
//	//for (int i = 2; i < t; i++)
//	//{
//	//	a[i] = a[i - 1] * i;
//
//	//}
//	//for (int i = 0; i < t; i++)
//	//{
//	//	cout << i << "!= " << a[i] << endl;
//	//}
//
//
//	////�޸Ĳ�����
//	//cout << "Enter an integer: " << endl;
//	//int by;
//	//cin >> by;
//	//cout << "Counting by " << by << "s " << endl;
//	//for (int i = 0;i < 100;i=i+by)
//	//{
//	//	cout << i << endl;
//	//}
//	
//
//	////forѭ�����η����ַ�����
//	////how to reverse words;
//	//cout << "Enter a word: " << endl;
//	//string word;
//	//cin >> word;
//	////ͨ������ÿ��Ԫ�صı�Ž��з�ת��
//	//for (int i = word.size() - 1;i >= 0;i--)
//	//{
//	//	cout << word[i];
//	//}
//
//	////ǰ��׺���������������
//	//// //a++���Ƚ���ȡֵ�������������++a���Ƚ��������������ȡֵ��
//	//int a = 20;
//	//int b = 20;
//	//cout << "a= " << a << "; b= " << b << endl;
//	//cout << "a++= " << a++ << "; ++b= " << ++b << endl;
//	//cout << "a= " << a << "; b= " << b << endl;
//	//int c = 20;
//	//cout << "(c++)+(++c)= " << (c++) + (++c) << endl;
//	////���ȣ�������������ȼ��������ȿ������ڣ�
//	//// c++��ȡֵ�õ�20��Ȼ��c����Ϊ21��++c��c=21����Ϊ22��Ȼ��ȡֵΪ22��
//	////�������ȡֵ�Ľ��20+22=42��
//	//int d = 20;
//	//int e = d++;
//	//cout << "e= " << e << "; d= " << d;
//	////������Կ�����d++��ȡֵ20��ֵ��int��e������e=20��Ȼ��d������Ϊd=21��
//
//	////����/�ݼ��������ָ�룻
//	//double arr[5] = { 21.1,32.8,23.4,45.2,37.4 };
//	//double* pt = arr;
//	//cout << "*pt = " << *pt << endl;
//	//cout << "*++pt = " << *++pt << endl;//��++���͡�*�����ȼ���ͬ�������������У�
//	//cout << "++*pt = " << ++*pt << endl;
//	//cout << "(*pt)++ = " << (*pt)++ << endl;//��׺������ȡֵ��
//	//cout << "*pt = " << *pt << endl;//��ʱ���������33.8+1=34.8��
//	//cout << "*pt++ = " << *pt++ << endl;//��ʱ�ȶ�pt����׺����������ȡpt�ĵ�ַ��Ȼ������ã�
//	//cout << "*pt = " << *pt << endl;//ע�⵽����һ��pt�ĵ�ַ�Ѿ������ˣ�������������ú�����һλ23.4��
//
//
//	////��ϸ�ֵ�������
//	////a+=b�ȼ���a=a+b;
//	//int k = 5;
//	//k += 3;
//	//cout << "k= " << k << endl;
//    //   int* pa = new int[10];
//	//pa[4] = 12;
//	//pa[4] += 6;
//	//cout << "pa[4]= " << pa[4] << endl;
//	//*(pa + 4) += 7;
//	//cout << "pa[4]= " << pa[4] << endl;
//	//k *= 10;//��+=ͬ��
//	//cout << "k= " << k << endl;
//
//    
//
//    //cout << "pls enter five numbers: " << endl;
//	//double number;
//	//double sum=0.0;
//	//for (int i = 1;i <= 5;i++)
//	//{
//	//	cout << "Value " << i << ": " ;
//	//	cin >> number;
//	//	sum += number;
//	//}
//	//cout << "The sum of them is: " << sum << endl;
//	//cout << "The average is: " << sum / 5 << endl;
//
//
//
//
//
//
//
//
//
//	return 0;
//}