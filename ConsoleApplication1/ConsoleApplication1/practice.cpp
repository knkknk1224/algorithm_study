#include<iostream>
using namespace std;

int main() {
	int a, bx[1000], by[1000], cx[1000], cy[1000], dx[1000], dy[1000], x[1000], y[1000];
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> bx[i] >> by[i] >> cx[i] >> cy[i] >> dx[i] >> dy[i];
		if (bx[i] == cx[i])
			x[i] = dx[i];
		else if (bx[i] == dx[i])
			x[i] = cx[i];
		else if (cx[i] == dx[i])
			x[i] = bx[i];
		if (by[i] == cy[i])
			y[i] = dy[i];
		else if (by[i] == dy[i])
			y[i] = cy[i];
		else if (cy[i] == dy[i])
			y[i] = by[i];
	}
	for (int j = 0; j < a; j++) {
		cout << x[j] << " " << y[j] << endl;
	}
}