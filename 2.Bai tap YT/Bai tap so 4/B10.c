#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
 
	int a[] = { 2,5,5,5,5,4,5,5,4,4,3,3,3,2,5,3 };
	int n = sizeof(a)/sizeof(a[0]);
 
	sort(a,a+n);
 
	int i = 0, max = 0,index = 0;
	int frequency;
	while(i < n)	{
 
		frequency = 1;
 
		while(a[i] == a[i+1])	{
 
			frequency++;
			i++;
		}
 
		if(max < frequency)	{
 
			max = frequency;
			index = i;
		}
 
		i++;
	}
 
	cout << "Maximum frequency: " << max << endl;
	cout << "Element has maximum frequency factor: " << a[index] << endl;
 
	return 0;
}
