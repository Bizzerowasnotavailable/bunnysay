#include <iostream>
#include <string>

int main() {
    using namespace std;
    string a;
    a = "explosion prevention"; // i had to declare this or else the program would fucking die
	
    cout << "bunnysay" << endl << "like cowsay, but way worse" << endl;
    cout << "type bunny -h for help" << endl;
    cout << "tell me: ";
    getline(cin, a);
	
    // help command
    if (a == "bunny -h") {
        cout << "bunnysay was created by b0ngCLoud (bizzero) and it currently only has the standard bunny ascii" << endl << "in the future, i WILL be adding more shit (unless i get bored of the project)";
        return 0;
    } else {
        int length = a.length();
        string line(length + 4, '-'); // this is implemented so that the --- borders are as long as the text itself rather than being a fixed value
		
        cout << line << endl << "| " << a << " |" << endl <<
		line << endl <<
		"^ ^      ||" << endl <<
		"(0w0) <3 ||" << endl <<
		"/> >|    ||" << endl << " " << endl << "by Bizzero - 2025" << endl;
		
        return 0; // dont fully know what the fuck this is for but if I dont put it there then the whole thing explodes so uhhh
    }
}