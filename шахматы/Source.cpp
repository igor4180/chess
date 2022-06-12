#include <iostream>
using namespace std;
//#define доска
//#define Шахматная доска
//#define Шахматы
void main()
{
    setlocale (LC_ALL, "Rus");
#ifdef доска
    const char WHITE = '#';
    const char BLACK = ' ';
    int x, y, w;
    cout << "Введите размер : ";
    cin >> x;
    y = x;
    cout << "Введите ширину : ";
    cin >> w;

    int c, z, r;
    for (c = 0; c < y; c++) 
    {
        for (z = 0; z < w; z++) 
        {
            for (r = 0; r < x; r++)
                cout << (c % 2 == 0 ? r % 2 == 0 ?  string(w, WHITE) : string(w, BLACK) : r % 2 == 0 ? string(w, BLACK) : string(w, WHITE));
            cout << endl;
        }
    }
#endif
#ifdef Шахматная доска
	{
		cout << "Размер= ";
		int a, k = 1, p = 1, v = 0; cin >> a;
		while (k <= a) {
			for (int r = 0; r < 4; r++) {
				for (int k = 0; k < a; ) {
					cout << "*"; k++;
					if (k == a) {
						for (int l = 0; l < a; l++) {
							cout << "-";
						}
					}
				}

			}
			cout << endl; k++;
		}
		while (p <= a) {
			for (int r = 0; r < 4; r++) {
				for (int k = 0; k < a; ) {
					cout << "-"; k++;
					if (k == a) {
						for (int l = 0; l < a; l++) {
							cout << "*";
						}
					}
				}

			}
			cout << endl; p++;
		}
		while (v <= a)
		{
			for (int r = 0; r < 4; r++)
			{
				for (int k = 0; k < a; )
				{
					cout << "*"; k++;
					if (k == a)
					{
						for (int l = 0; l < a; l++)
						{
							cout << "-";
						}
					}
				}

			}
			cout << endl; v++;

		}
	}
#endif
#ifdef Шахматы
	{
		const char WHITE = '#';
		const char BLACK = ' ';
		int x, y, w;
		std::cout << "Enter size : ";
		std::cin >> x;
		y = x;
		std::cout << "Enter width of cell : ";
		std::cin >> w;

		int c, z, r;
		for (c = 0; c < y; c++) {
			for (z = 0; z < w; z++) {
				for (r = 0; r < x; r++)
					std::cout << (c % 2 == 0 ? r % 2 == 0 ? std::string(w, WHITE) : std::string(w, BLACK) : r % 2 == 0 ? std::string(w, BLACK) : std::string(w, WHITE));
				std::cout << std::endl;
			}
		}

	}
#endif

}
