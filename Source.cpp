
#include <iostream>

int main()
{
	float a, b, h, s1;
	std::cout << "Task 1" << std::endl;
	//сначала вводим основания через пользовательский ввод
	std::cout << "Enter the base b1: ";
	std::cin >> a;
	std::cout << "Enter the base b2: ";
	std::cin >> b;
	std::cout << "Enter the heigt h: ";
	std::cin >> h;
	//считаем площадь по формуле
	s1 = h * ((a + b) / 2);
	//выводим ответ на экран
	std::cout << "Square = " << s1 << std::endl;

	std::cout << "Task 2" << std::endl;
	float r, p, c, s2;
	p = 3.14;
	//вводим с клавиатуры радиус окружности 
	std::cout << "Enter r circles: ";
	std::cin >> r;
	//считаем длину окружности по формуле
	c = 2 * p * r;
	//выводим ответ на экран
	std::cout << "Length = " << c << std::endl;
	//считаем площадь окружности по формуле
	s2 = p * r * r;
	//выводим ответ на экран
	std::cout << "Square = " << s2 << std::endl;

	
	std::cout << "Task 3" << std::endl;
	float k1, k2, s3, g;
	//вводим с клавиатуры первый катет
	std::cout << "Enter k1 of triangle: ";
	std::cin >> k1;
	//вводим с клавиатуры второй катет
	std::cout << "Enter k2 of triangle: ";
	std::cin >> k2;
	//считаем гипотенузу по формуле
	g = sqrt(k1 * k1 + k2 * k2);
	//считаем площадь по формуле
	s3 = (k1 + k2) / 2;
	//выводим ответы на экран
	std::cout << "Square = " << s3 << std::endl;
	std::cout << "Hypotenuse = " << g << std::endl;

	//сделать для десятичных чисел
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
	//вводим произвольные числа a,b и с
	std::cout << "Enter a: ";
	std::cin >> a1;
	std::cout << "Enter b: ";
	std::cin >> b1;
	std::cout << "Enter c: ";
	std::cin >> c1;
	//при а равном 0, уравнение не имеет корней
	if (a1 == 0.0) {
		std::cout << "Not root!" << std::endl;
		return 2;
	}
	//считаем дискриминант
	d2 = b1 * b1 - 4 * a1 * c1;
	//находим корни квадратного уравнения в зависимости от значения дискриминанта
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
	//вводим стороны треуголника
	std::cout << "Enter a of triangle: ";
	std::cin >> l;
	std::cout << "Enter b of triangle: ";
	std::cin >> q;
	std::cout << "Enter c of triangle: ";
	std::cin >> o;
	//находим все медианы треугольника
	m1 = (sqrt(2 * l * l + 2 * o * o - q * q)) / 2;
	m2 = (sqrt(2 * o * o + 2 * q * q - l * l)) / 2;
	m3 = (sqrt(2 * q * q + 2 * l * l - o * o)) / 2;
	//выводим на экран медианы треугольника
	std::cout << "m1=" << m1 << std::endl;
	std::cout << "m2=" << m2 << std::endl;
	std::cout << "m3=" << m3 << std::endl;
	//находим медианы нового треугольника
	m4 = (sqrt(2 * m1 * m1 + 2 * m2 * m2 - m3 * m3)) / 2;
	m5 = (sqrt(2 * m2 * m2 + 2 * m3 * m3 - m1 * m1)) / 2;
	m6 = (sqrt(2 * m3 * m3 + 2 * m1 * m1 - m2 * m2)) / 2;
	//выводим на экран медианы нового треугольника
	std::cout << "m4=" << m4 << std::endl;
	std::cout << "m5=" << m5 << std::endl;
	std::cout << "m6=" << m6 << std::endl;

	std::cout << "Task 9" << std::endl;
	int time, min, hour;
	//вводим с клавиатуры количество секунд
	std::cout << "Enter sec: ";
	std::cin >> time;
	//считаем количество минут и часов
	hour = time / 3600;
	min = time / 60;
	//выводи на экран количество часов и минут
	std::cout << "Minuts=" << min << std::endl;
	std::cout << "Hour=" << hour << std::endl;

	std::cout << "Task 10" << std::endl;
	int a2, b2, c2;
	//вводим с клавиатуры стороны треугольника
	std::cout << "Enter a of triangle: ";
	std::cin >> a2;
	std::cout << "Enter b of triangle: ";
	std::cin >> b2;
	std::cout << "Enter c of triangle: ";
	std::cin >> c2;
	//определяем равнобедренный ли треугольник
	if (a2 == b2 || a2 == c2 || b2 == c2) {
		std::cout << "Isosceles triangle" << std::endl;
	}
	else {
		std::cout << "Not Isosceles triangle" << std::endl;
	}

	std::cout << "Task 11" << std::endl;
	int summa, result;
	//вводим с клавиатуры стоимость покупки
	std::cout << "Enter the amount of your purchase: ";
	std::cin >> summa;
	//считаем сумму покупки со скидкой, если она больше 1000
	if (summa > 1000) {
		result = summa - (summa * 0.10);
		std::cout << "Purchase amount including discount: " << result << std::endl;
	}
	//если сумма меньше 1000, сумма не меняется
	else {
		std::cout << "Discount does not apply, purchase amount:"<< summa << std::endl;
	}

	std::cout << "Task 12" << std::endl;
	int rost, ves, ideal;
	//вводим с клавиатуры рост и вес
	std::cout << "Enter your heigt: ";
	std::cin >> rost;
	std::cout << "Enter your weight: ";
	std::cin >> ves;
	//формула идеального веса
	ideal = rost - 100;
	//сравнение и вывод результата
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
	//выводим два рандомных числа
	std::srand(std::time(nullptr));
	int random_variable = std::rand();
	f1 = 1 + rand() % 9;
	f2 = rand() % 9 + 1;
	std::cout << "First random number:" << f1 << std::endl;
	std::cout << "Second random number:" << f2 << std::endl;
	//вводим произведение этих чисел
	std::cout << "Enter product of numbers: ";
	std::cin >> pr;
	//сравниваем введенный ответ с правильным и выводим результат
	res = f1 * f2;
	if (res == pr) {
		std::cout << "You are the best!" << std::endl;
	}
	else {
		std::cout << "You are wrong!Correct answer:" << res << std::endl;
	}
	
	std::cout << "Task 15" << std::endl;
	int num;
	//вводим номер месяца
	std::cout << "Enter month number: ";
	std::cin >> num;
	//в зависимости от номера выводится результат
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
	//вводим с клавиатуры день недели, количество минут и цену за минуту
	std::cout << "Enter number of day: ";
	std::cin >> day;
	std::cout << "Enter time in minutes:";
	std::cin >> ti;
	std::cout << "Enter cost per minute:";
	std::cin >> am;
	//считаем с учетом скидки для субботы и воскресенья
	if (day == 6) {
		re = (ti * am) - 0.2 * (ti * am);
		std::cout << "Cost with discount:" << re << std::endl;
	}
	else if (day == 7) {
		re = (ti * am) - 0.2 * (ti * am);
		std::cout << "Cost with discount:" << re << std::endl;
	}
	//считаем без скидки для остальных дней
	else {
		resu = ti * am;
		std::cout << "Cost: " << resu << std::endl;
	}
	

	std::cout << "Task 16" << std::endl;
	int u, u1, u2, u3, u4, u5, u6, y, j;
	//вводим с клавиатуры шестизначное число
	std::cout << "Enter natural six-digit number: ";
	std::cin >> u;
	//разбиваем число на отдельные цифры
	u1 = u / 100000;
	u2 = (u - (u1 * 100000)) / 10000;
	u3 = (u - (u1 * 100000 + u2 * 10000)) / 1000;
	u4 = (u - (u1 * 100000 + u2 * 10000 + u3 * 1000)) / 100;
	u5 = (u - (u1 * 100000 + u2 * 10000 + u3 * 1000 + u4 * 100)) / 10;
	u6 = (u - (u1 * 100000 + u2 * 10000 + u3 * 1000 + u4 * 100 + u5 * 10)) / 1;
	//складываем по отдельности 3 первых числа и 3 следующих числа
	y = u1 + u2 + u3;
	j = u4 + u5 + u6;
	//сравниваем полученные числа между собой и выводим результат
	if (y == j)
	{
		std::cout << "You are lucky men!" << std::endl;
	}
	else {
		std::cout << "You are not lucky men!" << std::endl;
	}


	std::cout << "Task 18" << std::endl;
	int w, w1, w2, w3, w4, v;
	//вводим с клавиатуры четырехзначное число
	std::cout << "Enter natural four-digit number: ";
	std::cin >> w;
	//разбиваем число на цифры
	w1 = w / 1000;
	w2 = (w - (w1 * 1000)) / 100;
	w3 = (w - (w1 * 1000 + w2 * 100)) / 10;
	w4 = (w - (w1 * 1000 + w2 * 100 + w3 * 10));
	//переворачиваем число
	v = w4 * 1000 + w3 * 100 + w2 * 10 + w1;
	//сравниваем числа между собой и выводим результат
	if (v == w) {
		std::cout << "It is palindrome!" << std::endl;
	}
	else {
		std::cout << "It is not palindrome!" << std::endl;
	}

	return 0;

	
}


