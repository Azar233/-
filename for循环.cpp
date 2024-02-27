//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	//int i;
//	//for (i = 0;i < 5;i++)//起点，终点和步长更新；i++即为i=i+1；
//	//{
//	//	cout << "i love u." << endl;//for循环内所执行的操作；
//	//}
//
//	//limit倒计时；
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
//	//cout << (x < 3) << endl;//<<运算符优先级比符号运算高，直接输出数值或者bool值01；
//	//cout << "The expression x>3 has the value ";
//	//cout << (x > 3) << endl;
//	//
//	//cout.setf(ios_base::boolalpha);//cout的成员运算符，输出true,false;
//	//cout << "The expression x<3 has the value ";
//	//cout << (x < 3) << endl;
//	//cout << "The expression x>3 has the value ";
//	//cout << (x > 3) << endl;
//
//
//	////for循环连续打印阶乘的值；
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
//	////修改步长；
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
//	////for循环依次访问字符串；
//	////how to reverse words;
//	//cout << "Enter a word: " << endl;
//	//string word;
//	//cin >> word;
//	////通过数组每个元素的编号进行反转；
//	//for (int i = word.size() - 1;i >= 0;i--)
//	//{
//	//	cout << word[i];
//	//}
//
//	////前后缀自增运算符的区别；
//	//// //a++是先进行取值，后进行自增。++a是先进行自增，后进行取值。
//	//int a = 20;
//	//int b = 20;
//	//cout << "a= " << a << "; b= " << b << endl;
//	//cout << "a++= " << a++ << "; ++b= " << ++b << endl;
//	//cout << "a= " << a << "; b= " << b << endl;
//	//int c = 20;
//	//cout << "(c++)+(++c)= " << (c++) + (++c) << endl;
//	////首先，（）运算的优先级，我们先看（）内；
//	//// c++先取值得到20，然后c自增为21；++c从c=21自增为22，然后取值为22；
//	////最后两个取值的结果20+22=42；
//	//int d = 20;
//	//int e = d++;
//	//cout << "e= " << e << "; d= " << d;
//	////这里可以看出来d++先取值20赋值给int型e，所以e=20；然后d再自增为d=21；
//
//	////递增/递减运算符和指针；
//	//double arr[5] = { 21.1,32.8,23.4,45.2,37.4 };
//	//double* pt = arr;
//	//cout << "*pt = " << *pt << endl;
//	//cout << "*++pt = " << *++pt << endl;//“++”和“*”优先级相同，从右至左运行；
//	//cout << "++*pt = " << ++*pt << endl;
//	//cout << "(*pt)++ = " << (*pt)++ << endl;//后缀自增先取值；
//	//cout << "*pt = " << *pt << endl;//此时再输出就是33.8+1=34.8；
//	//cout << "*pt++ = " << *pt++ << endl;//此时先对pt做后缀自增，故先取pt的地址，然后解引用；
//	//cout << "*pt = " << *pt << endl;//注意到上面一步pt的地址已经自增了，所以这里解引用后是下一位23.4；
//
//
//	////组合赋值运算符；
//	////a+=b等价于a=a+b;
//	//int k = 5;
//	//k += 3;
//	//cout << "k= " << k << endl;
//    //   int* pa = new int[10];
//	//pa[4] = 12;
//	//pa[4] += 6;
//	//cout << "pa[4]= " << pa[4] << endl;
//	//*(pa + 4) += 7;
//	//cout << "pa[4]= " << pa[4] << endl;
//	//k *= 10;//和+=同理；
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