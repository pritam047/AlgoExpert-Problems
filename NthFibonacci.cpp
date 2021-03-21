using namespace std;

int getNthFib(int n) {
  // Write your code here.
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return getNthFib(n-1)+getNthFib(n-2);
  return -1;
}
// O(n) time |O(1) space