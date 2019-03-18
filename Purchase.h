#pragma once
#include <map>
#include <iostream>

class Purchase {
	public: 
			Purchase();
			Purchase(std::string id, std:: string invoice, std::string date, float amount);

			static bool LoadPurchase(std::multimap<std::string, float> & ptable, const std::string filename, bool verbose = false);

			std::string id;
			std::string invoice;
			std::string date;
			float amount;

			static bool SafeFloatFromString(std::string & input, float & v);

			
			static const int tokens_to_expect;


};