#include <iostream>
class LetDebug
{
public:
	void printNum() {
		/*
		short s1 = 32767;
		short s2 = 1;
		short s3 = s1 + s2;
		std::cout << s3 << std::endl;
		*/
	}
};
int main() {
	LetDebug* ld = new LetDebug;
	ld->printNum();

	system("pause");
	return 0;
}