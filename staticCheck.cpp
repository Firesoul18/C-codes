#include<iostream>

class Main{
	public:
	static int x;
	int y;
};
int Main::x =0;

int main(void){
	std::cout<<Main::x;
	return(0);
}