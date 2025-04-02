#include<iostream>
#include<vector>
using namespace std; 

struct xyInfo {
	int x; 
	int y; 
};

class xyManager {
public : 
	void add(xyInfo data) {
		arr.push_back(data); 
	}

	void drawButton() {
		for (xyInfo o : arr) {
			cout << o.x << " " << o.y << endl; 
		}
	}

private: 
	vector<xyInfo> arr; 
};


int main()
{
	

	return 0; 
}
