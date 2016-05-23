#pragma once
class Goods
{private:
	int weightOfGoods;
public:
	static int total_weight;
	Goods(int w) :weightOfGoods(w) { total_weight += w; };
	~Goods() { total_weight -= weightOfGoods; };
	int weight() const;
	static int totalWeight();
};