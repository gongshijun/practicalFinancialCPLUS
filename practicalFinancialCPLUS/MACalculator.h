#pragma once

#include <vector>

class MACalculator {
public:
	MACalculator(int period);
	MACalculator(const MACalculator &);
	MACalculator &operator = (const MACalculator &);
	~MACalculator();

	void addPriceQuote(double close);
	std::vector<double> calculateMA();
	std::vector<double> calculateEMA();
private:
	int m_numPeriods;
	std::vector<double> m_prices;
};