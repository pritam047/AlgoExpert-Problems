#include <vector>
#include<bits/stdc++.h>
using namespace std;

int kadanesAlgorithm(vector<int> array) {
  // Write your code here.
	int bestsum = INT_MIN,sum = 0;
	for(int k=0;k< array.size(); k++){
		sum = max(array[k], sum+array[k]);
		bestsum = max(bestsum, sum);
	}
  return bestsum;
}