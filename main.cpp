#include <iostream>
#include <string>
#include <stdlib.h> 
#include <time.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include "Curves.h"


using namespace std;

double genDouble(int minValMul100, int maxValMul100) {
	
	return double(minValMul100 + rand() % (maxValMul100 - minValMul100 + 1)) / 100.;
}

vector<shared_ptr<BaseCurve>> genContOfCurves(int maxCount, int minValMul100, int maxValMul100) {

	vector<shared_ptr<BaseCurve>> result;
	int count = rand() % maxCount + 1;
	for (int i = 0; i < count; i++) {
		int type = rand() % 3;
		switch (type) {
		case 0: {
			result.push_back(make_shared<Circle>(genDouble(minValMul100, maxValMul100)));
			break;
		}
		case 1: {
			result.push_back(make_shared <Ellipse>(genDouble(minValMul100, maxValMul100), genDouble(minValMul100, maxValMul100)));
			break;
		}
		case 2: {
			result.push_back(make_shared <Helix>(genDouble(minValMul100, maxValMul100), genDouble(minValMul100, maxValMul100)));
			break;
		}
		}
	}
	return result;
}

vector<shared_ptr<Circle>> getCircles(vector<shared_ptr<BaseCurve>> curves) {
	vector<shared_ptr<Circle>> result;
	for (auto& curve : curves) {
		if (curve->getType() == "Circle") {
			result.push_back(dynamic_pointer_cast<Circle>(curve));
		}
	}
	return result;
}

bool compCircles(shared_ptr<Circle> a, shared_ptr<Circle> b) {
	return a->getRadius() < b->getRadius();
}

int main() {
	srand(time(NULL));
	const int maxCount = 20;
	const int minVal = 0;
	const int maxVal = 10000;
	
	vector<shared_ptr<BaseCurve>> curves = genContOfCurves(maxCount, minVal, maxVal);
	cout << "There are Curves, which randomly generated and contained at first vector:" << endl;
	for (auto& curve : curves) {
		cout << curve->getType() << "{" << endl;
		cout << "\tpoint " << curve->getPoint(M_PI_4) << endl;
		cout << "\tderiv " << curve->getDeriv(M_PI_4) << endl << "}" << endl;

	}
	cout << endl;

	vector<shared_ptr<Circle>> circles = getCircles(curves);
	cout << "There are Circles, which contained at second container:" << endl;
	for (auto& circle : circles) {
		cout << circle->getType() << " with radii = " << circle->getRadius() << endl;
	}
	cout << endl;
	
	sort(circles.begin(), circles.end(), compCircles);
	cout << "There are Circles in sorted second container:" << endl;
	for (auto& circle : circles) {
		cout << circle->getType() << " with radii = " << circle->getRadius() << endl;
	}
	cout << endl;

	double sum = accumulate(cbegin(circles), cend(circles), 0.,
		[](double sum, const std::shared_ptr<Circle>& circle) {
			return sum + circle->getRadius();
		});
	cout << "There are sum of radii of all curves in the second container: " << sum << endl;
}