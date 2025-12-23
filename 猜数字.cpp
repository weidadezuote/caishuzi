#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	int a, b, c, d = 1, x,n;
	srand(time(NULL));
	cout << "========猜数字游戏========" << endl;
	cout << endl;
	cout << "开始游戏——1" << endl;
	cout << "结束游戏——2" << endl;
		cin >> n;
		while (n) {
			while (n < 1 || n>2) {
				cout << "无效数字，请重新输入：";
				cin >> n;
			}
			while (n == 1 || n == 2) {
				d = 1;
				a = rand() % 100 + 1;
				b = 1, c = 100;
				if (n == 1) {
					cout << "欢迎来到猜数字游戏！" << endl;
					cout << "我已经在1—100之间想好了一个数字" << endl;
					cout << "你现在需要把它猜出来" << endl;
					cout << "你有9次猜数字的机会" << endl;
					cout << "请输入你猜的数字：" << "";
					cin >> x;
					while (x != a && d != 9) {
						if (x<b || x>c) {
							cout << "无效数字，请重新输入：";
							cin >> x;
						}
						else if (x > a) {
							c = x - 1;
							cout << "猜大了，再猜一次！" << endl;
							d++;
							cout << "第" << d << "次猜数字(" << b << "-" << c << ")：";
							cin >> x;
						}
						else if (x < a) {
							b = x + 1;
							cout << "猜小了，再猜一次！" << endl;
							d++;
							cout << "第" << d << "次猜数字(" << b << "-" << c << ")：";
							cin >> x;
						}
					}
					if (d == 9) {
						cout << "次数用尽，游戏结束！" << endl;
						cout << "我想的数字是" << a << "!" << endl;
						cout << "重新游戏——1" << endl;
						cout << "结束游戏——2" << endl;
						cin >> n;
					}
					else if (x == a) {
						cout << "猜对啦！" << endl;
						cout << "你一共猜了" << d << "次" << endl;
						cout << "重新游戏——1" << endl;
						cout << "结束游戏——2" << endl;
						cin >> n;
					}
				}
				else if (n == 2)
					return 0;
			}
		}
}