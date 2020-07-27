#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

template <typename T>
struct coord{
    T x;
    T y;
};

template <typename T>
int outcoord(vector<coord<T>> v);

int main()
{
	cout << "Bessel\n";
	int i;
        vector<coord<double>> A;
	for(i=0; i<11; i++)
	{
            A.push_back({i/10.,cyl_bessel_i(0, i/10.)});
            cout << i/10. << '\t' << A[i].y << '\n';
	}
}


template <typename T>
int outcoord(vector<coord<T>> v)
{
    for (auto e : v)
    {
        cout << e.x << '\t' << e.y << '\n';
    }
    return 0;
};
