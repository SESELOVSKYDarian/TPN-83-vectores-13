#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> GenerarVector(int n);
int EsParYDivisiblePor3(vector<int> a);
void MostrarVector(vector<int> A);

int main()
{
    vector<int> A;
    vector<int> B;
    srand(time(NULL));
    int N = 11, a = 0;
    A = GenerarVector(N);
    a = EsParYDivisiblePor3(A);
    MostrarVector(A);
    cout<<"El primer numero par y divisible por 3: "<<a<<endl;
    return 0;
}

vector<int> GenerarVector(int n)
{
    vector<int> V;
    int e;
    for (int i = 0; i < n; i++)
    {
        e = rand() % 10;
        V.push_back(e);
    }
    return V;
}

int EsParYDivisiblePor3(vector<int> a)
{
	int e = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i]%6==0)
		{
			e = a[i];
		    i = a.size();
		}
	}
    return e;
}

void MostrarVector(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << "/";
    }
    cout << endl;
}