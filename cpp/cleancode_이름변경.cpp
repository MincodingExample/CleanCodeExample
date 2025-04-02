#include<iostream>
#include<vector>
using namespace std; 

void run(vector<int>& theVector) {
	for (int t = 0; t < theVector.size(); t++){
		if (theVector[t] == 0) continue; 
		theVector[t] = theVector[t] - 1;
	}
}


int main()
{
	

	return 0; 
}  
