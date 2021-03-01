# Exectuables for UNIX:

- g++ "file name" -o "file exec"
- ./file exec

---

- pwd 
    > file path
- ls -l 
  > *list* of the files in the folder
- ls -a 
  > *all* including the hidden files! (Dot files)
- ls -la 
  > list of all dot files and normal files
- ls -Ral 
  > list of all files, dot files, and the contents of the folders as well (Recursively)
- ls "file"*
  > Looks for any file with the "file" name and lists them
- grep -i "folder name to search through"
  > Finds very similar to looking for a file. Could count how many files have a something in the file name

---

- mkdir 
  > make a folder
- mv 
  > move or rename
  - mv test1 test2 (Renames as test2)
  - mv test1 folder1 (Moves test1 to folder1)

- rm -r 
  > removes folder (just rm to remove file)

- cp
  > copy

---

- man 
  > gives options on the thing mentioned
- cat "file" 
  > reads file in cmd line
- vi and nano
  > View and edit the innards of a file
- sudo
  >God mode

---

- chown newowner:newgroup file.txt
  > change owner 
  * changes the ownership from current to `owner:group`
  * most likely will have to use "sudo"
- chmod who+-rwx
  > change what access to files that user has
  * chmod u+x-w (`User gains exec and loses write`)
  * chmod -x (`All people (root, group, user) lose exec access`)
  * can do `chmod 700 "file name"`
- groups
  >tells the groups of the on the pc

- echo $SHELL
  >Tells you which shell you are in
---

- ls -Ral | grep "file name"
  > makes a list of all files and looks for anything with the "file name" and prints it

---

- ln -s "newest version" "link to file"
  >Multiple link names all pointing newest version of file
   * Make a new version, update link to new version instead of multiple files

---

- tail -n "#" 
  > finds the ends # of files in folder

---

- pdftotext "pdf"
  > converts pdf image into the text version so it can be readible by the system

<br><br><br>

---
### <b>./CreatingAnExe.cpp 30 <input.text >output.txt 2>error.txt</b>
 - ./ runs file
 - 30 is an input, made so by <input.txt
 - ">output.txt" -> puts output into output.txt file
 - 2> is for the error output
 - ">>" is for not overwriting the files