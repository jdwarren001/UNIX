#include <iostream>
#include <dirent.h>
#include <sys/stat.h>

using namespace std;

bool lsr(string name, string path) {
    DIR *d;
    struct dirent *di;
    struct stat sb;
    string newpath = path + "/" + name;

    if (path == ""){
        newpath = name;
    }

    cout << "Folder found: " << newpath << endl;

    d = opendir(newpath.c_str());
    if (d == NULL) {
        cerr << "COULD NOT FIND FILE" << endl;
        return 0;
    }

    do {
        di = readdir(d);
        if (di != NULL) {
            string newname(di -> d_name);
            string dipath = newpath + "/" + newname;
            cout << newname << endl;

            if (stat(dipath.c_str(), &sb) == -1) {
                perror("stat");
                exit(EXIT_FAILURE);
            }

            if ((sb.st_mode & S_IFMT) == S_IFDIR) {
                if (newname != "." && newname != "..") {
                    lsr(newname, newpath);
                }
            }
        }
    } while (di != NULL);
    closedir(d);
    return(0); 
}

int main() {
    lsr("..", "");
    return 0;
}