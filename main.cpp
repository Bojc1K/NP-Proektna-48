#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main(){
	vector<int> vec;
	int siz = 0;
    int siz2 = 0;
	int br = 0;
    string s;
	string a;

	cout<<"Vnesete indeks, ime i prezime: ";
	cin>>s;
	cout<<"Vnesete email adresa: ";
	cin>>a;
	cout<<s<<" "<<a<<endl;

	siz = s.length();
    siz2 = a.length();
    if(siz > siz2){
	for(int i = 0; i < siz; i++)
	{
		br = int(s.at(i));
		vec.push_back(br);

        if(siz2 > i){
        br = int(a.at(i));
		vec.push_back(br);
        }
	}
    }else{
        	for(int i = 0; i < siz2; i++){

            if(siz > i){
                br = int(s.at(i));
                vec.push_back(br);
                    }

        br = int(a.at(i));
		vec.push_back(br);

	}
 }

    siz = vec.size();
    cout<<"\n\nPecatenje na vektorot: "<<endl;
	for(int i = 0; i < siz; i++){
		cout<<vec.at(i)<<" ";
	}
    cout<<endl;

	sort(vec.begin(), vec.end()); //Sortiranje
    cout<<"\n\nPecatenje na sortiran vektor: "<<endl;
	for(int i = 0; i < siz; i++){
		cout<<vec.at(i)<<" ";
	}	
	cout<<"\n\nVnesete datum na raganje: ";
	for(int i = 0; i < 3; i++){
		cin>>br;
		vec.push_back(br);
	}
	ofstream outFile("INKI882.Proekt3.txt"); //Otvoranje nov file
	for (const auto &e : vec) outFile << e << "\n"; //Pecatenje
}
