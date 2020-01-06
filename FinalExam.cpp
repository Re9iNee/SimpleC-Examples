#include "iostream"
#include <Math.h>
#include <string>

using namespace std;
int main(){
		//barname E benvisid ke reshte E ra az vurudi daryaft kone va bege chand ta A chand ta B chand ta C dare va mabaghi ro ham tedadeshun ra bege
	//2:
//	while(1){
//	char exit = 'n';
//	string input;
//	cin >> input;
//	int As = 0, Bs = 0, Cs = 0, Others = 0;
//	for(int index = 0; index < input.length(); index++){
//		switch(input[index]){
//			case 'A':{
//				As++;
//				break;
//			}
//			case 'a':{
//				As++;
//				break;
//			}
//			case 'B':{
//				Bs++;
//				break;
//			}
//			case 'b':{
//				Bs++;
//				break;
//			}
//			case 'C':{
//				Cs++;
//				break;
//			}
//			case 'c':{
//				Cs++;
//				break;
//			}
//			default:{
//				Others++;
//				break;
//			}
//		}
//	}
//	cout << "A's: " << As << endl << "B's: " << Bs << endl << "C's: " << Cs << endl << "Others: "<< Others << endl;
//	cout << "Exit? (y/n)   ";
//	cin >> exit;
//	if (exit == 'y') break;
//	}
	//1
		//barname E benvisid ke tamame adad e aval char raghami ra chap kone.
	//zoj nabashe
	//baghimande taghsime un adad bar hame adade nesfe un sefr nashe
	//range [1000, 9999]
	for(int number = 1000; number <= 9999; number++){
		bool isPure = true;
		if (number % 2 == 0) continue;
		for (int j = 3; j <= number / 2; j++){
			if (number % j == 0){
				isPure = false;
				break;
			}
		}
		if (isPure) cout << number << endl;
	}

	system("color C");
	cout << endl;
	system("pause");
}

	
