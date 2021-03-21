#include <vector>
using namespace std;

int binarySearch(vector<int> array, int target) {
  // Write your code here.
	int l=0,r=array.size()-1;
	while(l<=r)
	{
		int mid = (l+r)/2;
		if(array[mid]>target)
			r=mid-1;
		else
			if(array[mid]<target)
				l=mid+1;
		else
			return mid;
	}
  return -1;
}
