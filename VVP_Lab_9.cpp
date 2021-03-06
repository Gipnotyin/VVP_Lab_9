#include <iostream>
#include <math.h>
#include <stdbool.h>

using namespace std;

enum days_of_week_1 {Sun, Mon, Tue, Wed, Thu, Fri, Sat};
enum days_of_week_very_unusual {Su = 6, Mo = 0, Tu = 1, We = 2, Th = 3, Fr = 4, Sa = 5};

int main()
{
	setlocale(LC_ALL, "ru");
	int number, N, n, k, A, B, C, c1, c2, S, c;
    bool end = true;
	while (end == true) {
		cout << "Выберите задание, которое хотите проверить:\n" <<
			"1. С начала суток прошло N секунд (N — целое).\nНайти количество секунд, прошедших с начала последней минуты.\n" <<
			"2. Дни недели пронумерованы следующим образом: 0 — воскресенье, 1 — понедельник, 2 — вторник, . . . , 6 — суббота.\nДано целое число K, лежащее в диапазоне 1–365.\nОпределить номер дня недели для K-го дня года, если известно, что в этом году 1 января было понедельником.\n" <<
			"3. Дни недели пронумерованы следующим образом: 1 — понедельник, 2 — вторник, . . . , 6 — суббота, 7 — воскресенье.\nДано целое число K, лежащее в диапазоне 1–365, и целое число N, лежащее в диапазоне 1–7.\nОпределить номер дня недели для K-го дня года, если известно, что в этом году 1 января было днем недели с номером N.\n" <<
			"4. Даны целые положительные числа A, B, C.\nНа прямоугольнике размера A × B размещено максимально возможное количество квадратов со стороной C (без наложений).\nНайти количество квадратов, размещенных на прямоугольнике, а также площадь незанятой части прямоугольника.\n" <<
			"5. Дан номер некоторого года (целое положительное число).\nОпределить соответствующий ему номер столетия, учитывая, что, к примеру, началом 20 столетия был 1901 год.\n\n" <<
			"Для выхода нажмите любую цифру...\n";
		cin >> number;
		if (number >=1 && number <= 5) {
			switch (number)
			{
			case 1:
				cout << "Введите N секунд: ";
				cin >> N;
				n = N % 60;
				cout << "От последней минуты прошло " << n << " сек\n" << endl;
				break;
			case 2:
				cout << "Введите k-ый день, где 1<=k<=365: ";
				do
				{
					cin >> k;
					if (k >= 1 && k <= 365) {
						n = k % 7;
						switch (n)
						{
						case Sun:
							cout << "k-тый день недели - Воскресенье!\n" << endl;
							break;
						case Mon:
							cout << "k-тый день недели - Понедельник!\n" << endl;
							break;
						case Tue:
							cout << "k-тый день недели - Вторник!\n" << endl;
							break;
						case Wed:
							cout << "k-тый день недели - Среда!\n" << endl;
							break;
						case Thu:
							cout << "k-тый день недели - Четверг!\n" << endl;
							break;
						case Fri:
							cout << "k-тый день недели - Пятница!\n" << endl;
							break;
						case Sat:
							cout << "k-тый день недели - Суббота!\n" << endl;
							break;
						default:
							cout << "Такого вообще быть не может!!!\n";
							break;
						}
					}
					else {
						cout << "Введите корректные данные: ";
					}
				} while (k <= 365 or k >= 1);
				break;
			case 3:
				cout << "Введите k-ый день, где 1<=k<=365: ";
				do
				{
					cin >> k;
					cout << "Введите число n, где n-определяет первый день года:";
					do
					{
						cin >> N;
						if (N >= 1 and N <= 7) {
						}
						else {
							cout << "Введите корректные данные: ";
						}
					} while (N<1 or N>7);
					if (k >= 1 && k <= 365) {
						n = (N+k-2) % 7;
						switch (n)
						{
						case Su:
							cout << "k-тый день недели - Воскресенье!\n" << endl;
							break;
						case Mo:
							cout << "k-тый день недели - Понедельник!\n" << endl;
							break;
						case Tu:
							cout << "k-тый день недели - Вторник!\n" << endl;
							break;
						case We:
							cout << "k-тый день недели - Среда!\n" << endl;
							break;
						case Th:
							cout << "k-тый день недели - Четверг!\n" << endl;
							break;
						case Fr:
							cout << "k-тый день недели - Пятница!\n" << endl;
							break;
						case Sa:
							cout << "k-тый день недели - Суббота!\n" << endl;
							break;
						default:
							cout << "Такого вообще быть не может!!!\n";
							break;
						}
					}
					else {
						cout << "Введите корректные данные: ";
					}
				} while (k > 365 or k < 1);
				break;
			case 4:
				cout << "Введите A, B, C: ";
				cin >> A >> B >> C;
				if (A > 0 && B > 0 && C > 0) {
					c1 = 0;
					c2 = 0;
					S = A * B;
					while (A >= C) {
						c1 += 1;
						A -= C;
					}
					while (B >= C) {
						c2 += 1;
						B -= C;
					}
					n = c1 * c2;
					S = S - n * pow(C, 2);
					cout << "Количество кубиков равно " << n << endl;
					cout << "Оставшаяся площадь равна " << S << endl << endl;
				}
				else {
					cout << "Введите корректные данные..." << endl << endl;
				}
				break;
			case 5:
				cout << "Введите целое положительное значение, некоторого года: ";
				cin >> N;
				c = 0;
				n = N;
				if (N > 0) {
					while (N > 0) {
						c += 1;
						N -= 100;
					}
					cout << "Для " << n << " года соответствует  " << c << " столетие\n" << endl;
				}
				else {
					cout << "Ошибка ввода!" << endl;
				}
				break;
			default:
				break;
			}
		}
		else {
			cout << "Завершение программы, спасибо, что проверили лабу :)\n";
			end = false;
		}

	}
	return 0;
}
