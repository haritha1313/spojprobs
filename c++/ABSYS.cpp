#include <iostream>

int main() {
	int Eq_amount = 0;
	int a1 = 0, a2 = 0, a3 = 0;
	int i = 0;
	std::string str1, str2, str3;
	char ch, ch2;

	//Amount of equations to be solved
	std::cout << "Please enter the amount of equations to be solved" << std::endl;
	std::cin >> Eq_amount;

	//Solving Equation
	while(Eq_amount--) {
		int method = 0;

		std::cout << "insert Equation members include spacebar between members" << std::endl;
		std::cin >> str1 >> ch >> str2 >> ch2 >> str3;

		//check str1 for "m"
		while(str1[i] != '\0') {
			if(str1[i++] == 'm') {
				method = 1;
				break;
			}
		}

		//Whether Method 1 should be used
		if(method != 1) {
			a1 = stoi(str1);
			i = 0;
		}

		//check str2 for "m"
		while(str2[i] != '\0') {
			if(str2[i++] == 'm') {
				method = 2;
				break;
			}
		}

		//Whether method 2 should be used
		if(method != 2) {
			a2 = stoi(str2);
			i = 0;
		}

		//check str3 for "m"
		while(str3[i] != '\0') {
			if(str3[i++] == 'm') {
				method = 3;
				break;
			}
		}

		//Whether method 3 should be used
		if(method != 3) {
			a3 = stoi(str3);
			i = 0;
		}

		//Print out result
		switch(method)
		{
			case 1: 	std::cout << a3-a2 <<" + "<< a2 <<" = "<< a3 <<"\n";
				break;
			case 2: 	std::cout << a1 <<" + "<< a3-a1 <<" = "<< a3 <<"\n";
				break;
			case 3:		std::cout << a1 <<" + "<< a2 <<" = "<< a1+a2 <<"\n";
				break;
		}
	}

	return 0;
}