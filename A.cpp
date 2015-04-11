#include <iostream>
#include <fstream>
#include <vector> // include for vector
#include <algorithm> // include for sort()
using namespace std;

int main()
{
	ifstream in("file.in", ios::in); // open file.in
	int number; // store for number of cows weight
	in >> number; // read in number of cows weight
	vector<int>cows_weight(number); // vector for store cows weight
	
	for(int i=0; i<number; ++i) { // read in cows weight
		in >> cows_weight.at(i);
	}
	sort(cows_weight.begin(),cows_weight.end()); // sort
	int top_five=cows_weight.at(number-1)+cows_weight.at(number-2)+cows_weight.at(number-3)+cows_weight.at(number-4)+cows_weight.at(number-5); // calculate top five cows weight
	cout << top_five << endl; // stdout for top five cows weight
} // end main
