#include <iostream>
using namespace std;


bool isPrime(int x) {
	int y = x / 2;
	for (int i = 2; i <= y; i++) {
		if (x % i == 0) {
			return false;
		}
	}
}

int main() {
	int x;
	cout << "Prime checker!\n\nEnter a whole number: ";
	cin >> x;
	if (isPrime(x)) {
		cout << "That number is prime!";
	}
	else {
		cout << "That number is not prime. :(";
	}

	return 0;
}

//#include <iostream>  
//using namespace std;
//int main()
//{
//    int n, i, m = 0, flag = 0;
//    cout << "Enter the Number to check Prime: ";
//    cin >> n;
//    m = n / 2;
//    for (i = 2; i <= m; i++)
//    {
//        if (n % i == 0)
//        {
//            cout << "Number is not Prime." << endl;
//            flag = 1;
//            break;
//        }
//    }
//    if (flag == 0)
//        cout << "Number is Prime." << endl;
//    return 0;
//}