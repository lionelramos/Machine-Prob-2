#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

char shape, a;
double pi = 3.14, radiusc, heightc, lengthp, widthp, heightp, radiuss;
bool userquit = false;

int main()
{
	
	cout << "C is for Cone\n" << "P is for Pyramid\n" << "S is for Sphere\n";
	cout << "\nType the letter of Geometric Shape: ";
	cin >> shape;

	if (shape == 'C' || shape == 'c')
	{
		cout << "Radius: ";
		cin >> radiusc;
		cout << "Height: ";
		cin >> heightc;
		cout << "Volume = " << (pi * radiusc * radiusc * heightc) / 3 << endl;
		cout << "Lateral Area = " << (pi * radiusc) * sqrt((heightc * heightc)+(radiusc * radiusc)) << endl;
		cout << "Base Area = " << pi * radiusc * radiusc << endl;
		cout << "Surface Area = " << (pi * radiusc) * (radiusc + sqrt((heightc * heightc)+(radiusc * radiusc))) << endl;
	}
	else if (shape == 'P' || shape == 'p') {
		cout << "Length: ";
		cin >> lengthp;
		cout << "Width: ";
		cin >> widthp;
		cout << "Height: ";
		cin >> heightp;
		cout << "Volume =" << (lengthp * widthp * heightp) / 3 << endl;
		cout << "Lateral Area = " << (lengthp * sqrt((heightp * heightp) + (widthp / 2 * widthp / 2))) + (widthp * sqrt((heightp * heightp) + (lengthp / 2 * lengthp / 2))) << endl;
		cout << "Base Area = " << lengthp * widthp << endl;
		cout << "Surface Area = " << (lengthp * widthp) + (lengthp * sqrt((heightp * heightp) + (widthp / 2 * widthp / 2))) + (widthp * sqrt((heightp * heightp) + (lengthp / 2 * lengthp / 2))) << endl;
	}
	else if (shape == 'S' || shape == 's') {
		cout << "Radius: ";
		cin >> radiuss;
		cout << "Volume = " << (4 * pi * radiuss * radiuss* radiuss) / 3 << endl;
		cout << "Surface Area = " << (4 * pi * radiuss * radiuss) << endl;
	}
	else if (shape != 'C' && shape != 'c' && shape != 'P' && shape != 'p' && shape != 'S' && shape != 's') {
		cout << "\nIncorrect Input!";
		userquit = true;
	}


	do {
		if (shape != 'C' && shape != 'c' && shape != 'P' && shape != 'p' && shape != 'S' && shape != 's') {
			userquit = true;
		}
		else {
			cout << "\nSolve Again? (Y/N): ";
			cin >> a;

			if (a == 'Y' || a == 'y'){
				cout << "\nType the letter of Geometric Shape: ";
				cin >> shape;
			
				if (shape == 'C' || shape == 'c')
				{
					cout << "Radius: ";
					cin >> radiusc;
					cout << "Height: ";
					cin >> heightc;
					cout << "Volume = " << (pi * radiusc * radiusc * heightc) / 3 << endl;
					cout << "Lateral Area = " << (pi * radiusc) * sqrt((heightc * heightc) + (radiusc * radiusc)) << endl;
					cout << "Base Area = " << pi * radiusc * radiusc << endl;
					cout << "Surface Area = " << (pi * radiusc) * (radiusc + sqrt((heightc * heightc) + (radiusc * radiusc))) << endl;
				}
				else if (shape == 'P' || shape == 'p') {
					cout << "Length: ";
					cin >> lengthp;
					cout << "Width: ";
					cin >> widthp;
					cout << "Height: ";
					cin >> heightp;
					cout << "Volume =" << (lengthp * widthp * heightp) / 3 << endl;
					cout << "Lateral Area = " << (lengthp * sqrt((heightp * heightp) + (widthp / 2 * widthp / 2))) + (widthp * sqrt((heightp * heightp) + (lengthp / 2 * lengthp / 2))) << endl;
					cout << "Base Area = " << lengthp * widthp << endl;
					cout << "Surface Area = " << (lengthp * widthp) + (lengthp * sqrt((heightp * heightp) + (widthp / 2 * widthp / 2))) + (widthp * sqrt((heightp * heightp) + (lengthp / 2 * lengthp / 2))) << endl;
				}
				else if (shape == 'S' || shape == 's') {
					cout << "Radius: ";
					cin >> radiuss;
					cout << "Volume = " << (4 * pi * radiuss * radiuss * radiuss) / 3 << endl;
					cout << "Surface Area = " << (4 * pi * radiuss * radiuss) << endl;
				}
				else if (shape != 'C' && shape != 'c' && shape != 'P' && shape != 'p' && shape != 'S' && shape != 's') 
				{
					cout << "\nIncorrect Input!";
					userquit = true;
				}
			}
			else if (a == 'N' || a == 'n') 
			{
				cout << "\nThank you!";
				userquit = true;
			}
			else if (a != 'Y' && a != 'y' && a != 'N' && a != 'n') 
			{
				cout << "\nIncorrect Input!";
				userquit = true;
			}


		}



	}while (!userquit);
		
	_getch();
	return 0;
}
