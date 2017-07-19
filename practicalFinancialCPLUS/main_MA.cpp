#include "MACalculator.h"

#include <iostream>

int main_MA()
{
	int num_periods = 5;
	double price;
	MACalculator calculator(num_periods);
	for (;;) {
		std::cin >> price;
		if (price == -1)
			break;
		calculator.addPriceQuote(price);
	}

	std::vector<double> ma = calculator.calculateMA();
	for (int i = 0; i<ma.size(); ++i)
	{
		std::cout << "average value " << i << " = " << ma[i] << std::endl;
	}
	std::vector<double> ema = calculator.calculateEMA();
	for (int i = 0; i<ema.size(); ++i)
	{
		std::cout << "exponential average value "
			<< i << " = " << ema[i] << std::endl;
	}
	return 0;
}