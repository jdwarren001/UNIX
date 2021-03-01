#include <iostream>

using namespace std;

int main(int argc, char **argv){
    int x, y;

    cout << getenv("PATH") << endl;

    y = atoi(argv[1]);
    if(y > 100) {
        cerr << "Paramter too high" << endl;
    }
    cin >> x;
    if (x > y) cout << x << endl; // normal output
    else cerr << x << endl; // error output

    return 0;
}

/*
Prints the file path to current folder in.
Just compres two numbers and playing with outputs and inputs from the command line
Where those outputs go in the files and that kinda stuff
*/

// -> ./CreatingAnExe.cpp 30 <input.text >output.txt 2>error.txt

/*
./ runis the file
30 <input.txt is out input 
>output.txt puts the output of the file into an "output.txt" file
2>error.txt puts the *ERROR STREAM* into the file "error.txt"

To concadinate the file output, use two arrows
">>"" for output -> doesn't rewrite the previous file
*/
