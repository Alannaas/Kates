#include <iostream>
#include <fstream>
using namespace std;
int main()
{
                  	int n,          	//dienø skaièius
                                       	t,                	//kiek laiko katinas yra dresuojamas
                                       	min=0;       	// Kiek laiko katinas yra dresuojamas per n dienas
                  	double Vid;   // Vidurkis

                  	ifstream fd("Duomenys.txt");
                  	fd >> n;

                  	for (int i = 0; i < n; i++)
                  	{
                                       	fd >> t;
                                       	min += t;
                  	}
                  	Vid = min / n;

                  	ofstream fr("Rezultatai.txt");
                  	fr << min << endl;
                  	fr << Vid << endl;

}
