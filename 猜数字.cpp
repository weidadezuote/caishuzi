#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	int a, b, c, d = 1, x;
	srand(time(NULL));
	a = rand() % 100 + 1;
	b = 1, c = 100;
	cout << "猜数字游戏" << endl;
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
		cout << "我想的数字是" << a << "!";
	}
	else if (x == a) {
		cout << "猜对啦！" << endl;
		cout << "你一共猜了" << d << "次";
	}
	return 0;
}