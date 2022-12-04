
#include<iostream>
int arr[15];
using namespace std;
int euc(int A, int B) {
	int x = 0;
	if (A % B == 0) {
		cout << "Duno" << endl;
		x = B;
	}
	else {
		cout << "potuvame! " << endl;
		x = euc(B, A % B);
		cout << "izpluvame" << endl;
	}
	return x;
}
int fac(int number) {
	int gosho = 0;
	if (number == 0) {
		cout << "Duno" << endl;
		gosho = 1;
	}
	else {
		cout << "potuvame! " << "n = " << number << endl;
		gosho = fac(number - 1) * number;
		cout << "izpluvame! " << "n = " << number << " smetka = " << gosho << endl;
	}
	return gosho;
}
int dihotomic(int koi, int nachalo, int krai) {
	int iBeg = nachalo, iMid, iEnd = krai;
	iMid = (iBeg + iEnd) / 2;
	cout << "arr[iMid] = " << arr[iMid];
	if (koi == arr[iMid]) {
		cout << "tursq" << endl;
		cout << "namerih go! Duno! " << endl;
		return iMid;
	}
	else if (iEnd <= iBeg) {
		cout << "nqma go! Duno" << endl;
		return -1;
	}
	else {
		if (koi > arr[iMid]) {
			return dihotomic(koi, iMid + 1, iEnd);
		}
		else {
			return dihotomic(koi, iBeg, iMid - 1);
		}
	}
}
int main() {
	for (int i = 0; i < 15; i++) {
		arr[i] = i + 1;
	}
	int num;
	cout << " Molq vuvedete chislo za tursene: ";
	cin >> num;
	cout << dihotomic(num, 0, 14) << endl;
	return 0;
}