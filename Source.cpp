
#include <iostream>

int main()
{
	float a, b, h, s1;
	std::cout << "Task 1" << std::endl;
	//������� ������ ��������� ����� ���������������� ����
	std::cout << "Enter the base b1: ";
	std::cin >> a;
	std::cout << "Enter the base b2: ";
	std::cin >> b;
	std::cout << "Enter the heigt h: ";
	std::cin >> h;
	//������� ������� �� �������
	s1 = h * ((a + b) / 2);
	//������� ����� �� �����
	std::cout << "Square = " << s1 << std::endl;

	std::cout << "Task 2" << std::endl;
	float r, p, c, s2;
	p = 3.14;
	//������ � ���������� ������ ���������� 
	std::cout << "Enter r circles: ";
	std::cin >> r;
	//������� ����� ���������� �� �������
	c = 2 * p * r;
	//������� ����� �� �����
	std::cout << "Length = " << c << std::endl;
	//������� ������� ���������� �� �������
	s2 = p * r * r;
	//������� ����� �� �����
	std::cout << "Square = " << s2 << std::endl;

	
	std::cout << "Task 3" << std::endl;
	float k1, k2, s3, g;
	//������ � ���������� ������ �����
	std::cout << "Enter k1 of triangle: ";
	std::cin >> k1;
	//������ � ���������� ������ �����
	std::cout << "Enter k2 of triangle: ";
	std::cin >> k2;
	//������� ���������� �� �������
	g = sqrt(k1 * k1 + k2 * k2);
	//������� ������� �� �������
	s3 = (k1 + k2) / 2;
	//������� ������ �� �����
	std::cout << "Square = " << s3 << std::endl;
	std::cout << "Hypotenuse = " << g << std::endl;

	//������� ��� ���������� �����
	std::cout << "Task 4" << std::endl;
	int n;
	int sum = 0;
	std::cout << "Enter n: ";
	std::cin >> n;
	//std::cout << static_cast<int>(n) << std::endl;
	while(n!=0)
	{
		sum += n%10;
		n /= 10;
	}
	std::cout << "sum = " << sum << std::endl;

	std::cout << "Task 7" << std::endl;
	double a1, b1, c1;
	double d2, x1, x2;
	std::cout << "a*x*x+b*x+c=0." << std::endl;
	//������ ������������ ����� a,b � �
	std::cout << "Enter a: ";
	std::cin >> a1;
	std::cout << "Enter b: ";
	std::cin >> b1;
	std::cout << "Enter c: ";
	std::cin >> c1;
	//��� � ������ 0, ��������� �� ����� ������
	if (a1 == 0.0) {
		std::cout << "Not root!" << std::endl;
		return 2;
	}
	//������� ������������
	d2 = b1 * b1 - 4 * a1 * c1;
	//������� ����� ����������� ��������� � ����������� �� �������� �������������
	if (d2 > 0) {
		x1 = (-b1 + sqrt(d2)) / (2 * a1);
		x2 = (-b1 - sqrt(d2)) / (2 * a1);
		std::cout << "x1=" << x1 << std::endl;
		std::cout << "x2=" << x2 << std::endl;
	}
	else if (d2 == 0.0) {
		x1 = (-b1 / (2 * a1)); x2 = x1;
		std::cout << "x=" << x1 << std::endl;
	}
	else {
		std::cout << "Roots not found!" << std::endl;
	}

	std::cout << "Task 8" << std::endl;
	double m1, m2, m3, m4, m5, m6;
	double l, q, o;
	//������ ������� �����������
	std::cout << "Enter a of triangle: ";
	std::cin >> l;
	std::cout << "Enter b of triangle: ";
	std::cin >> q;
	std::cout << "Enter c of triangle: ";
	std::cin >> o;
	//������� ��� ������� ������������
	m1 = (sqrt(2 * l * l + 2 * o * o - q * q)) / 2;
	m2 = (sqrt(2 * o * o + 2 * q * q - l * l)) / 2;
	m3 = (sqrt(2 * q * q + 2 * l * l - o * o)) / 2;
	//������� �� ����� ������� ������������
	std::cout << "m1=" << m1 << std::endl;
	std::cout << "m2=" << m2 << std::endl;
	std::cout << "m3=" << m3 << std::endl;
	//������� ������� ������ ������������
	m4 = (sqrt(2 * m1 * m1 + 2 * m2 * m2 - m3 * m3)) / 2;
	m5 = (sqrt(2 * m2 * m2 + 2 * m3 * m3 - m1 * m1)) / 2;
	m6 = (sqrt(2 * m3 * m3 + 2 * m1 * m1 - m2 * m2)) / 2;
	//������� �� ����� ������� ������ ������������
	std::cout << "m4=" << m4 << std::endl;
	std::cout << "m5=" << m5 << std::endl;
	std::cout << "m6=" << m6 << std::endl;

	std::cout << "Task 9" << std::endl;
	int time, min, hour;
	//������ � ���������� ���������� ������
	std::cout << "Enter sec: ";
	std::cin >> time;
	//������� ���������� ����� � �����
	hour = time / 3600;
	min = time / 60;
	//������ �� ����� ���������� ����� � �����
	std::cout << "Minuts=" << min << std::endl;
	std::cout << "Hour=" << hour << std::endl;

	std::cout << "Task 10" << std::endl;
	int a2, b2, c2;
	//������ � ���������� ������� ������������
	std::cout << "Enter a of triangle: ";
	std::cin >> a2;
	std::cout << "Enter b of triangle: ";
	std::cin >> b2;
	std::cout << "Enter c of triangle: ";
	std::cin >> c2;
	//���������� �������������� �� �����������
	if (a2 == b2 || a2 == c2 || b2 == c2) {
		std::cout << "Isosceles triangle" << std::endl;
	}
	else {
		std::cout << "Not Isosceles triangle" << std::endl;
	}

	std::cout << "Task 11" << std::endl;
	int summa, result;
	//������ � ���������� ��������� �������
	std::cout << "Enter the amount of your purchase: ";
	std::cin >> summa;
	//������� ����� ������� �� �������, ���� ��� ������ 1000
	if (summa > 1000) {
		result = summa - (summa * 0.10);
		std::cout << "Purchase amount including discount: " << result << std::endl;
	}
	//���� ����� ������ 1000, ����� �� ��������
	else {
		std::cout << "Discount does not apply, purchase amount:"<< summa << std::endl;
	}

	std::cout << "Task 12" << std::endl;
	int rost, ves, ideal;
	//������ � ���������� ���� � ���
	std::cout << "Enter your heigt: ";
	std::cin >> rost;
	std::cout << "Enter your weight: ";
	std::cin >> ves;
	//������� ���������� ����
	ideal = rost - 100;
	//��������� � ����� ����������
	if (ideal == ves) {
		std::cout << "You are the best!" << std::endl;
	}
	else if (ideal > ves) {
		std::cout << "You should get fat!" << std::endl;
	}
	else if (ideal < ves) {
		std::cout << "You should get skinny!" << std::endl;
	}
	else {
		std::cout << "Error!" << std::endl; 
	}

	std::cout << "Task 13" << std::endl;
	int f1, f2, pr, res;
	//������� ��� ��������� �����
	std::srand(std::time(nullptr));
	int random_variable = std::rand();
	f1 = 1 + rand() % 9;
	f2 = rand() % 9 + 1;
	std::cout << "First random number:" << f1 << std::endl;
	std::cout << "Second random number:" << f2 << std::endl;
	//������ ������������ ���� �����
	std::cout << "Enter product of numbers: ";
	std::cin >> pr;
	//���������� ��������� ����� � ���������� � ������� ���������
	res = f1 * f2;
	if (res == pr) {
		std::cout << "You are the best!" << std::endl;
	}
	else {
		std::cout << "You are wrong!Correct answer:" << res << std::endl;
	}
	
	std::cout << "Task 15" << std::endl;
	int num;
	//������ ����� ������
	std::cout << "Enter month number: ";
	std::cin >> num;
	//� ����������� �� ������ ��������� ���������
	if (num == 1) {
		std::cout << "Month: January" << std::endl;
		std::cout << "Season: Winter" << std::endl;
	}
	else if (num == 2) {
		std::cout << "Month: February" << std::endl;
		std::cout << "Season: Winter" << std::endl;
	}
	else if (num == 3) {
		std::cout << "Month: March" << std::endl;
		std::cout << "Season: Spring" << std::endl;
	}
	else if (num == 4) {
		std::cout << "Month: April" << std::endl;
		std::cout << "Season: Spring" << std::endl;
	}
	else if (num == 5) {
		std::cout << "Month: May" << std::endl;
		std::cout << "Season: Spring" << std::endl;
	}
	else if (num == 6) {
		std::cout << "Month: June" << std::endl;
		std::cout << "Season: Summer" << std::endl;
	}
	else if (num == 7) {
		std::cout << "Month: Jule" << std::endl;
		std::cout << "Season: Summer" << std::endl;
	}
	else if (num == 8) {
		std::cout << "Month: August" << std::endl;
		std::cout << "Season: Spring" << std::endl;
	}
	else if (num == 9) {
		std::cout << "Month: September" << std::endl;
		std::cout << "Season: Autumn" << std::endl;
	}
	else if (num == 10) {
		std::cout << "Month: October" << std::endl;
		std::cout << "Season: Autumn" << std::endl;
	}
	else if (num == 11) {
		std::cout << "Month: November" << std::endl;
		std::cout << "Season: Autumn" << std::endl;
	}
	else if (num == 12) {
		std::cout << "Month: December" << std::endl;
		std::cout << "Season: Winter" << std::endl;
	}
	else {
		std::cout << "There is no month under this number!" << std::endl;
	}


	std::cout << "Task 14" << std::endl;
	double ti, am, resu, re;
	int day;
	//������ � ���������� ���� ������, ���������� ����� � ���� �� ������
	std::cout << "Enter number of day: ";
	std::cin >> day;
	std::cout << "Enter time in minutes:";
	std::cin >> ti;
	std::cout << "Enter cost per minute:";
	std::cin >> am;
	//������� � ������ ������ ��� ������� � �����������
	if (day == 6) {
		re = (ti * am) - 0.2 * (ti * am);
		std::cout << "Cost with discount:" << re << std::endl;
	}
	else if (day == 7) {
		re = (ti * am) - 0.2 * (ti * am);
		std::cout << "Cost with discount:" << re << std::endl;
	}
	//������� ��� ������ ��� ��������� ����
	else {
		resu = ti * am;
		std::cout << "Cost: " << resu << std::endl;
	}
	

	std::cout << "Task 16" << std::endl;
	int u, u1, u2, u3, u4, u5, u6, y, j;
	//������ � ���������� ������������ �����
	std::cout << "Enter natural six-digit number: ";
	std::cin >> u;
	//��������� ����� �� ��������� �����
	u1 = u / 100000;
	u2 = (u - (u1 * 100000)) / 10000;
	u3 = (u - (u1 * 100000 + u2 * 10000)) / 1000;
	u4 = (u - (u1 * 100000 + u2 * 10000 + u3 * 1000)) / 100;
	u5 = (u - (u1 * 100000 + u2 * 10000 + u3 * 1000 + u4 * 100)) / 10;
	u6 = (u - (u1 * 100000 + u2 * 10000 + u3 * 1000 + u4 * 100 + u5 * 10)) / 1;
	//���������� �� ����������� 3 ������ ����� � 3 ��������� �����
	y = u1 + u2 + u3;
	j = u4 + u5 + u6;
	//���������� ���������� ����� ����� ����� � ������� ���������
	if (y == j)
	{
		std::cout << "You are lucky men!" << std::endl;
	}
	else {
		std::cout << "You are not lucky men!" << std::endl;
	}


	std::cout << "Task 18" << std::endl;
	int w, w1, w2, w3, w4, v;
	//������ � ���������� �������������� �����
	std::cout << "Enter natural four-digit number: ";
	std::cin >> w;
	//��������� ����� �� �����
	w1 = w / 1000;
	w2 = (w - (w1 * 1000)) / 100;
	w3 = (w - (w1 * 1000 + w2 * 100)) / 10;
	w4 = (w - (w1 * 1000 + w2 * 100 + w3 * 10));
	//�������������� �����
	v = w4 * 1000 + w3 * 100 + w2 * 10 + w1;
	//���������� ����� ����� ����� � ������� ���������
	if (v == w) {
		std::cout << "It is palindrome!" << std::endl;
	}
	else {
		std::cout << "It is not palindrome!" << std::endl;
	}

	return 0;

	
}


