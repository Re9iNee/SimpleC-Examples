#include "iostream"
#include <Math.h>
#define PI 3.14
using namespace std;
int main (){
	//barname E benvisid ke khuruji zir ra chap konad: ++a * b--
//	int a = 9;
//	int b = 8;
//	cout << ++a * b-- << endl;
//	cout << a * b;
	
//	a = 3;
//	cout << endl << a * ++a;
//	a = 3;
//	cout << endl << a * a++;


//int a = 2;
//int b = 2;
//cout << (a == b);


//bool  a = 4;
//bool b = 0;
//cout << (a && b);

//int a, b;
//a = 7;
//b = 6;
//cout << (a & b);




	//barname E benvisid ke shoa e dayere ro daryaft kone va masahatesho hesab kone.
//int radius;
//cin >> radius;
//cout << radius * radius * PI;

//yad dasht: 
//int x = 40;
//char y;
//y = (x > 25) ? 'A' : 'B';
//cout << y;


	//barname E benvisid ke shoa e dayere ro daryaft kone va masahatesho hesab kone.
//int a, b;
//cout << "Enter First Number: ";
//cin >> a;
//cout <<endl;
//cout << "Enter Second Number: ";
//cin >> b;
//cout <<endl;
//
//char y = (a > b) ? 'T' : 'F';
//cout << y;


//yad dasht: 
//cout << pow(3,2) << endl;
//cout << fmod(7,4) << endl;
//cout << fabs(-3.5) << endl; //same as abs
//cout << floor(3.1) << endl;
//cout << ceil(3.1) <<endl;
//cout << log(2.7) << endl;
//cout << log10(100) << endl;
//cout << "tolower('A'): "<< tolower('A') <<endl;
//cout << "toupper('a'): "<<toupper('a') << endl;
//cout << "islower('a'): "<< islower('a') << endl;
//cout << "isupper('B'): "<< isupper('B') << endl;


	//barname E benvisi ke yek adad ra az vurudi daryaft agar bozorg tar az sefr bud mosbat ra chap konad, vagarna manfi ro chap kone
//int a;
//cin >> a;
//if (a >= 0){
//	cout << "+";
//}else {
//	cout << "-";
//}





	//barname E benvisid ke 3 adad ra az vurudi daryaft va kuchik tarin e anha ro moshakhas konad
//int a[3];
//cin >> a[0] >> a[1] >> a[2];
//for (int i = 0; i < 3; i++){
//	if (a[i] < result ){
//		result = a[i];
//	}
//}
//cout << result;

	//barname E benvisid ke 2 adad az vurudi daryaft karde, va be tartibe sudi chap konad, ba taviz e jaye moteghayer ha
//int a, b;
//cin >> a >> b;
//if (a > b){
//	a = a + b;
//	b = a - b;
//	a = a - b;
//}
//cout << a <<"     "<< b;

	//barname E benvisid ke nomre daneshju ra gerefte bar asase nomre be shoma rotbe bede, agar beyne 18-20 -> A, 15-18 -> B, 12 - 15 ->
//int score;
//cin >> score;
//if (20 >= score && score > 18)
//	cout << "A";
//else if (18 >= score && score > 15)
//	cout << "B";
//else if (15 >= score && score> 12)
//	cout << "C";
//else 
//	cout << "D";



	//barname E benvisid ke ba vared kardane character adadi ruze hafte ro chap konad, 0 => shanbe, 1 => doshanbe, ...
while (1){
	int input;
	cin >> input;
switch(input){
	case(0):{
		cout << "Saturday";
		break;
	}
	case(1):{
		cout << "Sunday";
		break;
	}
	case(2):{
		cout << "Monday";
		break;
	}
	case(3):{
		cout << "Tuesday";
		break;
	}
	case(4):{
		cout << "Wednesday";
		break;
	}
	case(5):{
		cout << "Thursday";
		break;
	}
	case(6):{
		cout << "Friday";
		break;
	}
	default:{
		cout << "WRONG INPUT TRY AGAIN";
		break;
	}
}
cout << endl;
}

//javabe dg: 
// char weekDays = ['Sat', 'Sun', 'Mon', 'Tue', 'Wed', 'Thur', 'Fri'];
// while(1){
// 	int input;
// 	cin >> input;
// 	cout << weekDays[input];
// }



system("color C");
cout << endl;
system("pause");
}
