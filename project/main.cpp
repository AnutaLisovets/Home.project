#include "Student.h"

int main() {
	Student st;
	Student st1;
	Student st2;

	st.setName("ALEX");
	st.getAge(14);
	st.getMark(4);

	cout << st.getInfo() << endl;
	cout << st1.getInfo() << endl;
	cout << st2.getInfo() << endl;
}