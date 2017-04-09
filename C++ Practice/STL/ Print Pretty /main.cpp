#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        ios::fmtflags f( cout.flags() );      
        cout << setw(0) << internal;
        cout<<"0x"<<std::hex <<(nouppercase)<<(long long int)(A)<<endl;

        std::cout.precision(2);
        cout << fixed << setw(15)  << setfill('_') << right << showpos << B << endl;

        cout.flags( f );
        std::cout.precision(9);
        cout<<std::scientific<<C<<endl;
	}
	return 0;

}
