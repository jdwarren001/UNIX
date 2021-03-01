# Test 1 2/24/21 11:00am
 > 25 Multiple Choice
---
### All file conecepts on Linux/Unix
    Linux
    - / is used as seperator
    - $ is env. var
    MS Windows
    - \ is used (Less good)
    - % is env. var

### Three levels of each file
    User
    Group
    Anybody
    -ROOT (Access to everything, doesn't count as level)
### Files on computer
    - Swap (Not part of /)

### Three types of access to files
    xrw -> Execute, read, write

### ls 
    number of ports
    number of drives
    list files in folders

    -a Hidden files
    -l Long Listing (Permission and size)
    -r Recursion

### cd
    cd (no args) -> Go to home directory
    cd .. -> go on / higher (parent)
    cd / -> go to root directory (cant edit that stuff)

### chmod
    Change access permissions

    Add/remove xrw
     - Octal 755
     - u+x (user gains exe)

### chown
    Change user:group

    Give who can access/modify/run file

### head/tail
    First or last few lines of a file

    Default is 10
    -n is number you'd like to see
### `more/less`
    more fills screen with one more line
    entire page of document

### ln
    making soft links (OR HARD)
    points from one link to another file

### `Coding`
    dirent.h // (d_name)
    stat.h // (sb.st_mode & S_IFMT) == S_IFDIR
    Writing your own ls

### Redirection
    < Send following as input
    > send following as output
    2> send cerr output
    << send to cin (not overriding)
    >> send to output (not overriding)
    2>> add cerr to current file
    a | b while running process a, send output to process b