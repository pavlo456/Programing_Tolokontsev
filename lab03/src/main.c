#include <stdio.h>

int main()
{
	// Константи курсу валют
	const float USD = 36.66;
	const float EURO = 37.67;
	const float RUB = 0.60;

	float uah = 600;

	float uah_price_usd = uah / USD;

	float uah_price_euro = uah / EURO;

	float uah_price_rub = uah / RUB;

	printf("Переведені гроші: у доларах %f, у євро %f, у рублях %f\n", uah_price_usd, uah_price_euro,
	       uah_price_rub); // Команда для виведення результатів на екран

	return 0;
}
