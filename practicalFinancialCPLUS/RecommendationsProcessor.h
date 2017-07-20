#pragma once
#include <map>
#include <vector>

#include "Recommendation.h"

class RecommendationsProcessor {
public:
	RecommendationsProcessor();
	~RecommendationsProcessor();
	RecommendationsProcessor(const RecommendationsProcessor &);
	RecommendationsProcessor &operator = (const RecommendationsProcessor &);

	void addRecommendation(const std::string &tocker, RecommendationType rec, double targetPrice);
	double averageTargetPrice(const std::string &ticker);
	RecommendationType averageRecommendation(const std::string &ticker);
private:
	std::map<std::string, std::vector<Recommendation>> m_recommendations;
};