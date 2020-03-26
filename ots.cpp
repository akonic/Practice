#include <bits/stdc++.h>
using namespace std;
void findOrderMRT(int L[], int n)
{

	sort(L, L + n);

	cout << "Optimal order in which programs are to be"
			"stored is: ";
	for (int i = 0; i < n; i++)
		cout << L[i] << " ";
	cout << endl;
	double MRT = 0;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j <= i; j++)
			sum += L[j];
		MRT += sum;
	}
	MRT /= n;
	cout << "Minimum Retrieval Time of this"
		" order is " << MRT;
}
int main()
{
	int n,s=0;
    cout<<"Enter no. of terms : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements :\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
	findOrderMRT(a, n);
	return 0;
}
